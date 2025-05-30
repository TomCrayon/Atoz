#pragma once
/*
	通过几个宏定义就能实现跨平台的动态链接库，
	往后只需要使用AZ_API，就可以使用库内函数，
	无需考虑_declspec(dllexport)只能在Windows下使用的问题。
	---
	再通过AZ_BUILD_H来区分调出方或使用方。从而实现AZ_API的两用。
*/
#ifdef AZ_PLATFORM_WINDOWS	//005：通过预处理器宏判断平台
#ifdef AZ_BUILD_H		//005：宏区分引擎和应用程序,要使它们生效要去项目设置添加相对应的宏定义
		#define Atoz_API __declspec(dllexport) //005：定义前者后者一样
	#else
		#define Atoz_API __declspec(dllimport)
	#endif // AZ_BUILD_H
#else
	#error Atoz only support Windows !


#endif 