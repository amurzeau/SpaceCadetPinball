#include "../pinball.h"
#include "swedish.h"

const std::map<uint32_t, const char*> rc_strings_swedish = {
    { IDS_Menu1_Game, "Spel" },
    { IDS_Menu1_New_Game, "Nytt spel" },
    { IDS_Menu1_Launch_Ball, "Skjut iväg kulan" },
    { IDS_Menu1_Pause_Resume_Game, "Pausa/fortsätt" },
    { IDS_Menu1_High_Scores, "Poängrekord..." },
    { IDS_Menu1_Demo, "Demo" },
    { IDS_Menu1_Exit, "Avsluta" },
    { IDS_Menu1_Options, "Alternativ" },
    { IDS_Menu1_Full_Screen, "Helskärm" },
    { IDS_Menu1_Select_Table, "Välj flipperspel" },
    { IDS_Menu1_Select_Players, "Antal spelare" },
    { IDS_Menu1_1Player, "1 spelare" },
    { IDS_Menu1_2Players, "2 spelare" },
    { IDS_Menu1_3Players, "3 spelare" },
    { IDS_Menu1_4Players, "4 spelare" },
    { IDS_Menu1_Sounds, "Ljud" },
    { IDS_Menu1_Music, "Musik" },
    { IDS_Menu1_Player_Controls, "Spelkontroller..." },
    { IDS_Menu1_Table_Resolution, "Table Resolution" },
    { IDS_Menu1_MaximumResolution, "Use Maximum Resolution" },
    { IDS_Menu1_640x480, "640 x 480" },
    { IDS_Menu1_800x600, "800 x 600" },
    { IDS_Menu1_1024x768, "1024 x 768" },
    { IDS_Menu1_Window, "Window" },
    { IDS_Menu1_WindowUniformScale, "Uniform Scaling" },
    { IDS_Menu1_AlternativeRender, "Alternative Rendering" },
    { IDS_Menu1_Help, "Hjälp" },
    { IDS_Menu1_Help_Topics, "Hjälpavsnitt" },
    { IDS_Menu1_About_Pinball, "Om Pinball" },
    { IDS_HIGHSCORES_Caption, "Poängrekord" },
    { IDS_HIGHSCORES_Ok, "OK" },
    { IDS_HIGHSCORES_Cancel, "Avbryt" },
    { IDS_HIGHSCORES_Clear, "Radera" },
    { IDS_HIGHSCORES_Name, "Namn" },
    { IDS_HIGHSCORES_Score, "Poäng" },
    { IDS_HIGHSCORES_Rank, "Rang" },
    { IDS_HIGHSCORES_Rank1, "1" },
    { IDS_HIGHSCORES_Rank2, "2" },
    { IDS_HIGHSCORES_Rank3, "3" },
    { IDS_HIGHSCORES_Rank4, "4" },
    { IDS_HIGHSCORES_Rank5, "5" },
    { IDS_KEYMAPPER_Caption, "3D Pinball: Spelkontroller" },
    { IDS_KEYMAPPER_Ok, "OK" },
    { IDS_KEYMAPPER_Cancel, "Avbryt" },
    { IDS_KEYMAPPER_Default, "Standard" },
    { IDS_KEYMAPPER_FlipperL, "Vänster flipper" },
    { IDS_KEYMAPPER_FlipperR, "Höger flipper" },
    { IDS_KEYMAPPER_BumpLeft, "Vänsterstöt" },
    { IDS_KEYMAPPER_BumpRight, "Högerstöt" },
    { IDS_KEYMAPPER_BumpBottom, "Uppåtstöt" },
    { IDS_KEYMAPPER_Plunger, "Avfyrning" },
    { IDS_KEYMAPPER_Help1, "Välj önskat kontrollalternativ och ange sedan tangent genom att klicka på pilknapparna. När du är klar väljer du OK." },
    { IDS_KEYMAPPER_Help2, "Om du vill återställa de ursprungliga inställningarna för 3D Pinball väljer du Standard och sedan OK. Om du vill använda piltangenterna på det numeriska tangentbordet måste NUMLOCK vara av." },
    { IDS_KEYMAPPER_Groupbox1, "Alternativ för kontroller" },
    { IDS_KEYMAPPER_Groupbox2, "Instruktioner" },
    { IDS_STRING101, "Fortsätt spela om kulan rinner" },
    { IDS_STRING102, "Kulan låst" },
    { IDS_STRING103, "Mittstolpe\n%ld" },
    { IDS_STRING104, "Bonus\n%ld" },
    { IDS_STRING105, "Bonus på" },
    { IDS_STRING106, "Vapen uppgraderas" },
    { IDS_STRING107, "Motorn uppgraderas" },
    { IDS_STRING108, "1 miljon högre bonus" },
    { IDS_STRING109, "Möjlighet till extraboll\n%ld" },
    { IDS_STRING110, "Extraboll" },
    { IDS_STRING111, "Bonus för reflexskott\n%ld" },
    { IDS_STRING112, "Slutstriden vunnen" },
    { IDS_STRING113, "Hyperspace-bonus\n%ld" },
    { IDS_STRING114, "Möjlighet till hyperspace-bonus" },
    { IDS_STRING115, "Jackpot\n%ld" },
    { IDS_STRING116, "Jackpot på" },
    { IDS_STRING117, "Multiball" },
    { IDS_STRING118, "Rampbonus" },
    { IDS_STRING119, "Extra lampa" },
    { IDS_STRING120, "Rampbonus på" },
    { IDS_STRING121, "Lampor återställs ej" },
    { IDS_STRING122, "Bonus för skickligt skott\n%ld" },
    { IDS_STRING123, "Paus\nF3=Fortsätt" },
    { IDS_STRING124, "Fortsätt" },
    { IDS_STRING125, "F2=Nytt spel" },
    { IDS_STRING126, "Försiktigt..." },
    { IDS_STRING127, "Spelare 1" },
    { IDS_STRING128, "Spelare 2" },
    { IDS_STRING129, "Spelare 3" },
    { IDS_STRING130, "Spelare 4" },
    { IDS_STRING131, "Demo\nSpelare 1" },
    { IDS_STRING132, "Demo\nSpelare 2" },
    { IDS_STRING133, "Demo\nSpelare 3" },
    { IDS_STRING134, "Demo\nSpelare 4" },
    { IDS_STRING135, "Spelet är slut" },
    { IDS_STRING136, "Lutning" },
    { IDS_STRING137, "Programmet kräver en 80386-processor eller högre." },
    { IDS_STRING138, "80386 krävs" },
    { IDS_STRING139, "3D Pinball för Windows - Space Cadet" },
    { IDS_STRING140, "En eller flera av spelkontrollerna har samma tangent.\nAnvänd unika tangenter för varje kontroll för bästa prestanda." },
    { IDS_STRING141, "Vill du ta bort poängrekorden?" },
    { IDS_STRING142, "Bekräfta" },
    { IDS_STRING143, "Filen WAVEMIX.INF saknas - den måste finnas i mappen Pinball." },
    { IDS_STRING144, "Varning:" },
    { IDS_STRING145, "Skeppet har tankats om" },
    { IDS_STRING146, "Gravitationshål" },
    { IDS_STRING147, "Tidsresa till framtiden" },
    { IDS_STRING148, "Tidsresa till forntiden" },
    { IDS_STRING149, "Maelstrom!" },
    { IDS_STRING150, "Maskhål" },
    { IDS_STRING151, "Skjut iväg kulan!" },
    { IDS_STRING152, "Spinners uppgraderas" },
    { IDS_STRING153, "Bonus sparas" },
    { IDS_STRING154, "Befordran till nivå 1" },
    { IDS_STRING155, "Befordran till nivå 2" },
    { IDS_STRING156, "Befordran till nivå 3" },
    { IDS_STRING157, "Poängen dubbleras" },
    { IDS_STRING158, "Poängen multipliceras\nmed tre" },
    { IDS_STRING159, "Poängen multipliceras\nmed fem" },
    { IDS_STRING160, "Poängen multipliceras\nmed tio" },
    { IDS_STRING161, "Bumper-träning" },
    { IDS_STRING162, "Rampträning" },
    { IDS_STRING163, "Höghöjdsträning" },
    { IDS_STRING164, "Vetenskap" },
    { IDS_STRING165, "Kometsvärm" },
    { IDS_STRING166, "Svart hål" },
    { IDS_STRING167, "Rymdstrålning" },
    { IDS_STRING168, "Insekter" },
    { IDS_STRING169, "Pigs in Space" },
    { IDS_STRING170, "Räddningsaktion" },
    { IDS_STRING171, "Hämta satellit" },
    { IDS_STRING172, "Spaningsuppdrag" },
    { IDS_STRING173, "Domedagsmaskin" },
    { IDS_STRING174, "Kosmisk pest" },
    { IDS_STRING175, "Hemlighet" },
    { IDS_STRING176, "Tidsresa" },
    { IDS_STRING177, "Maelstrom" },
    { IDS_STRING178, "Uppdraget accepterat\n%ld" },
    { IDS_STRING179, "Uppdraget genomfört\n%ld" },
    { IDS_STRING180, "Uppdrag %s har valts" },
    { IDS_STRING181, "Svart hål\n%ld" },
    { IDS_STRING182, "Normal gravitation\n%ld" },
    { IDS_STRING183, "Gravitationshål\n%ld" },
    { IDS_STRING184, "Befordran till %s" },
    { IDS_STRING185, "Space Cadet" },
    { IDS_STRING186, "Furir" },
    { IDS_STRING187, "Sergeant" },
    { IDS_STRING188, "Fänrik" },
    { IDS_STRING189, "Löjtnant" },
    { IDS_STRING190, "Kapten" },
    { IDS_STRING191, "Major" },
    { IDS_STRING192, "Överste" },
    { IDS_STRING193, "General" },
    { IDS_STRING194, "Maskhålet är öppet" },
    { IDS_STRING195, "Slutbonus\n%ld" },
    { IDS_STRING196, "Fortsätt spela..." },
    { IDS_STRING197, "Omdistribuera" },
    { IDS_STRING198, "Spelare 1 - extraboll" },
    { IDS_STRING199, "Spelare 2 - extraboll" },
    { IDS_STRING200, "Spelare 3 - extraboll" },
    { IDS_STRING201, "Spelare 4 - extraboll" },
    { IDS_STRING202, "Denna spelplan har utvecklats för Microsoft av Maxis.\nCopyright (c) 1995 Maxis." },
    { IDS_STRING203, "Denna 3D Pinball-spelplan har utvecklats för Microsoft av Maxis. Copyright (c) 1995 Maxis." },
    { IDS_STRING204, "Om 3D Pinball" },
    { IDS_STRING205, "Välj uppdrag genom att träffa uppdragstavlor" },
    { IDS_STRING206, "Tanka om skeppet" },
    { IDS_STRING207, "Acceptera uppdraget %s i rampen" },
    { IDS_STRING208, "Träffa höghöjds-bumpers\n%d träffar kvar" },
    { IDS_STRING209, "Bumper-träning genomförd" },
    { IDS_STRING210, "Uppdraget avbrutet" },
    { IDS_STRING211, "%d rampträffar kvar" },
    { IDS_STRING212, "Rampträning genomförd" },
    { IDS_STRING213, "Träffa höghöjdsgångar\n%d träffar kvar" },
    { IDS_STRING214, "Höghöjdsträning genomförd" },
    { IDS_STRING215, "Träffa multi-, medalj- eller bonustavlor\n%d träffar kvar" },
    { IDS_STRING216, "Forskningsuppdrag genomfört" },
    { IDS_STRING217, "Varning - lite bränsle" },
    { IDS_STRING218, "Träffa returtavlor till höger" },
    { IDS_STRING219, "Skjut upp kulan i hyperspace-hålan" },
    { IDS_STRING220, "Kometen oskadliggjord" },
    { IDS_STRING221, "Skjut in kulan i maskhål" },
    { IDS_STRING222, "Räddade från strålning" },
    { IDS_STRING223, "Uppgradera ramp-bumpers" },
    { IDS_STRING224, "Skjut in kulan i det svarta hålet" },
    { IDS_STRING225, "Räddade från svart hål" },
    { IDS_STRING226, "Träffa tavlor\n%d träffar kvar" },
    { IDS_STRING227, "Fredagstomtarna nedskjutna" },
    { IDS_STRING228, "Uppgradera spinners" },
    { IDS_STRING229, "Skjut upp kulan i hyperspace-hålan" },
    { IDS_STRING230, "Överlevande räddade" },
    { IDS_STRING231, "No more pigs..." },
    { IDS_STRING232, "Träffa bränsletavlor" },
    { IDS_STRING233, "Träffa höghöjds-bumpers\n%d träffar kvar" },
    { IDS_STRING234, "Satelliten reparerad" },
    { IDS_STRING235, "Träffa gångar\n%d träffar kvar" },
    { IDS_STRING236, "Skjut upp kulan i bränsledepån" },
    { IDS_STRING237, "Forskningsuppdraget genomfört" },
    { IDS_STRING238, "Utgångar\n%d kvar" },
    { IDS_STRING239, "Domedagsmaskinen nedskjuten" },
    { IDS_STRING240, "Träffa spinners\n%d varv kvar" },
    { IDS_STRING241, "Träffa rymdsensor" },
    { IDS_STRING242, "Räddade från pesten" },
    { IDS_STRING243, "Skjut in kulan i gult maskhål" },
    { IDS_STRING244, "Skjut in kulan i rött maskhål" },
    { IDS_STRING245, "Skjut in kulan i grönt maskhål" },
    { IDS_STRING246, "Ritningarna räddade" },
    { IDS_STRING247, "Träffa rebounds\n%d träffar kvar" },
    { IDS_STRING248, "Skjut upp kulan i hyperspace-hålan eller i rampen" },
    { IDS_STRING249, "Träffa multi-, medalj-, bonus- eller uppdragstavlor\n%d träffar kvar" },
    { IDS_STRING250, "Träffa returtavlor\n%d träffar kvar" },
    { IDS_STRING251, "Träffa gångar\n%d träffar kvar" },
    { IDS_STRING252, "Skjut upp kulan i bränsledepån" },
    { IDS_STRING253, "Skjut upp kulan i rampen" },
    { IDS_STRING254, "Träffa spinners" },
    { IDS_STRING255, "Skjut in kulan i ett maskhål" },
    { IDS_STRING256, "Avsluta uppdraget Maelstrom genom att skjuta upp kulan i hyperspace-hålan" },
    { IDS_STRING257, "pinball.mid" },
    { IDS_STRING258, "0 UseBitmapFont" },
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
    { IDS_STRING270, "Fel:" },
    { IDS_STRING271, "Det går inte att hitta fler spelplaner." },
    { IDS_STRING272, "3D Pinball\nSpace Cadet" },
    { IDS_STRING273, "Befordran till %s" },
    { IDS_STRING274, "Degradering till %s" },
    { IDS_STRING275, "Uppgradera höghöjds-bumpers" },
    { IDS_STRING276, "Träffa returtavlor till vänster" },
    { IDS_STRING277, "POÄNGREKORD" },
    { IDS_STRING278, "pinball.chm" },
    { IDS_STRING279, "Det finns inte tillräckligt med minne för att köra 3D Pinball." },
    { IDS_STRING280, "Spelare 1 - resultat\n%ld" },
    { IDS_STRING281, "Spelare 2 - resultat\n%ld" },
    { IDS_STRING282, "Spelare 3 - resultat\n%ld" },
    { IDS_STRING283, "Spelare 4 - resultat\n%ld" },
    { IDS_STRING284, "Poängrekord 1\n%ld" },
    { IDS_STRING285, "Poängrekord 2\n%ld" },
    { IDS_STRING286, "Poängrekord 3\n%ld" },
    { IDS_STRING287, "Poängrekord 4\n%ld" },
    { IDS_STRING288, "Poängrekord 5\n%ld" },
    { IDS_STRING289, "255 255 255   (R G B default font color)" },
    { IDS_Menu1_UseMaxResolution_640x480, "Use Maximum Resolution (640 x 480)" },
    { IDS_Menu1_UseMaxResolution_800x600, "Use Maximum Resolution (800 x 600)" },
    { IDS_Menu1_UseMaxResolution_1024x768, "Use Maximum Resolution (1024 x 768)" },
};
