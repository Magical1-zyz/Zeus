#pragma once

#ifdef  ZU_PLATFORM_WINDOWS
	#ifdef ZU_BUILD_DLL
		#define ZEUS_API _declspec(dllexport)
	#else
		#define ZEUS_API _declspec(dllimport)
	#endif // ZU_BUILD_DLL
#else
	#error Zeus only support Windows!
#endif //  ZU_PLATFORM_WINDOWS
