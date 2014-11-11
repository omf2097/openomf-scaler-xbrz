#ifndef _PLUGIN_API
#define _PLUGIN_API

#ifdef _WIN32
#define EXPORT __declspec(dllexport)
#else
#define EXPORT
#endif

extern "C" {
const char* EXPORT plugin_get_name();
const char* EXPORT plugin_get_author();
const char* EXPORT plugin_get_license();
const char* EXPORT plugin_get_type();
const char* EXPORT plugin_get_version();
}

#endif // _PLUGIN_API
