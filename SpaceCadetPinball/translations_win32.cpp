#include "translations.h"

#include <winnt.h>
#include <winnls.h>

#include "translations/arabic_saudi_arabia.h"
#include "translations/chinese_simplified.h"
#include "translations/chinese_traditional.h"
#include "translations/czech.h"
#include "translations/danish.h"
#include "translations/dutch.h"
#include "translations/english_us.h"
#include "translations/finnish.h"
#include "translations/french.h"
#include "translations/german.h"
#include "translations/greek.h"
#include "translations/hebrew.h"
#include "translations/hungarian.h"
#include "translations/italian.h"
#include "translations/japanese.h"
#include "translations/korean.h"
#include "translations/norwegian_bokmal.h"
#include "translations/polish.h"
#include "translations/portuguese_brazilian.h"
#include "translations/portuguese.h"
#include "translations/russian.h"
#include "translations/spanish_modern.h"
#include "translations/swedish.h"
#include "translations/turkish.h"

static const std::map<LANGID, const std::map<uint32_t, const char*>*> rc_strings
{
	{ MAKELANGID(LANG_ARABIC, SUBLANG_ARABIC_SAUDI_ARABIA), &rc_strings_arabic_saudi_arabia },
	{ MAKELANGID(LANG_CHINESE, SUBLANG_CHINESE_SIMPLIFIED), &rc_strings_chinese_simplified },
	{ MAKELANGID(LANG_CHINESE, SUBLANG_CHINESE_TRADITIONAL), &rc_strings_chinese_traditional },
	{ MAKELANGID(LANG_CZECH, SUBLANG_DEFAULT), &rc_strings_czech },
	{ MAKELANGID(LANG_DANISH, SUBLANG_DEFAULT), &rc_strings_danish },
	{ MAKELANGID(LANG_DUTCH, SUBLANG_DUTCH), &rc_strings_dutch },
	{ MAKELANGID(LANG_ENGLISH, SUBLANG_ENGLISH_US), &rc_strings_english_us },
	{ MAKELANGID(LANG_FINNISH, SUBLANG_DEFAULT), &rc_strings_finnish },
	{ MAKELANGID(LANG_FRENCH, SUBLANG_FRENCH), &rc_strings_french },
	{ MAKELANGID(LANG_GERMAN, SUBLANG_GERMAN), &rc_strings_german },
	{ MAKELANGID(LANG_GREEK, SUBLANG_DEFAULT), &rc_strings_greek },
	{ MAKELANGID(LANG_HEBREW, SUBLANG_DEFAULT), &rc_strings_hebrew },
	{ MAKELANGID(LANG_HUNGARIAN, SUBLANG_DEFAULT), &rc_strings_hungarian },
	{ MAKELANGID(LANG_ITALIAN, SUBLANG_ITALIAN), &rc_strings_italian },
	{ MAKELANGID(LANG_JAPANESE, SUBLANG_DEFAULT), &rc_strings_japanese },
	{ MAKELANGID(LANG_KOREAN, SUBLANG_DEFAULT), &rc_strings_korean },
	{ MAKELANGID(LANG_NORWEGIAN, SUBLANG_NORWEGIAN_BOKMAL), &rc_strings_norwegian_bokmal },
	{ MAKELANGID(LANG_POLISH, SUBLANG_DEFAULT), &rc_strings_polish },
	{ MAKELANGID(LANG_PORTUGUESE, SUBLANG_PORTUGUESE_BRAZILIAN), &rc_strings_portuguese_brazilian },
	{ MAKELANGID(LANG_PORTUGUESE, SUBLANG_PORTUGUESE), &rc_strings_portuguese },
	{ MAKELANGID(LANG_RUSSIAN, SUBLANG_DEFAULT), &rc_strings_russian },
	{ MAKELANGID(LANG_SPANISH, SUBLANG_SPANISH_MODERN), &rc_strings_spanish_modern },
	{ MAKELANGID(LANG_SWEDISH, SUBLANG_SWEDISH), &rc_strings_swedish },
	{ MAKELANGID(LANG_TURKISH, SUBLANG_DEFAULT), &rc_strings_turkish },
};

const std::map<uint32_t, const char*>* translations::get_translations() {
	LANGID userLanguage = GetUserDefaultUILanguage();

	auto translation = rc_strings.find(userLanguage);
	if (translation != rc_strings.end())
	{
		return translation->second;
	}

    // Fallback by iterating all translations to find one with the same primary language
    for(const auto& item : rc_strings)
    {
        if(PRIMARYLANGID(item.first) == PRIMARYLANGID(userLanguage)) {
            return item.second;
        }
    }

    // If no matching language found, use english
    return &rc_strings_english_us;
}
