#include "../pinball.h"
#include "chinese_traditional.h"

const std::map<uint32_t, const char*> rc_strings_chinese_traditional = {
    { IDS_Menu1_Game, "遊戲(&G)" },
    { IDS_Menu1_New_Game, "新遊戲(&N)\tF2" },
    { IDS_Menu1_Launch_Ball, "發球(&L)" },
    { IDS_Menu1_Pause_Resume_Game, "暫停/繼續(&P)\tF3" },
    { IDS_Menu1_High_Scores, "高分記錄(&H)..." },
    { IDS_Menu1_Demo, "示範(&D)" },
    { IDS_Menu1_Exit, "結束(&X)" },
    { IDS_Menu1_Options, "選項(&O)" },
    { IDS_Menu1_Full_Screen, "全螢幕(&F)\tF4" },
    { IDS_Menu1_Select_Table, "選擇桌台(&T)" },
    { IDS_Menu1_Select_Players, "選擇玩家(&P)" },
    { IDS_Menu1_1Player, "&1 個玩家" },
    { IDS_Menu1_2Players, "&2 個玩家" },
    { IDS_Menu1_3Players, "&3 個玩家" },
    { IDS_Menu1_4Players, "&4 個玩家" },
    { IDS_Menu1_Sounds, "音效(&S)" },
    { IDS_Menu1_Music, "音樂(&M)" },
    { IDS_Menu1_Player_Controls, "玩家控制(&L)...\tF8" },
    { IDS_Menu1_Table_Resolution, "桌台解析度(&R)" },
    { IDS_Menu1_MaximumResolution, "使用最大解析度(&M)" },
    { IDS_Menu1_640x480, "&640 x 480" },
    { IDS_Menu1_800x600, "&800 x 600" },
    { IDS_Menu1_1024x768, "&1024 x 768" },
    { IDS_Menu1_Window, "視窗(&W)" },
    { IDS_Menu1_WindowUniformScale, "鎖定寬高比縮放(&U)" },
    { IDS_Menu1_AlternativeRender, "使用替代方式渲染(&A)" },
    { IDS_Menu1_Help, "說明(&H)" },
    { IDS_Menu1_Help_Topics, "說明主題(&H)\tF1" },
    { IDS_Menu1_About_Pinball, "關於彈珠台(&A)" },
    { IDS_HIGHSCORES_Caption, "高分記錄" },
    { IDS_HIGHSCORES_Ok, "確定" },
    { IDS_HIGHSCORES_Cancel, "取消" },
    { IDS_HIGHSCORES_Clear, "清除(&C)" },
    { IDS_HIGHSCORES_Name, "姓名" },
    { IDS_HIGHSCORES_Score, "分數" },
    { IDS_HIGHSCORES_Rank, "排名" },
    { IDS_HIGHSCORES_Rank1, "1" },
    { IDS_HIGHSCORES_Rank2, "2" },
    { IDS_HIGHSCORES_Rank3, "3" },
    { IDS_HIGHSCORES_Rank4, "4" },
    { IDS_HIGHSCORES_Rank5, "5" },
    { IDS_KEYMAPPER_Caption, "立體彈珠台：玩家控制" },
    { IDS_KEYMAPPER_Ok, "確定" },
    { IDS_KEYMAPPER_Cancel, "取消" },
    { IDS_KEYMAPPER_Default, "預設(&D)" },
    { IDS_KEYMAPPER_FlipperL, "左擋板(&L)" },
    { IDS_KEYMAPPER_FlipperR, "右擋板(&F)" },
    { IDS_KEYMAPPER_BumpLeft, "左檯碰撞(&T)" },
    { IDS_KEYMAPPER_BumpRight, "右檯碰撞(&R)" },
    { IDS_KEYMAPPER_BumpBottom, "底檯碰撞(&B)" },
    { IDS_KEYMAPPER_Plunger, "發球桿(&P)" },
    { IDS_KEYMAPPER_Help1, "若要變更遊戲控制，請選擇您要的控制選項，然後按方向按鈕來變更指定按鍵，之後選擇［確定］。" },
    { IDS_KEYMAPPER_Help2, "若要將立體彈珠台還原成原始設定，請選擇［預設］，然後選擇［確定］。請使用數字鍵台上的方向鍵，並確定 NUMLOCK 指示燈號在關閉狀態。" },
    { IDS_KEYMAPPER_Groupbox1, "控制選項" },
    { IDS_KEYMAPPER_Groupbox2, "指示" },
    { IDS_STRING101, "贈獎：再玩一次" },
    { IDS_STRING102, "鎖定彈珠" },
    { IDS_STRING103, "中央郵局\n%ld" },
    { IDS_STRING104, "您得到額外加分\n%ld" },
    { IDS_STRING105, "啟動加分" },
    { IDS_STRING106, "武器升級" },
    { IDS_STRING107, "引擎升級" },
    { IDS_STRING108, "加分達到一百萬" },
    { IDS_STRING109, "其他可用的彈珠\n%ld" },
    { IDS_STRING110, "額外的彈珠" },
    { IDS_STRING111, "來回彈射中獎\n%ld" },
    { IDS_STRING112, "贏得最後勝利" },
    { IDS_STRING113, "超空間紅利\n%ld" },
    { IDS_STRING114, "可用的超空間紅利" },
    { IDS_STRING115, "您中了幸運大獎\n%ld" },
    { IDS_STRING116, "啟動幸運大獎" },
    { IDS_STRING117, "多重彈珠" },
    { IDS_STRING118, "超級額外加分" },
    { IDS_STRING119, "新增光線" },
    { IDS_STRING120, "超級加分開啟" },
    { IDS_STRING121, "關閉光線重設" },
    { IDS_STRING122, "技術重點\n%ld" },
    { IDS_STRING123, "遊戲暫停\n按 F3 恢復" },
    { IDS_STRING124, "連續執行" },
    { IDS_STRING125, "F2 開始新遊戲" },
    { IDS_STRING126, "小心..." },
    { IDS_STRING127, "玩家 1" },
    { IDS_STRING128, "玩家 2" },
    { IDS_STRING129, "玩家 3" },
    { IDS_STRING130, "玩家 4" },
    { IDS_STRING131, "展示\n玩家 1" },
    { IDS_STRING132, "展示\n玩家 2" },
    { IDS_STRING133, "展示\n玩家 3" },
    { IDS_STRING134, "展示\n玩家 4" },
    { IDS_STRING135, "遊戲結束" },
    { IDS_STRING136, "TILT!" },
    { IDS_STRING137, "本程式需要 80386 或更快的 CPU。" },
    { IDS_STRING138, "需要 80386" },
    { IDS_STRING139, "Windows 立體彈珠台 - 太空軍校生" },
    { IDS_STRING140, "一個或多個玩家的控制設定為相同按鍵。\n若要有最佳效能，每個控制都要使用唯一的按鍵。" },
    { IDS_STRING141, "清除高分？" },
    { IDS_STRING142, "確認" },
    { IDS_STRING143, "遺失 WAVEMIX.INF - 它必須放在彈珠台目錄下！" },
    { IDS_STRING144, "警告：" },
    { IDS_STRING145, "船舶重新加油" },
    { IDS_STRING146, "重力井" },
    { IDS_STRING147, "時間向前扭曲" },
    { IDS_STRING148, "時間向後扭曲" },
    { IDS_STRING149, "大動亂！" },
    { IDS_STRING150, "蟲孔" },
    { IDS_STRING151, "正在等待調配" },
    { IDS_STRING152, "旗標升級" },
    { IDS_STRING153, "保留紅利" },
    { IDS_STRING154, "第一級獎金" },
    { IDS_STRING155, "第二級獎金" },
    { IDS_STRING156, "第三級獎金" },
    { IDS_STRING157, "戰場乘數 2x" },
    { IDS_STRING158, "戰場乘數 3x" },
    { IDS_STRING159, "戰場乘數 5x" },
    { IDS_STRING160, "戰場乘數 10x" },
    { IDS_STRING161, "目標練習" },
    { IDS_STRING162, "啟動訓練" },
    { IDS_STRING163, "重新輸入訓練" },
    { IDS_STRING164, "科學" },
    { IDS_STRING165, "偏離的彗星" },
    { IDS_STRING166, "黑洞" },
    { IDS_STRING167, "太空輻射" },
    { IDS_STRING168, "搜尋微生物" },
    { IDS_STRING169, "異境驚魂" },
    { IDS_STRING170, "拯救" },
    { IDS_STRING171, "人造衛星回收" },
    { IDS_STRING172, "偵查" },
    { IDS_STRING173, "世界末日機" },
    { IDS_STRING174, "宇宙災禍" },
    { IDS_STRING175, "秘密" },
    { IDS_STRING176, "時間扭曲" },
    { IDS_STRING177, "大動亂" },
    { IDS_STRING178, "任務接受\n%ld" },
    { IDS_STRING179, "任務完成\n%ld" },
    { IDS_STRING180, "%s 任務選擇" },
    { IDS_STRING181, "黑洞\n%ld" },
    { IDS_STRING182, "重力常態化\n%ld" },
    { IDS_STRING183, "重力井\n%ld" },
    { IDS_STRING184, "提升 %s" },
    { IDS_STRING185, "軍校生" },
    { IDS_STRING186, "海軍少尉" },
    { IDS_STRING187, "海軍中尉" },
    { IDS_STRING188, "海軍上尉" },
    { IDS_STRING189, "海軍少校" },
    { IDS_STRING190, "海軍中校" },
    { IDS_STRING191, "海軍准將" },
    { IDS_STRING192, "海軍上將" },
    { IDS_STRING193, "海軍一級上將" },
    { IDS_STRING194, "蟲孔開啟" },
    { IDS_STRING195, "粉碎紅利\n%ld" },
    { IDS_STRING196, "重新玩球" },
    { IDS_STRING197, "重新調配" },
    { IDS_STRING198, "玩家 1 再射一次" },
    { IDS_STRING199, "玩家 2 再射一次" },
    { IDS_STRING200, "玩家 3 再射一次" },
    { IDS_STRING201, "玩家 4 再射一次" },
    { IDS_STRING202, "這個立體彈珠台桌是 Maxis 為 Microsoft 建立的。\n若需進一步的資訊，請電 (800)-336-2947\n(僅適用於美國和加拿大地區的客戶)。\nCopyright (c) 1995 Maxis." },
    { IDS_STRING203, "立體彈珠台桌是 Maxis 為 Microsoft 建立的。Copyright (c) 1995 Maxis." },
    { IDS_STRING204, "立體彈珠台的相關資訊" },
    { IDS_STRING205, "將任務目標對準選取的任務" },
    { IDS_STRING206, "船舶重新加油" },
    { IDS_STRING207, "射入左斜坡道以接受%s任務" },
    { IDS_STRING208, "攻擊緩衝器的打擊\n剩餘：%d" },
    { IDS_STRING209, "通過目標訓練" },
    { IDS_STRING210, "中止任務" },
    { IDS_STRING211, "啟動次數剩餘：%d" },
    { IDS_STRING212, "通過啟動訓練" },
    { IDS_STRING213, "重新次數剩餘：%d" },
    { IDS_STRING214, "通過重新輸入訓練" },
    { IDS_STRING215, "放掉目標\n剩餘：%d" },
    { IDS_STRING216, "完成科學任務" },
    { IDS_STRING217, "警告——燃料不足" },
    { IDS_STRING218, "填入右側危險帶" },
    { IDS_STRING219, "超空間啟動" },
    { IDS_STRING220, "彗星毀滅" },
    { IDS_STRING221, "進入蟲孔" },
    { IDS_STRING222, "輻射消除" },
    { IDS_STRING223, "改善啟動緩衝器" },
    { IDS_STRING224, "進入黑洞" },
    { IDS_STRING225, "黑洞消除" },
    { IDS_STRING226, "目標\n剩餘：%d" },
    { IDS_STRING227, "變形損壞" },
    { IDS_STRING228, "升級旗標" },
    { IDS_STRING229, "超空間啟動" },
    { IDS_STRING230, "解救生還者" },
    { IDS_STRING231, "驅逐外星人" },
    { IDS_STRING232, "命中燃料目標" },
    { IDS_STRING233, "遙控攻擊緩衝器命中\n剩餘：%d" },
    { IDS_STRING234, "人造衛星已修好" },
    { IDS_STRING235, "巷道通行\n剩餘：%d" },
    { IDS_STRING236, "將球射上油道" },
    { IDS_STRING237, "勘查完成" },
    { IDS_STRING238, "外巷道通行\n剩餘：%d" },
    { IDS_STRING239, "世界末日機毀損" },
    { IDS_STRING240, "捲動旗標：%d" },
    { IDS_STRING241, "命中空間扭曲滾轉" },
    { IDS_STRING242, "消除災禍" },
    { IDS_STRING243, "命中黃色蟲孔" },
    { IDS_STRING244, "命中紅色蟲孔" },
    { IDS_STRING245, "命中綠色蟲孔" },
    { IDS_STRING246, "回復計劃" },
    { IDS_STRING247, "彈回命中\n剩餘：%d" },
    { IDS_STRING248, "命中超空間滑道或啟動斜道" },
    { IDS_STRING249, "命中棄置目標\n剩餘：%d" },
    { IDS_STRING250, "命中偵查目標\n剩餘：%d" },
    { IDS_STRING251, "巷道通行\n剩餘：%d" },
    { IDS_STRING252, "將球射上油道" },
    { IDS_STRING253, "命中啟動斜道" },
    { IDS_STRING254, "命中旗標" },
    { IDS_STRING255, "命中蟲孔" },
    { IDS_STRING256, "超空間滑道以終止動亂" },
    { IDS_STRING257, "pinball.mid" },
    { IDS_STRING258, "0 UseBitmapFont" },
    { IDS_STRING259, "90 向左翻轉按鍵" },
    { IDS_STRING260, "191 向右翻轉按鍵" },
    { IDS_STRING261, "32 柱塞按鍵" },
    { IDS_STRING262, "88 擊球桿左鍵" },
    { IDS_STRING263, "190 擊球桿右鍵" },
    { IDS_STRING264, "38 擊球桿底鍵" },
    { IDS_STRING265, "Software\\Microsoft\\Plus!\\Pinball" },
    { IDS_STRING266, "SpaceCadet" },
    { IDS_STRING267, "1c7c22a0-9576-11ce-bf80-444553540000" },
    { IDS_STRING268, "PINBALL.DAT" },
    { IDS_STRING269, "太空軍校生" },
    { IDS_STRING270, "錯誤：" },
    { IDS_STRING271, "無法找到其他表格。" },
    { IDS_STRING272, "立體彈珠台\n太空軍校生" },
    { IDS_STRING273, "提升到 %s" },
    { IDS_STRING274, "降低到 %s" },
    { IDS_STRING275, "改善攻擊緩衝器" },
    { IDS_STRING276, "填入左側障礙帶" },
    { IDS_STRING277, "高分" },
    { IDS_STRING278, "pinball.chm" },
    { IDS_STRING279, "記憶體不足，無法執行立體彈珠台。" },
    { IDS_STRING280, "玩家 1 的分數\n%ld" },
    { IDS_STRING281, "玩家 2 的分數\n%ld" },
    { IDS_STRING282, "玩家 3 的分數\n%ld" },
    { IDS_STRING283, "玩家 4 的分數\n%ld" },
    { IDS_STRING284, "高分 1\n%ld" },
    { IDS_STRING285, "高分 2\n%ld" },
    { IDS_STRING286, "高分 3\n%ld" },
    { IDS_STRING287, "高分 4\n%ld" },
    { IDS_STRING288, "高分 5\n%ld" },
    { IDS_STRING289, "255 255 255   (R G B 預設字型色彩)" },
    { IDS_Menu1_UseMaxResolution_640x480, "使用最大解析度 (640 x 480)(&M)" },
    { IDS_Menu1_UseMaxResolution_800x600, "使用最大解析度 (800 x 600)(&M)" },
    { IDS_Menu1_UseMaxResolution_1024x768, "使用最大解析度 (1024 x 768)(&M)" },
};
