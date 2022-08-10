#include "../pinball.h"
#include "chinese_simplified.h"

const std::map<uint32_t, const char*> rc_strings_chinese_simplified = {
    { IDS_Menu1_Game, "游戏(&G)" },
    { IDS_Menu1_New_Game, "开局(&N)\tF2" },
    { IDS_Menu1_Launch_Ball, "发射球(&L)" },
    { IDS_Menu1_Pause_Resume_Game, "暂停/继续游戏(&P)\tF3" },
    { IDS_Menu1_High_Scores, "高分(&H)..." },
    { IDS_Menu1_Demo, "演示(&D)" },
    { IDS_Menu1_Exit, "退出(&X)" },
    { IDS_Menu1_Options, "选项(&O)" },
    { IDS_Menu1_Full_Screen, "全屏显示(&F)\tF4" },
    { IDS_Menu1_Select_Table, "选定桌面(&T)" },
    { IDS_Menu1_Select_Players, "选定玩家(&P)" },
    { IDS_Menu1_1Player, "&1 个玩家" },
    { IDS_Menu1_2Players, "&2 个玩家" },
    { IDS_Menu1_3Players, "&3 个玩家" },
    { IDS_Menu1_4Players, "&4 个玩家" },
    { IDS_Menu1_Sounds, "声音(&S)" },
    { IDS_Menu1_Music, "音乐(&M)" },
    { IDS_Menu1_Player_Controls, "玩家控制(&L)...\tF8" },
    { IDS_Menu1_Table_Resolution, "桌面分辨率(&R)" },
    { IDS_Menu1_MaximumResolution, "使用最大分辨率(&M)" },
    { IDS_Menu1_640x480, "&640 x 480" },
    { IDS_Menu1_800x600, "&800 x 600" },
    { IDS_Menu1_1024x768, "&1024 x 768" },
    { IDS_Menu1_Window, "窗口(&W)" },
    { IDS_Menu1_WindowUniformScale, "锁定宽高比缩放(&U)" },
    { IDS_Menu1_AlternativeRender, "使用替代方式渲染(&A)" },
    { IDS_Menu1_Help, "帮助(&H)" },
    { IDS_Menu1_Help_Topics, "帮助主题(&H)\tF1" },
    { IDS_Menu1_About_Pinball, "关于弹球(&A)" },
    { IDS_HIGHSCORES_Caption, "高分" },
    { IDS_HIGHSCORES_Ok, "确定" },
    { IDS_HIGHSCORES_Cancel, "取消" },
    { IDS_HIGHSCORES_Clear, "清除(&C)" },
    { IDS_HIGHSCORES_Name, "姓名" },
    { IDS_HIGHSCORES_Score, "得分" },
    { IDS_HIGHSCORES_Rank, "名次" },
    { IDS_HIGHSCORES_Rank1, "1" },
    { IDS_HIGHSCORES_Rank2, "2" },
    { IDS_HIGHSCORES_Rank3, "3" },
    { IDS_HIGHSCORES_Rank4, "4" },
    { IDS_HIGHSCORES_Rank5, "5" },
    { IDS_KEYMAPPER_Caption, "三维弹球：玩家控制" },
    { IDS_KEYMAPPER_Ok, "确定" },
    { IDS_KEYMAPPER_Cancel, "取消" },
    { IDS_KEYMAPPER_Default, "默认值(&D)" },
    { IDS_KEYMAPPER_FlipperL, "左挡板(&L)" },
    { IDS_KEYMAPPER_FlipperR, "右挡板(&F)" },
    { IDS_KEYMAPPER_BumpLeft, "左桌凸块(&T)" },
    { IDS_KEYMAPPER_BumpRight, "右桌凸块(&R)" },
    { IDS_KEYMAPPER_BumpBottom, "底桌凸块(&B)" },
    { IDS_KEYMAPPER_Plunger, "撞针(&P)" },
    { IDS_KEYMAPPER_Help1, "要改变游戏控制，请选择所需的控制选项，单击箭头按钮改变指定的键，然后选择“确定”。" },
    { IDS_KEYMAPPER_Help2, "要将“三维弹球”还原到其原设置，请选择 “默认值”，然后选择“确定”。要使用数字键盘上的箭头键，请确认 NUMLOCK 已关闭。" },
    { IDS_KEYMAPPER_Groupbox1, "控制选项" },
    { IDS_KEYMAPPER_Groupbox2, "说明" },
    { IDS_STRING101, "奖励重玩" },
    { IDS_STRING102, "锁定的球" },
    { IDS_STRING103, "中央立柱\n%ld" },
    { IDS_STRING104, "奖分\n%ld" },
    { IDS_STRING105, "奖分" },
    { IDS_STRING106, "武器已升级" },
    { IDS_STRING107, "引擎已升级" },
    { IDS_STRING108, "奖分到一百万" },
    { IDS_STRING109, "可用加分球\n%ld" },
    { IDS_STRING110, "加分球" },
    { IDS_STRING111, "反射射中奖励\n%ld" },
    { IDS_STRING112, "决战胜利" },
    { IDS_STRING113, "超空间奖分\n%ld" },
    { IDS_STRING114, "可用超空间奖分" },
    { IDS_STRING115, "中头奖了\n%ld" },
    { IDS_STRING116, "启动头奖" },
    { IDS_STRING117, "多个球" },
    { IDS_STRING118, "坡道奖分" },
    { IDS_STRING119, "增加灯光" },
    { IDS_STRING120, "已设好坡道奖分" },
    { IDS_STRING121, "关闭灯光复位" },
    { IDS_STRING122, "高技能发射\n%ld" },
    { IDS_STRING123, "游戏暂停\nF3 继续" },
    { IDS_STRING124, "继续玩" },
    { IDS_STRING125, "F2 开局" },
    { IDS_STRING126, "小心..." },
    { IDS_STRING127, "玩家 1" },
    { IDS_STRING128, "玩家 2" },
    { IDS_STRING129, "玩家 3" },
    { IDS_STRING130, "玩家 4" },
    { IDS_STRING131, "演示\n玩家 1" },
    { IDS_STRING132, "演示\n玩家 2" },
    { IDS_STRING133, "演示\n玩家 3" },
    { IDS_STRING134, "演示\n玩家 4" },
    { IDS_STRING135, "游戏结束" },
    { IDS_STRING136, "TILT!" },
    { IDS_STRING137, "该程序需要 80386 或更新的 CPU。" },
    { IDS_STRING138, "需要 80386 CPU" },
    { IDS_STRING139, "Windows 三维弹球 - 太空军校生" },
    { IDS_STRING140, "玩家的一个或多个控制被设成同一个键，\n为获得最佳性能，请对每个控制使用不同的键。" },
    { IDS_STRING141, "清除高分？" },
    { IDS_STRING142, "确认" },
    { IDS_STRING143, "找不到 WAVEMIX.INF - 必须在弹球游戏目录中！" },
    { IDS_STRING144, "警告：" },
    { IDS_STRING145, "飞船补充燃料" },
    { IDS_STRING146, "引力井" },
    { IDS_STRING147, "时间向前扭曲" },
    { IDS_STRING148, "时间向后扭曲" },
    { IDS_STRING149, "大旋涡！" },
    { IDS_STRING150, "旋涡式星体" },
    { IDS_STRING151, "等待部署" },
    { IDS_STRING152, "升级旗帜" },
    { IDS_STRING153, "保留奖分" },
    { IDS_STRING154, "一等奖" },
    { IDS_STRING155, "二等奖" },
    { IDS_STRING156, "三等奖" },
    { IDS_STRING157, "扩大战场 2x" },
    { IDS_STRING158, "扩大战场 3x" },
    { IDS_STRING159, "扩大战场 5x" },
    { IDS_STRING160, "扩大战场 10x" },
    { IDS_STRING161, "目标练习" },
    { IDS_STRING162, "启动训练" },
    { IDS_STRING163, "重新上场训练" },
    { IDS_STRING164, "科学" },
    { IDS_STRING165, "离群的彗星" },
    { IDS_STRING166, "黑洞" },
    { IDS_STRING167, "太空辐射" },
    { IDS_STRING168, "猎虫" },
    { IDS_STRING169, "外星人的威协" },
    { IDS_STRING170, "援助" },
    { IDS_STRING171, "卫星收回" },
    { IDS_STRING172, "侦察" },
    { IDS_STRING173, "世界末日机器" },
    { IDS_STRING174, "宇宙灾难" },
    { IDS_STRING175, "机密" },
    { IDS_STRING176, "时间扭曲" },
    { IDS_STRING177, "大旋涡" },
    { IDS_STRING178, "接受的使命\n%ld" },
    { IDS_STRING179, "完成的使命\n%ld" },
    { IDS_STRING180, "选定 %s 使命" },
    { IDS_STRING181, "黑洞\n%ld" },
    { IDS_STRING182, "正常引力\n%ld" },
    { IDS_STRING183, "引力井\n%ld" },
    { IDS_STRING184, "升级到 %s" },
    { IDS_STRING185, "军校生" },
    { IDS_STRING186, "海军少尉" },
    { IDS_STRING187, "海军上尉" },
    { IDS_STRING188, "海军上校" },
    { IDS_STRING189, "海军少校" },
    { IDS_STRING190, "司令官" },
    { IDS_STRING191, "海军准将" },
    { IDS_STRING192, "海军上将" },
    { IDS_STRING193, "海军五星上将" },
    { IDS_STRING194, "打开旋涡式星体" },
    { IDS_STRING195, "坠毁奖分\n%ld" },
    { IDS_STRING196, "重玩球" },
    { IDS_STRING197, "重新部署" },
    { IDS_STRING198, "玩家 1 再次射球" },
    { IDS_STRING199, "玩家 2 再次射球" },
    { IDS_STRING200, "玩家 3 再次射球" },
    { IDS_STRING201, "玩家 4 再次射球" },
    { IDS_STRING202, "该“三维弹球”是由 Maxis 为 Microsoft 创建的。\n详细信息，请拨电话 (800)-336-2947\n(只适用于美国和加拿大的客户)。\n版权所有 (C) 1995 Maxis。" },
    { IDS_STRING203, "该“三维弹球”是由 Maxis 为 Microsoft 创建的。版权所有(C) 1995 Maxis。" },
    { IDS_STRING204, "关于三维弹球" },
    { IDS_STRING205, "击中使命目标以选定使命" },
    { IDS_STRING206, "飞船补充燃料" },
    { IDS_STRING207, "进入发射坡道，接受 %s 使命" },
    { IDS_STRING208, "攻击缓冲器击中\n剩余：%d" },
    { IDS_STRING209, "通过目标培训" },
    { IDS_STRING210, "放弃使命" },
    { IDS_STRING211, "剩余发射次数：%d" },
    { IDS_STRING212, "通过了发射训练" },
    { IDS_STRING213, "所剩重新上场次数：%d" },
    { IDS_STRING214, "通过了重新上场训练" },
    { IDS_STRING215, "击落目标\n剩余：%d" },
    { IDS_STRING216, "完成科学使命" },
    { IDS_STRING217, "警告——燃料不足" },
    { IDS_STRING218, "添加右边危险材料库" },
    { IDS_STRING219, "超空发射" },
    { IDS_STRING220, "毁坏的彗星" },
    { IDS_STRING221, "进入旋涡式星体" },
    { IDS_STRING222, "辐射清除" },
    { IDS_STRING223, "升级发射缓冲器" },
    { IDS_STRING224, "进入黑洞" },
    { IDS_STRING225, "消除的黑洞" },
    { IDS_STRING226, "目标\n剩余：%d" },
    { IDS_STRING227, "Xenomorphs 被摧毁" },
    { IDS_STRING228, "升级旗帜" },
    { IDS_STRING229, "超空发射" },
    { IDS_STRING230, "幸存者" },
    { IDS_STRING231, "驱逐外星人" },
    { IDS_STRING232, "击中燃料目标" },
    { IDS_STRING233, "远程攻击缓冲器击中\n剩余：%d" },
    { IDS_STRING234, "卫星已修好" },
    { IDS_STRING235, "航道通行\n剩余次数：%d" },
    { IDS_STRING236, "将球射到燃料斜槽" },
    { IDS_STRING237, "完成勘察" },
    { IDS_STRING238, "出口航道通行\n剩余次数：%d" },
    { IDS_STRING239, "摧毁了世界末日机器" },
    { IDS_STRING240, "滚动旗帜：%d" },
    { IDS_STRING241, "击中太空扭曲得分" },
    { IDS_STRING242, "消除灾难" },
    { IDS_STRING243, "击中黄色旋涡式星体" },
    { IDS_STRING244, "击中红色旋涡式星体" },
    { IDS_STRING245, "击中绿色旋涡式星体" },
    { IDS_STRING246, "计划已恢复" },
    { IDS_STRING247, "弹回击中\n剩余次数：%d" },
    { IDS_STRING248, "击中超空间斜槽或发射坡道" },
    { IDS_STRING249, "丢弃目标击中\n剩余次数：%d" },
    { IDS_STRING250, "发现目标击中\n剩余次数：%d" },
    { IDS_STRING251, "航道通行\n剩余次数：%d" },
    { IDS_STRING252, "将球射到燃料斜槽" },
    { IDS_STRING253, "击中发射坡道" },
    { IDS_STRING254, "击中旗帜" },
    { IDS_STRING255, "击中虫孔" },
    { IDS_STRING256, "进入超空间斜槽，结束大旋涡" },
    { IDS_STRING257, "pinball.mid" },
    { IDS_STRING258, "0 UseBitmapFont" },
    { IDS_STRING259, "90 左挡板键" },
    { IDS_STRING260, "191 右挡板键" },
    { IDS_STRING261, "32 撞针键" },
    { IDS_STRING262, "88 凸块左键" },
    { IDS_STRING263, "190 凸块右键" },
    { IDS_STRING264, "38 凸块底键" },
    { IDS_STRING265, "Software\\Microsoft\\Plus!\\Pinball" },
    { IDS_STRING266, "SpaceCadet" },
    { IDS_STRING267, "1c7c22a0-9576-11ce-bf80-444553540000" },
    { IDS_STRING268, "PINBALL.DAT" },
    { IDS_STRING269, "太空军校生" },
    { IDS_STRING270, "错误：" },
    { IDS_STRING271, "无法找到其它桌面。" },
    { IDS_STRING272, "三维弹球\n太空军校生" },
    { IDS_STRING273, "升级到 %s" },
    { IDS_STRING274, "降级到 %s" },
    { IDS_STRING275, "升级攻击缓冲器" },
    { IDS_STRING276, "添加左边危险材料库" },
    { IDS_STRING277, "高分" },
    { IDS_STRING278, "pinball.chm" },
    { IDS_STRING279, "内存不足，无法运行三维弹球游戏。" },
    { IDS_STRING280, "玩家 1 的分数\n%ld" },
    { IDS_STRING281, "玩家 2 的分数\n%ld" },
    { IDS_STRING282, "玩家 3 的分数\n%ld" },
    { IDS_STRING283, "玩家 4 的分数\n%ld" },
    { IDS_STRING284, "高分 1\n%ld" },
    { IDS_STRING285, "高分 2\n%ld" },
    { IDS_STRING286, "高分 3\n%ld" },
    { IDS_STRING287, "高分 4\n%ld" },
    { IDS_STRING288, "高分 5\n%ld" },
    { IDS_STRING289, "255 255 255   (R G B 默认字体颜色)" },
    { IDS_Menu1_UseMaxResolution_640x480, "使用最大分辨率 (640 x 480)(&M)" },
    { IDS_Menu1_UseMaxResolution_800x600, "使用最大分辨率 (800 x 600)(&M)" },
    { IDS_Menu1_UseMaxResolution_1024x768, "使用最大分辨率 (1024 x 768)(&M)" },
};
