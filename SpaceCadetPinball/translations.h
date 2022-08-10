#pragma once

#include <map>
#include <stdint.h>

class translations {
public:
    static const std::map<uint32_t, const char*>* get_translations();
};
