#pragma once

#ifdef BE_PLATFORM_WINDOWS
	#ifdef BE_BUILD_DLL
		#define BENGINE_API __declspec(dllexport)
	#else
		#define BENGINE_API __declspec(dllimport)
	#endif // BG_BUILD_DLL
#else
	#error Bengine only supports windows!
#endif // BE_PLATFORM_WINDOWS
