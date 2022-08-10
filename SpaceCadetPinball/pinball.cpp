#include "pch.h"
#include "pinball.h"
#include "winmain.h"

// Todo: load translations from file
std::map<uint32_t, LPCSTR> rc_strings
{
	{IDS_STRING101, "Replay Awarded"},
	{IDS_STRING102, "Ball Locked"},
	{IDS_STRING103, "Center Post\n%ld"},
	{IDS_STRING104, "Bonus Awarded\n%ld"},
	{IDS_STRING105, "Bonus Activated"},
	{IDS_STRING106, "Weapons Upgraded"},
	{IDS_STRING107, "Engine Upgraded"},
	{IDS_STRING108, "Bonus up 1 Million"},
	{IDS_STRING109, "Extra Ball Available\n%ld"},
	{IDS_STRING110, "Extra Ball"},
	{IDS_STRING111, "Reflex Shot Award\n%ld"},
	{IDS_STRING112, "Final Battle Won"},
	{IDS_STRING113, "Hyperspace Bonus\n%ld"},
	{IDS_STRING114, "Hyperspace Bonus Available"},
	{IDS_STRING115, "Jackpot Awarded\n%ld"},
	{IDS_STRING116, "Jackpot Activated"},
	{IDS_STRING117, "Multiball"},
	{IDS_STRING118, "Ramp Bonus Awarded"},
	{IDS_STRING119, "Light Added"},
	{IDS_STRING120, "Ramp Bonus On"},
	{IDS_STRING121, "Light Reset Off"},
	{IDS_STRING122, "Skill Shot\n%ld"},
	{IDS_STRING123, "Game Paused\nF3 to Resume"},
	{IDS_STRING124, "Continue Play"},
	{IDS_STRING125, "F2 Starts New Game"},
	{IDS_STRING126, "Careful..."},
	{IDS_STRING127, "Player 1"},
	{IDS_STRING128, "Player 2"},
	{IDS_STRING129, "Player 3"},
	{IDS_STRING130, "Player 4"},
	{IDS_STRING131, "Demo\nPlayer 1"},
	{IDS_STRING132, "Demo\nPlayer 2"},
	{IDS_STRING133, "Demo\nPlayer 3"},
	{IDS_STRING134, "Demo\nPlayer 4"},
	{IDS_STRING135, "Game Over"},
	{IDS_STRING136, "TILT!"},
	{IDS_STRING137, "This program requires an 80386 or later CPU."},
	{IDS_STRING138, "80386 Required"},
	{IDS_STRING139, "3D Pinball for Windows - Space Cadet"},
	{
		IDS_STRING140,
		"One or more of the player controls is set to the same key,\nfor best performance use unique keys for each control."
	},
	{IDS_STRING141, "Clear High Scores?"},
	{IDS_STRING142, "Confirm"},
	{IDS_STRING143, "WAVEMIX.INF is missing - it must be in the pinball directory!"},
	{IDS_STRING144, "Warning:"},
	{IDS_STRING145, "Ship Re-Fueled"},
	{IDS_STRING146, "Gravity Well"},
	{IDS_STRING147, "Time Warp Forward"},
	{IDS_STRING148, "Time Warp Backward"},
	{IDS_STRING149, "Maelstrom!"},
	{IDS_STRING150, "Wormhole"},
	{IDS_STRING151, "Awaiting Deployment"},
	{IDS_STRING152, "Flags Upgraded"},
	{IDS_STRING153, "Bonus Hold"},
	{IDS_STRING154, "Level One Commendation"},
	{IDS_STRING155, "Level Two Commendation"},
	{IDS_STRING156, "Level Three Commendation"},
	{IDS_STRING157, "Field Multiplier 2x"},
	{IDS_STRING158, "Field Multiplier 3x"},
	{IDS_STRING159, "Field Multiplier 5x"},
	{IDS_STRING160, "Field Multiplier 10x"},
	{IDS_STRING161, "Target Practice"},
	{IDS_STRING162, "Launch Training"},
	{IDS_STRING163, "Re-Entry Training"},
	{IDS_STRING164, "Science"},
	{IDS_STRING165, "Stray Comet"},
	{IDS_STRING166, "Black Hole"},
	{IDS_STRING167, "Space Radiation"},
	{IDS_STRING168, "Bug Hunt"},
	{IDS_STRING169, "Alien Menace"},
	{IDS_STRING170, "Rescue"},
	{IDS_STRING171, "Satellite Retrieval"},
	{IDS_STRING172, "Recon"},
	{IDS_STRING173, "Doomsday Machine"},
	{IDS_STRING174, "Cosmic Plague"},
	{IDS_STRING175, "Secret"},
	{IDS_STRING176, "Time Warp"},
	{IDS_STRING177, "Maelstrom"},
	{IDS_STRING178, "Mission Accepted\n%ld"},
	{IDS_STRING179, "Mission Completed\n%ld"},
	{IDS_STRING180, "%s Mission Selected"},
	{IDS_STRING181, "Black Hole\n%ld"},
	{IDS_STRING182, "Gravity Normalized\n%ld"},
	{IDS_STRING183, "Gravity Well\n%ld"},
	{IDS_STRING184, "Promotion to %s"},
	{IDS_STRING185, "Cadet"},
	{IDS_STRING186, "Ensign"},
	{IDS_STRING187, "Lieutenant"},
	{IDS_STRING188, "Captain"},
	{IDS_STRING189, "Lt Commander"},
	{IDS_STRING190, "Commander"},
	{IDS_STRING191, "Commodore"},
	{IDS_STRING192, "Admiral"},
	{IDS_STRING193, "Fleet Admiral"},
	{IDS_STRING194, "Wormhole Opened"},
	{IDS_STRING195, "Crash Bonus\n%ld"},
	{IDS_STRING196, "Replay Ball"},
	{IDS_STRING197, "Re-Deploy"},
	{IDS_STRING198, "Player 1 Shoot Again"},
	{IDS_STRING199, "Player 2 Shoot Again"},
	{IDS_STRING200, "Player 3 Shoot Again"},
	{IDS_STRING201, "Player 4 Shoot Again"},
	{
		IDS_STRING202,
		"This 3D Pinball Table was created for Microsoft by Maxis.\nFor more information call (800)-336-2947\n(US and Canadian customers only).\nCopyright (c) 1995 Maxis."
	},
	{IDS_STRING203, "3D Pinball Table created for Microsoft by Maxis. Copyright (c) 1995 Maxis."},
	{IDS_STRING204, "About 3D Pinball"},
	{IDS_STRING205, "Hit Mission Targets To Select Mission"},
	{IDS_STRING206, "Re-Fuel Ship"},
	{IDS_STRING207, "Launch Ramp To Accept %s Mission"},
	{IDS_STRING208, "Attack Bumpers Hits\nLeft: %d"},
	{IDS_STRING209, "Target Training Passed"},
	{IDS_STRING210, "Mission Aborted"},
	{IDS_STRING211, "Launches Left: %d"},
	{IDS_STRING212, "Launch Training Passed"},
	{IDS_STRING213, "Re-Entries Left: %d"},
	{IDS_STRING214, "Re-Entry Training Passed"},
	{IDS_STRING215, "Drop Targets\nLeft: %d"},
	{IDS_STRING216, "Science Mission Completed"},
	{IDS_STRING217, "Warning -- Low Fuel"},
	{IDS_STRING218, "Fill Right Hazard Banks"},
	{IDS_STRING219, "Hyperspace Launch"},
	{IDS_STRING220, "Comet Destroyed"},
	{IDS_STRING221, "Enter Wormhole"},
	{IDS_STRING222, "Radiation Eliminated"},
	{IDS_STRING223, "Upgrade Launch Bumpers"},
	{IDS_STRING224, "Enter Black Hole"},
	{IDS_STRING225, "Black Hole Eliminated"},
	{IDS_STRING226, "Targets\nLeft: %d"},
	{IDS_STRING227, "Xenomorphs Destroyed"},
	{IDS_STRING228, "Upgrade Flags"},
	{IDS_STRING229, "Hyperspace Launch"},
	{IDS_STRING230, "Survivors Rescued"},
	{IDS_STRING231, "Aliens Repelled"},
	{IDS_STRING232, "Hit Fuel Targets"},
	{IDS_STRING233, "Remote Attack Bumper Hits\nLeft: %d"},
	{IDS_STRING234, "Satellite Repaired"},
	{IDS_STRING235, "Lane Passes\nLeft: %d"},
	{IDS_STRING236, "Shoot Ball Up Fuel Chute"},
	{IDS_STRING237, "Survey Complete"},
	{IDS_STRING238, "Out Lane Passes\nLeft: %d"},
	{IDS_STRING239, "Doomsday Machine Destroyed"},
	{IDS_STRING240, "Roll Flags: %d"},
	{IDS_STRING241, "Hit Space Warp Rollover"},
	{IDS_STRING242, "Plague Eliminated"},
	{IDS_STRING243, "Hit Yellow Wormhole"},
	{IDS_STRING244, "Hit Red Wormhole"},
	{IDS_STRING245, "Hit Green Wormhole"},
	{IDS_STRING246, "Plans Recovered"},
	{IDS_STRING247, "Rebound Hits\nLeft: %d"},
	{IDS_STRING248, "Hit Hyperspace Chute or Launch Ramp"},
	{IDS_STRING249, "Drop Target Hits\nLeft: %d"},
	{IDS_STRING250, "Spot Target Hits\nLeft: %d"},
	{IDS_STRING251, "Lanes Passes\nLeft: %d"},
	{IDS_STRING252, "Shoot Ball Up Fuel Chute"},
	{IDS_STRING253, "Hit Launch Ramp"},
	{IDS_STRING254, "Hit Flags"},
	{IDS_STRING255, "Hit Worm Hole"},
	{IDS_STRING256, "Hyperspace Chute to  Maelstrom"},
	{IDS_STRING257, "pinball.mid"},
	{IDS_STRING258, "1 UseBitmapFont"},
	{IDS_STRING259, "90 Left Flipper Key"},
	{IDS_STRING260, "191 Right Flipper Key"},
	{IDS_STRING261, "32 Plunger Key"},
	{IDS_STRING262, "88 Bump Left Key"},
	{IDS_STRING263, "190 Bump Right Key"},
	{IDS_STRING264, "38 Bump Bottom Key"},
	{IDS_STRING265, "Software\\Microsoft\\Plus!\\Pinball"},
	{IDS_STRING266, "SpaceCadet"},
	{IDS_STRING267, "1c7c22a0-9576-11ce-bf80-444553540000"},
	{IDS_STRING268, "PINBALL.DAT"},
	{IDS_STRING269, "Space Cadet"},
	{IDS_STRING270, "Error:"},
	{IDS_STRING271, "Unable to find other tables."},
	{IDS_STRING272, "3D Pinball\nSpace Cadet"},
	{IDS_STRING273, "Promotion to %s"},
	{IDS_STRING274, "Demotion to %s"},
	{IDS_STRING275, "Upgrade Attack Bumpers"},
	{IDS_STRING276, "Fill Left Hazard Banks"},
	{IDS_STRING277, "HIGH SCORE"},
	{IDS_STRING278, "pinball.chm"},
	{IDS_STRING279, "Not enough memory to run 3D Pinball."},
	{IDS_STRING280, "Player 1's Score\n%ld"},
	{IDS_STRING281, "Player 2's Score\n%ld"},
	{IDS_STRING282, "Player 3's Score\n%ld"},
	{IDS_STRING283, "Player 4's Score\n%ld"},
	{IDS_STRING284, "High Score 1\n%ld"},
	{IDS_STRING285, "High Score 2\n%ld"},
	{IDS_STRING286, "High Score 3\n%ld"},
	{IDS_STRING287, "High Score 4\n%ld"},
	{IDS_STRING288, "High Score 5\n%ld"},
	{IDS_STRING289, "255 255 255   (R G B default font color)"},
	{IDS_Menu1_UseMaxResolution_640x480, "Use Maximum Resolution (640 x 480)"},
	{IDS_Menu1_UseMaxResolution_800x600, "Use Maximum Resolution (800 x 600)"},
	{IDS_Menu1_UseMaxResolution_1024x768, "Use Maximum Resolution (1024 x 768)"}
};

int LoadStringAlt(uint32_t uID, LPSTR lpBuffer, int cchBufferMax)
{
	auto str = rc_strings.find(uID);
	if (str == rc_strings.end())
	{
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
