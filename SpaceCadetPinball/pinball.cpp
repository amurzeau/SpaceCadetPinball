#include "pch.h"
#include "pinball.h"
#include "translations.h"
#include "winmain.h"

int LoadStringAlt(uint32_t uID, LPSTR lpBuffer, int cchBufferMax)
{
	static const std::map<uint32_t, const char*>* translations = translations::get_translations();

	auto str = translations->find(uID);
	if (str == translations->end())
	{
		snprintf(lpBuffer, cchBufferMax, "%d", uID);
		printf("unknown string id %d\n", uID);
		return 0;
	}

	strncpy(lpBuffer, str->second, cchBufferMax);
	return 1;
}

int pinball::quickFlag = 0;
TTextBox* pinball::InfoTextBox;
TTextBox* pinball::MissTextBox;
char pinball::getRcBuffer[6 * 256];
int pinball::rc_string_slot = 0;
int pinball::LeftShift = -1;
int pinball::RightShift = -1;
std::string pinball::BasePath;

char* pinball::get_rc_string(int uID, int a2)
{
	char* result = &getRcBuffer[256 * rc_string_slot];
	if (!LoadStringAlt(uID, &getRcBuffer[256 * rc_string_slot], 255))
		*result = 0;

	if(a2) {
		// Remove & characters
		char* buffer = &getRcBuffer[256 * rc_string_slot];
		int strSize = strlen(buffer) + 1;
		for(size_t i = 0, j = 0; i < strSize; ++i) {
  			if(buffer[i] != '&') {
				buffer[j] = buffer[i];
				j++;
			}
		}
	}
	
	if (++rc_string_slot >= 6)
		rc_string_slot = 0;
	return result;
}

int pinball::get_rc_int(int uID, int* dst)
{
	char buffer[255];
	int result = LoadStringAlt(uID, buffer, 255);
	if (!result)
		return result;
	*dst = atoi(buffer);
	return 1;
}

std::string pinball::make_path_name(const std::string& fileName)
{
	return BasePath + fileName;
}
