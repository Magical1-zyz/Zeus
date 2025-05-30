#pragma once

#ifdef ZU_PLATFORM_WINDOWS

extern Zeus::Application* Zeus::CreateApplication();

int main(int argc, char** argv) 
{
	Zeus::Log::Init();
	ZEUS_CORE_INFO("Welcome to Zeus Engine!");
	ZEUS_WARN("Initialized Zeus Client Logger!");

	auto app = Zeus::CreateApplication();
	app->Run();
	delete app;
}

#endif // ZU_PLATFORM_WINDOWS
