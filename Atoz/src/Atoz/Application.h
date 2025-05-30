#pragma once
//005: 应用类
#include "Core.h"

namespace Atoz {
	
	class Atoz_API Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();
//		static Application& Get() { return *s_Instance; }
	};
	
	//005：在应用程序中实现这个函数
	Application* CreateApplication();
	

}//end namespace Atoz

