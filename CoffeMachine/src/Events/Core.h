#pragma once
#define COFFEE_BUILD_DLL

//if in Windows PlatForm
#ifdef PLATFORM_WINDOWS
//#if COFFEE_DYNAMIC_LINK
	#ifdef COFFEE_BUILD_DLL
		#define COFFEE_API __declspec(dllexport)
	#else
		#define COFFEE_API __declspec(dllimport)
	#endif
#else
	#define COFFEE_API
error CoffeeMachine now can be used in Windows!
#endif

// log system by spdlog
#ifdef Coffe_ENABLE_ASSERTS
	#define Coffee_ASSERT(x, ...){if(!x){COFFEE_ERROR("Assertion Failed: {0}",__VA_ARGS__);__debugbreak();}}
	#define Coffee_CORE_ASSERT(x, ...){if(!x){COFFEE_CORE_ERROR("Assertion Failed: {0}",__VA_ARGS__);__debugbreak();}}
#else
	#define Coffee_ASSERT(x, ...)
	#define Coffee_CORE_ASSERT(x, ...)
#endif 

#define BIT(x) (1 << x)

//#define COFFEE_BIND_EVENT_FN(fn) std::bind(&fn, this, std::placeholders::_1)
