#pragma once

#ifdef ZU_PLATFORM_WINDOWS

extern Zeus::Application* Zeus::CreateApplication();

int main(int argc, char** argv) 
{
	printf("Zeus Engine\n");
	auto app = Zeus::CreateApplication();
	app->Run();
	delete app;
}

#endif // ZU_PLATFORM_WINDOWS
