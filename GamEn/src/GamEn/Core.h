#pragma once

#ifdef GE_PLATFORM_WINDOWS
	#ifdef GE_BUILD_DLL
		#define GAMEN_API __declspec(dllexport)
	#else
		#define GAMEN_API __declspec(dllimport)
	#endif
#else
	#error GamEn only supports Windows!
#endif