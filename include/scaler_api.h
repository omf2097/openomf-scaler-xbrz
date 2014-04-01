#ifndef _SCALER_API
#define _SCALER_API

#include "plugin_api.h"

enum {
    SCALER_COLOR_FORMAT_ARGB8888 = 0,
    SCALER_COLOR_FORMAT_BGRA8888,
    SCALER_COLOR_FORMAT_RGBA8888,
    SCALER_COLOR_FORMAT_ABGR8888,
};

extern "C" {
int EXPORT scaler_is_factor_available(int factor);
int EXPORT scaler_get_factors_list(const int** factors);
int EXPORT scaler_get_color_format();
int EXPORT scaler_handle(const char* in, char* out, int w, int h, int factor);
}

#endif // _SCALER_API