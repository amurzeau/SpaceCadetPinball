#pragma once

#include <map>
#include <string>
#include <stdint.h>

enum translation_id
{
    IDS_STRING101,
    IDS_STRING102,
    IDS_STRING103,
    IDS_STRING104,
    IDS_STRING105,
    IDS_STRING106,
    IDS_STRING107,
    IDS_STRING108,
    IDS_STRING109,
    IDS_STRING110,
    IDS_STRING111,
    IDS_STRING112,
    IDS_STRING113,
    IDS_STRING114,
    IDS_STRING115,
    IDS_STRING116,
    IDS_STRING117,
    IDS_STRING118,
    IDS_STRING119,
    IDS_STRING120,
    IDS_STRING121,
    IDS_STRING122,
    IDS_STRING123,
    IDS_STRING124,
    IDS_STRING125,
    IDS_STRING126,
    IDS_STRING127,
    IDS_STRING128,
    IDS_STRING129,
    IDS_STRING130,
    IDS_STRING131,
    IDS_STRING132,
    IDS_STRING133,
    IDS_STRING134,
    IDS_STRING135,
    IDS_STRING136,
    IDS_STRING137,
    IDS_STRING138,
    IDS_STRING139,
    IDS_STRING140,
    IDS_STRING141,
    IDS_STRING142,
    IDS_STRING143,
    IDS_STRING144,
    IDS_STRING145,
    IDS_STRING146,
    IDS_STRING147,
    IDS_STRING148,
    IDS_STRING149,
    IDS_STRING150,
    IDS_STRING151,
    IDS_STRING152,
    IDS_STRING153,
    IDS_STRING154,
    IDS_STRING155,
    IDS_STRING156,
    IDS_STRING157,
    IDS_STRING158,
    IDS_STRING159,
    IDS_STRING160,
    IDS_STRING161,
    IDS_STRING162,
    IDS_STRING163,
    IDS_STRING164,
    IDS_STRING165,
    IDS_STRING166,
    IDS_STRING167,
    IDS_STRING168,
    IDS_STRING169,
    IDS_STRING170,
    IDS_STRING171,
    IDS_STRING172,
    IDS_STRING173,
    IDS_STRING174,
    IDS_STRING175,
    IDS_STRING176,
    IDS_STRING177,
    IDS_STRING178,
    IDS_STRING179,
    IDS_STRING180,
    IDS_STRING181,
    IDS_STRING182,
    IDS_STRING183,
    IDS_STRING184,
    IDS_STRING185,
    IDS_STRING186,
    IDS_STRING187,
    IDS_STRING188,
    IDS_STRING189,
    IDS_STRING190,
    IDS_STRING191,
    IDS_STRING192,
    IDS_STRING193,
    IDS_STRING194,
    IDS_STRING195,
    IDS_STRING196,
    IDS_STRING197,
    IDS_STRING198,
    IDS_STRING199,
    IDS_STRING200,
    IDS_STRING201,
    IDS_STRING202,
    IDS_STRING203,
    IDS_STRING204,
    IDS_STRING205,
    IDS_STRING206,
    IDS_STRING207,
    IDS_STRING208,
    IDS_STRING209,
    IDS_STRING210,
    IDS_STRING211,
    IDS_STRING212,
    IDS_STRING213,
    IDS_STRING214,
    IDS_STRING215,
    IDS_STRING216,
    IDS_STRING217,
    IDS_STRING218,
    IDS_STRING219,
    IDS_STRING220,
    IDS_STRING221,
    IDS_STRING222,
    IDS_STRING223,
    IDS_STRING224,
    IDS_STRING225,
    IDS_STRING226,
    IDS_STRING227,
    IDS_STRING228,
    IDS_STRING229,
    IDS_STRING230,
    IDS_STRING231,
    IDS_STRING232,
    IDS_STRING233,
    IDS_STRING234,
    IDS_STRING235,
    IDS_STRING236,
    IDS_STRING237,
    IDS_STRING238,
    IDS_STRING239,
    IDS_STRING240,
    IDS_STRING241,
    IDS_STRING242,
    IDS_STRING243,
    IDS_STRING244,
    IDS_STRING245,
    IDS_STRING246,
    IDS_STRING247,
    IDS_STRING248,
    IDS_STRING249,
    IDS_STRING250,
    IDS_STRING251,
    IDS_STRING252,
    IDS_STRING253,
    IDS_STRING254,
    IDS_STRING255,
    IDS_STRING256,
    IDS_STRING257,
    IDS_STRING258,
    IDS_STRING259,
    IDS_STRING260,
    IDS_STRING261,
    IDS_STRING262,
    IDS_STRING263,
    IDS_STRING264,
    IDS_STRING265,
    IDS_STRING266,
    IDS_STRING267,
    IDS_STRING268,
    IDS_STRING269,
    IDS_STRING270,
    IDS_STRING271,
    IDS_STRING272,
    IDS_STRING273,
    IDS_STRING274,
    IDS_STRING275,
    IDS_STRING276,
    IDS_STRING277,
    IDS_STRING278,
    IDS_STRING279,
    IDS_STRING280,
    IDS_STRING281,
    IDS_STRING282,
    IDS_STRING283,
    IDS_STRING284,
    IDS_STRING285,
    IDS_STRING286,
    IDS_STRING287,
    IDS_STRING288,
    IDS_STRING289,

    IDS_HIGHSCORES_Caption,
    IDS_HIGHSCORES_Ok,
    IDS_HIGHSCORES_Cancel,
    IDS_HIGHSCORES_Clear,
    IDS_HIGHSCORES_Name,
    IDS_HIGHSCORES_Score,
    IDS_HIGHSCORES_Rank,
    IDS_HIGHSCORES_Rank1,
    IDS_HIGHSCORES_Rank2,
    IDS_HIGHSCORES_Rank3,
    IDS_HIGHSCORES_Rank4,
    IDS_HIGHSCORES_Rank5,
    IDS_KEYMAPPER_Caption,
    IDS_KEYMAPPER_Ok,
    IDS_KEYMAPPER_Cancel,
    IDS_KEYMAPPER_FlipperL,
    IDS_KEYMAPPER_FlipperR,
    IDS_KEYMAPPER_Plunger,
    IDS_KEYMAPPER_BumpLeft,
    IDS_KEYMAPPER_BumpRight,
    IDS_KEYMAPPER_BumpBottom,
    IDS_KEYMAPPER_Default,
    IDS_KEYMAPPER_Help1,
    IDS_KEYMAPPER_Help2,
    IDS_KEYMAPPER_Groupbox1,
    IDS_KEYMAPPER_Groupbox2,
    IDS_Menu1_New_Game,
    IDS_Menu1_About_Pinball,
    IDS_Menu1_High_Scores,
    IDS_Menu1_Exit,
    IDS_Menu1_Sounds,
    IDS_Menu1_Music,
    IDS_Menu1_Help_Topics,
    IDS_Menu1_Launch_Ball,
    IDS_Menu1_Pause_Resume_Game,
    IDS_Menu1_Full_Screen,
    IDS_Menu1_Demo,
    IDS_Menu1_Select_Table,
    IDS_Menu1_Player_Controls,
    IDS_Menu1_1Player,
    IDS_Menu1_2Players,
    IDS_Menu1_3Players,
    IDS_Menu1_4Players,
    IDS_Menu1_MaximumResolution,
    IDS_Menu1_640x480,
    IDS_Menu1_800x600,
    IDS_Menu1_1024x768,
    IDS_Menu1_WindowUniformScale,
    IDS_Menu1_AlternativeRender,
    IDS_Menu1_Language,
    IDS_Menu1_LanguageMax,
    IDS_Menu1_Game,
    IDS_Menu1_Options,
    IDS_Menu1_Select_Players,
    IDS_Menu1_Table_Resolution,
    IDS_Menu1_Window,
    IDS_Menu1_Help,

    IDS_Menu1_UseMaxResolution_640x480,
    IDS_Menu1_UseMaxResolution_800x600,
    IDS_Menu1_UseMaxResolution_1024x768,
};

class translations {
public:
    static std::map<std::string, const std::map<uint32_t, const char*>*> Languages;
    static const std::map<uint32_t, const char*>* get_translations();
};
