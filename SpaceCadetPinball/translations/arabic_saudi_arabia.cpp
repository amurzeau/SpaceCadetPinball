#include "../pinball.h"
#include "arabic_saudi_arabia.h"

const std::map<uint32_t, const char*> rc_strings_arabic_saudi_arabia = {
    { IDS_Menu1_Game, "&لعبة" },
    { IDS_Menu1_New_Game, "&لعبة جديدة\tF2" },
    { IDS_Menu1_Launch_Ball, "إ&طلاق الكرة" },
    { IDS_Menu1_Pause_Resume_Game, "إيقاف مؤ&قت/استئناف اللعبة\tF3" },
    { IDS_Menu1_High_Scores, "أف&ضل النتائج..." },
    { IDS_Menu1_Demo, "&عرض" },
    { IDS_Menu1_Exit, "إ&نهاء" },
    { IDS_Menu1_Options, "&خيارات" },
    { IDS_Menu1_Full_Screen, "&ملء الشاشة\tF4" },
    { IDS_Menu1_Select_Table, "تحديد &طاولة" },
    { IDS_Menu1_Select_Players, "تحديد اللا&عبين" },
    { IDS_Menu1_1Player, "لاعب وا&حد" },
    { IDS_Menu1_2Players, "لا&عبان" },
    { IDS_Menu1_3Players, "&ثلاثة لاعبين" },
    { IDS_Menu1_4Players, "أ&ربعة لاعبين" },
    { IDS_Menu1_Sounds, "أ&صوات" },
    { IDS_Menu1_Music, "مو&سيقى" },
    { IDS_Menu1_Player_Controls, "عناصر تحكم اللاع&ب...\tF8" },
    { IDS_Menu1_Table_Resolution, "Table &Resolution" },
    { IDS_Menu1_MaximumResolution, "Use &Maximum Resolution" },
    { IDS_Menu1_640x480, "&640 x 480" },
    { IDS_Menu1_800x600, "&800 x 600" },
    { IDS_Menu1_1024x768, "&1024 x 768" },
    { IDS_Menu1_Window, "&Window" },
    { IDS_Menu1_WindowUniformScale, "&Uniform Scaling" },
    { IDS_Menu1_AlternativeRender, "&Alternative Rendering" },
    { IDS_Menu1_Help, "&تعليمات" },
    { IDS_Menu1_Help_Topics, "&مواضيع التعليمات\tF1" },
    { IDS_Menu1_About_Pinball, "&حول Pinball" },
    { IDS_HIGHSCORES_Caption, "أفضل النتائج" },
    { IDS_HIGHSCORES_Ok, "موافق" },
    { IDS_HIGHSCORES_Cancel, "إلغاء الأمر" },
    { IDS_HIGHSCORES_Clear, "&مسح" },
    { IDS_HIGHSCORES_Name, "الاسم" },
    { IDS_HIGHSCORES_Score, "النقاط" },
    { IDS_HIGHSCORES_Rank, "المركز" },
    { IDS_HIGHSCORES_Rank1, "1" },
    { IDS_HIGHSCORES_Rank2, "2" },
    { IDS_HIGHSCORES_Rank3, "3" },
    { IDS_HIGHSCORES_Rank4, "4" },
    { IDS_HIGHSCORES_Rank5, "5" },
    { IDS_KEYMAPPER_Caption, "‎3D Pinball: عناصر تحكم اللاعب" },
    { IDS_KEYMAPPER_Ok, "موافق" },
    { IDS_KEYMAPPER_Cancel, "إلغاء الأمر" },
    { IDS_KEYMAPPER_Default, "الاف&تراضي" },
    { IDS_KEYMAPPER_FlipperL, "المضرب الأي&سر" },
    { IDS_KEYMAPPER_FlipperR, "الم&ضرب الأيمن" },
    { IDS_KEYMAPPER_BumpLeft, "المصد الأيسر في ال&طاولة" },
    { IDS_KEYMAPPER_BumpRight, "المصد الأي&من في الطاولة" },
    { IDS_KEYMAPPER_BumpBottom, "المصد الس&فلي في الطاولة" },
    { IDS_KEYMAPPER_Plunger, "الز&ناد" },
    { IDS_KEYMAPPER_Help1, "لتغيير عناصر التحكم باللعبة، حدد خيارات عناصر التحكم التي تريدها ثم انقر فوق أزرار الأسهم لتغيير مفاتيح محددة ثم اختر " },
    { IDS_KEYMAPPER_Help2, "لاستعادة ‎3D Pinball إلى الإعدادات الأصلية، اختر " },
    { IDS_KEYMAPPER_Groupbox1, "خيارات التحكم" },
    { IDS_KEYMAPPER_Groupbox2, "إرشادات" },
    { IDS_STRING101, "Replay Awarded" },
    { IDS_STRING102, "Ball Locked" },
    { IDS_STRING103, "Center Post\n%ld" },
    { IDS_STRING104, "Bonus Awarded\n%ld" },
    { IDS_STRING105, "Bonus Activated" },
    { IDS_STRING106, "Weapons Upgraded" },
    { IDS_STRING107, "Engine Upgraded" },
    { IDS_STRING108, "Bonus up 1 Million" },
    { IDS_STRING109, "Extra Ball Available\n%ld" },
    { IDS_STRING110, "Extra Ball" },
    { IDS_STRING111, "Reflex Shot Award\n%ld" },
    { IDS_STRING112, "Final Battle Won" },
    { IDS_STRING113, "Hyperspace Bonus\n%ld" },
    { IDS_STRING114, "Hyperspace Bonus Available" },
    { IDS_STRING115, "Jackpot Awarded\n%ld" },
    { IDS_STRING116, "Jackpot Activated" },
    { IDS_STRING117, "Multiball" },
    { IDS_STRING118, "Ramp Bonus Awarded" },
    { IDS_STRING119, "Light Added" },
    { IDS_STRING120, "Ramp Bonus On" },
    { IDS_STRING121, "Light Reset Off" },
    { IDS_STRING122, "Skill Shot\n%ld" },
    { IDS_STRING123, "Game Paused\nF3 to Resume" },
    { IDS_STRING124, "Continue Play" },
    { IDS_STRING125, "F2 Starts New Game" },
    { IDS_STRING126, "Careful..." },
    { IDS_STRING127, "Player 1" },
    { IDS_STRING128, "Player 2" },
    { IDS_STRING129, "Player 3" },
    { IDS_STRING130, "Player 4" },
    { IDS_STRING131, "Demo\nPlayer 1" },
    { IDS_STRING132, "Demo\nPlayer 2" },
    { IDS_STRING133, "Demo\nPlayer 3" },
    { IDS_STRING134, "Demo\nPlayer 4" },
    { IDS_STRING135, "انتهت اللعبة" },
    { IDS_STRING136, "TILT!" },
    { IDS_STRING137, "‏‏يتطلب هذا البرنامج وحدة معالجة مركزية (CPU) 80386 أو أحدث." },
    { IDS_STRING138, "مطلوب 80386" },
    { IDS_STRING139, "3D Pinball for Windows - Space Cadet" },
    { IDS_STRING140, "‏‏تم تعيين عنصر أو أكثر من عناصر تحكم اللاعب إلى نفس المفتاح،\n للوصول إلى أفضل أداء استخدم مفتاح فريد لكل عنصر تحكم." },
    { IDS_STRING141, "‏‏هل تريد مسح أفضل النتائج؟" },
    { IDS_STRING142, "تأكيد" },
    { IDS_STRING143, "‏‏WAVEMIX.INF مفقود - يجب أن يكون في دليل pinball!" },
    { IDS_STRING144, "‏‏تحذير:" },
    { IDS_STRING145, "Ship Re-Fueled" },
    { IDS_STRING146, "Gravity Well" },
    { IDS_STRING147, "Time Warp Forward" },
    { IDS_STRING148, "Time Warp Backward" },
    { IDS_STRING149, "Maelstrom!" },
    { IDS_STRING150, "Wormhole" },
    { IDS_STRING151, "Awaiting Deployment" },
    { IDS_STRING152, "Flags Upgraded" },
    { IDS_STRING153, "Bonus Hold" },
    { IDS_STRING154, "Level One Commendation" },
    { IDS_STRING155, "Level Two Commendation" },
    { IDS_STRING156, "Level Three Commendation" },
    { IDS_STRING157, "Field Multiplier 2x" },
    { IDS_STRING158, "Field Multiplier 3x" },
    { IDS_STRING159, "Field Multiplier 5x" },
    { IDS_STRING160, "Field Multiplier 10x" },
    { IDS_STRING161, "Target Practice" },
    { IDS_STRING162, "Launch Training" },
    { IDS_STRING163, "Re-Entry Training" },
    { IDS_STRING164, "Science" },
    { IDS_STRING165, "Stray Comet" },
    { IDS_STRING166, "Black Hole" },
    { IDS_STRING167, "Space Radiation" },
    { IDS_STRING168, "Bug Hunt" },
    { IDS_STRING169, "Alien Menace" },
    { IDS_STRING170, "Rescue" },
    { IDS_STRING171, "Satellite Retrieval" },
    { IDS_STRING172, "Recon" },
    { IDS_STRING173, "Doomsday Machine" },
    { IDS_STRING174, "Cosmic Plague" },
    { IDS_STRING175, "Secret" },
    { IDS_STRING176, "Time Warp" },
    { IDS_STRING177, "Maelstrom" },
    { IDS_STRING178, "Mission Accepted\n%ld" },
    { IDS_STRING179, "Mission Completed\n%ld" },
    { IDS_STRING180, "%s Mission Selected" },
    { IDS_STRING181, "Black Hole\n%ld" },
    { IDS_STRING182, "Gravity Normalized\n%ld" },
    { IDS_STRING183, "Gravity Well\n%ld" },
    { IDS_STRING184, "الترقية إلى %s" },
    { IDS_STRING185, "Cadet" },
    { IDS_STRING186, "Ensign" },
    { IDS_STRING187, "Lieutenant" },
    { IDS_STRING188, "Captain" },
    { IDS_STRING189, "Lt Commander" },
    { IDS_STRING190, "Commander" },
    { IDS_STRING191, "Commodore" },
    { IDS_STRING192, "Admiral" },
    { IDS_STRING193, "Fleet Admiral" },
    { IDS_STRING194, "Wormhole Opened" },
    { IDS_STRING195, "Crash Bonus\n%ld" },
    { IDS_STRING196, "Replay Ball" },
    { IDS_STRING197, "Re-Deploy" },
    { IDS_STRING198, "Player 1 Shoot Again" },
    { IDS_STRING199, "Player 2 Shoot Again" },
    { IDS_STRING200, "Player 3 Shoot Again" },
    { IDS_STRING201, "Player 4 Shoot Again" },
    { IDS_STRING202, "‏‏تم إنشاء ‎3D Pinball Table لصالح Microsoft من قبل Maxis.\nلمزيد من المعلومات اتصل بـ ‎(800)-336-2947\n(بالنسبة لعملاء الولايات المتحدة وكندا فقط)\nحقوق النشر (c) 1995 Maxis." },
    { IDS_STRING203, "‏‏تم إنشاء ‎3D Pinball Table لصالح Microsoft من قبل Maxis. حقوق النشر(c) ‏1995 ‎ Maxis." },
    { IDS_STRING204, "حول ‎3D Pinball" },
    { IDS_STRING205, "Hit Mission Targets To Select Mission" },
    { IDS_STRING206, "Re-Fuel Ship" },
    { IDS_STRING207, "Launch Ramp To Accept %s Mission" },
    { IDS_STRING208, "Attack Bumpers Hits\nLeft: %d" },
    { IDS_STRING209, "Target Training Passed" },
    { IDS_STRING210, "Mission Aborted" },
    { IDS_STRING211, "Launches Left: %d" },
    { IDS_STRING212, "Launch Training Passed" },
    { IDS_STRING213, "Re-Entries Left: %d" },
    { IDS_STRING214, "Re-Entry Training Passed" },
    { IDS_STRING215, "Drop Targets\nLeft: %d" },
    { IDS_STRING216, "Science Mission Completed" },
    { IDS_STRING217, "Warning -- Low Fuel" },
    { IDS_STRING218, "Fill Right Hazard Banks" },
    { IDS_STRING219, "Hyperspace Launch" },
    { IDS_STRING220, "Comet Destroyed" },
    { IDS_STRING221, "Enter Wormhole" },
    { IDS_STRING222, "Radiation Eliminated" },
    { IDS_STRING223, "Upgrade Launch Bumpers" },
    { IDS_STRING224, "Enter Black Hole" },
    { IDS_STRING225, "Black Hole Eliminated" },
    { IDS_STRING226, "Targets\nLeft: %d" },
    { IDS_STRING227, "Xenomorphs Destroyed" },
    { IDS_STRING228, "Upgrade Flags" },
    { IDS_STRING229, "Hyperspace Launch" },
    { IDS_STRING230, "Survivors Rescued" },
    { IDS_STRING231, "Aliens Repelled" },
    { IDS_STRING232, "Hit Fuel Targets" },
    { IDS_STRING233, "Remote Attack Bumper Hits\nLeft: %d" },
    { IDS_STRING234, "Satellite Repaired" },
    { IDS_STRING235, "Lane Passes\nLeft: %d" },
    { IDS_STRING236, "Shoot Ball Up Fuel Chute" },
    { IDS_STRING237, "Survey Complete" },
    { IDS_STRING238, "Out Lane Passes\nLeft: %d" },
    { IDS_STRING239, "Doomsday Machine Destroyed" },
    { IDS_STRING240, "Roll Flags: %d" },
    { IDS_STRING241, "Hit Space Warp Rollover" },
    { IDS_STRING242, "Plague Eliminated" },
    { IDS_STRING243, "Hit Yellow Wormhole" },
    { IDS_STRING244, "Hit Red Wormhole" },
    { IDS_STRING245, "Hit Green Wormhole" },
    { IDS_STRING246, "Plans Recovered" },
    { IDS_STRING247, "Rebound Hits\nLeft: %d" },
    { IDS_STRING248, "Hit Hyperspace Chute or Launch Ramp" },
    { IDS_STRING249, "Drop Target Hits\nLeft: %d" },
    { IDS_STRING250, "Spot Target Hits\nLeft: %d" },
    { IDS_STRING251, "Lanes Passes\nLeft: %d" },
    { IDS_STRING252, "Shoot Ball Up Fuel Chute" },
    { IDS_STRING253, "Hit Launch Ramp" },
    { IDS_STRING254, "Hit Flags" },
    { IDS_STRING255, "Hit Worm Hole" },
    { IDS_STRING256, "Hyperspace Chute to end Maelstrom" },
    { IDS_STRING257, "pinball.mid" },
    { IDS_STRING258, "1 UseBitmapFont" },
    { IDS_STRING259, "90 Left Flipper Key" },
    { IDS_STRING260, "191 Right Flipper Key" },
    { IDS_STRING261, "32 Plunger Key" },
    { IDS_STRING262, "88 Bump Left Key" },
    { IDS_STRING263, "190 Bump Right Key" },
    { IDS_STRING264, "38 Bump Bottom Key" },
    { IDS_STRING265, "Software\\Microsoft\\Plus!\\Pinball" },
    { IDS_STRING266, "SpaceCadet" },
    { IDS_STRING267, "1c7c22a0-9576-11ce-bf80-444553540000" },
    { IDS_STRING268, "PINBALL.DAT" },
    { IDS_STRING269, "Space Cadet" },
    { IDS_STRING270, "‏‏خطأ:" },
    { IDS_STRING271, "‏‏لا يمكن العثور على طاولات أخرى." },
    { IDS_STRING272, "‎3D Pinball\nSpace Cadet" },
    { IDS_STRING273, "الترقية إلى %s" },
    { IDS_STRING274, "خفض الرتبة إلى %s" },
    { IDS_STRING275, "Upgrade Attack Bumpers" },
    { IDS_STRING276, "Fill Left Hazard Banks" },
    { IDS_STRING277, "HIGH SCORE" },
    { IDS_STRING278, "pinball.chm" },
    { IDS_STRING279, "‏‏لا توجد ذاكرة كافية لتشغيل ‎3D Pinball." },
    { IDS_STRING280, "نقاط تسجيل اللاعب 1\n%ld" },
    { IDS_STRING281, "نقاط تسجيل اللاعب 2\n%ld" },
    { IDS_STRING282, "نقاط تسجيل اللاعب 3\n%ld" },
    { IDS_STRING283, "نقاط تسجيل اللاعب 4\n%ld" },
    { IDS_STRING284, "أفضل النتائج 1\n%ld" },
    { IDS_STRING285, "أفضل النتائج 2\n%ld" },
    { IDS_STRING286, "أفضل النتائج 3\n%ld" },
    { IDS_STRING287, "أفضل النتائج 4\n%ld" },
    { IDS_STRING288, "أفضل النتائج 5\n%ld" },
    { IDS_STRING289, "255 255 255   (R G B لون الخط الافتراضي)" },
    { IDS_Menu1_UseMaxResolution_640x480, "Use &Maximum Resolution (640 x 480)" },
    { IDS_Menu1_UseMaxResolution_800x600, "Use &Maximum Resolution (800 x 600)" },
    { IDS_Menu1_UseMaxResolution_1024x768, "Use &Maximum Resolution (1024 x 768)" },
};
