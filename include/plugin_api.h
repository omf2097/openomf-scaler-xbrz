#ifndef _PLUGIN_API
#define _PLUGIN_API

#define EXPORT __declspec(dllexport)

extern "C" {
const char* EXPORT plugin_get_name();
const char* EXPORT plugin_get_author();
const char* EXPORT plugin_get_license();
const char* EXPORT plugin_get_type();
}

#endif // _PLUGIN_API