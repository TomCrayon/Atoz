#pragma once

#ifdef AZ_PLATFORM_WINDOWS

extern Atoz::Application* Atoz::CreateApplication();

int main(int argc, char** argv)
{
	printf("Atoz Engine！！");
	auto app = Atoz::CreateApplication();
	app->Run();
	delete app;
}

#endif