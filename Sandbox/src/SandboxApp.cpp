#include <Atoz.h>//005: 想要这样用方括号需要专门去项目设置添加额外的include目录路径。
// 我的这个是在$(SolutionDir)Atoz\src;


class Sandbox : public Atoz::Application
{
public:
	Sandbox() {}
	~Sandbox() {}
};

Atoz::Application* Atoz::CreateApplication()
{//005: 在头文件只做了声明，在这里定义。。。
	return new Sandbox();
}