#include "translations.h"

#include <stdlib.h>
#include <string.h>
#include <string>

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

static std::map<std::string, const std::map<uint32_t, const char*>*> rc_strings
{
	{ "ar", &rc_strings_arabic_saudi_arabia },
	{ "zh_CN", &rc_strings_chinese_simplified },
	{ "zh_TW", &rc_strings_chinese_traditional },
	{ "cs", &rc_strings_czech },
	{ "da", &rc_strings_danish },
	{ "nl", &rc_strings_dutch },
	{ "en", &rc_strings_english_us },
	{ "fi", &rc_strings_finnish },
	{ "fr", &rc_strings_french },
	{ "de", &rc_strings_german },
	{ "el", &rc_strings_greek },
	{ "he", &rc_strings_hebrew },
	{ "hu", &rc_strings_hungarian },
	{ "it", &rc_strings_italian },
	{ "ja", &rc_strings_japanese },
	{ "ko", &rc_strings_korean },
	{ "nb", &rc_strings_norwegian_bokmal },
	{ "pl", &rc_strings_polish },
	{ "pt_BR", &rc_strings_portuguese_brazilian },
	{ "pt_PT", &rc_strings_portuguese },
	{ "ru", &rc_strings_russian },
	{ "es", &rc_strings_spanish_modern },
	{ "sv", &rc_strings_swedish },
	{ "tr", &rc_strings_turkish },
};

static void GetLanguage(const char* localeName, char* languageOut, int languageOutSize) {
    int i;

    for(i = 0; i < (languageOutSize - 1) && localeName[i] >= 'a' && localeName[i] <= 'z'; i++)
    ;

    strncpy(languageOut, localeName, i);
    languageOut[i] = '\0';
}

static void GetLanguageWithCountry(const char* localeName, char* languageOut, int languageOutSize) {
    int i;

    for(i = 0; i < (languageOutSize - 1) && ((localeName[i] >= 'a' && localeName[i] <= 'z') || localeName[i] == '_' || (localeName[i] >= 'A' && localeName[i] <= 'Z')); i++)
    ;

    strncpy(languageOut, localeName, i);
    languageOut[i] = '\0';
}

const std::map<uint32_t, const char*>* translations::get_translations() {
	const char* LANGUAGE_ENVIRONMENT_VARIABLES[] = { "LANGUAGE", "LC_ALL", "LC_MESSAGES", "LANG"};
    char language[32];

	for(const char* environment_variable : LANGUAGE_ENVIRONMENT_VARIABLES) {
        const char* variable = getenv(environment_variable);
        if(variable) {
            // Try with the full name but without encoding
            GetLanguageWithCountry(variable, language, sizeof(language));

            printf("Trying \"%s\"\n", language);

            auto translation = rc_strings.find(language);
            if(translation != rc_strings.end()) {
                return translation->second;
            }

            // Try without country name
            GetLanguage(variable, language, sizeof(language));

            printf("Trying \"%s\"\n", language);

            translation = rc_strings.find(language);
            if(translation != rc_strings.end()) {
                return translation->second;
            }
        }
    }

    // If no matching language found, use english
    return &rc_strings_english_us;
}
