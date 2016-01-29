// 9 june 2015

// Visual Studio (Microsoft's compilers)
// VS2013 is needed for va_copy().
#ifdef _MSC_VER
#if _MSC_VER < 1800
// NOTE 2016-01-29 |va_copy| is not used in Windows, so no problem
//#error Visual Studio 2013 or higher is required to build libui.

// For 'drawtext.cpp'
#ifdef __cplusplus
#include <dwrite.h>
// SEMI_LIGHT not declared/implemented, however it should locate between LIGHT and NORMAL
DWRITE_FONT_WEIGHT DWRITE_FONT_WEIGHT_SEMI_LIGHT = (DWRITE_FONT_WEIGHT) ((DWRITE_FONT_WEIGHT_LIGHT+DWRITE_FONT_WEIGHT_NORMAL) / 2);
#endif

#endif
#endif

// MinGW
#ifdef __MINGW32__
#error At present, MinGW is not supported; see README.md for details.
#endif

// other compilers can be added here as necessary
