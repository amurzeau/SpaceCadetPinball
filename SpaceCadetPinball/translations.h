#pragma once

#include <map>
#include <stdint.h>

class translations {
public:
    static std::map<std::string, const std::map<uint32_t, const char*>*> Languages;
    static const std::map<uint32_t, const char*>* get_translations();
};
