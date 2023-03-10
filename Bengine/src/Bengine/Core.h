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



#ifdef BE_DEBUG
	#define BE_ENABLE_ASSERTS
#endif

#ifdef BE_ENABLE_ASSERTS
	#define BE_ASSERT(x, ...) { if(!(x)) {BE_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak();}}
	#define BE_CORE_ASSERT(x, ...) { if(!(x)) {BE_CORE_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak();}}	
#else
	#define BE_ASSERT(x, ...)
	#define BE_CORE_ASSERT(x, ...)
#endif // BE_ENABLE_ASSERTS


#define BIT(x) (1 << x)

#define BE_BIND_EVENT_FN(fn) std::bind(&fn, this, std::placeholders::_1)
