#pragma once

#ifdef TVLIBDYNAMIC
#define TVLIB_API __declspec(dllexport)
#else
#define TVLIB_API __declspec(dllimport)
#endif