#include "scaler_api.h"
#include "xbrz/xbrz.h"

#define AVAILABLE_FACTORS 4
const int _available[AVAILABLE_FACTORS] {
    2,3,4,5
};


const char* plugin_get_name() {
    return "xBRZ";
}

const char* plugin_get_author() {
    return "Katajakasa";
}

const char* plugin_get_license() {
    return "GPLv3";
}

const char* plugin_get_type() {
    return "scaler";
}

int EXPORT scaler_is_factor_available(int factor) {
    for(int i = 0; i < AVAILABLE_FACTORS; i++) {
        if(_available[i] == factor) {
            return 1;
        }
    }
    return 0;
}

int EXPORT scaler_get_factors_list(const int** factors) {
    *factors = _available;
    return AVAILABLE_FACTORS;
}

int EXPORT scaler_handle(const char* in, char* out, int w, int h, int factor) {
    xbrz::scale(factor, (uint32_t*)in, (uint32_t*)out, w, h);
    return 0;
}

int EXPORT scaler_color_format() {
    return SCALER_COLOR_FORMAT_RGBA8888;
}
