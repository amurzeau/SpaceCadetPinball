#include "../pinball.h"
#include "norwegian_bokmal.h"

const std::map<uint32_t, const char*> rc_strings_norwegian_bokmal = {
    { IDS_Menu1_Game, "Spill" },
    { IDS_Menu1_New_Game, "Nytt spill\tF2" },
    { IDS_Menu1_Launch_Ball, "Skyt ut ball" },
    { IDS_Menu1_Pause_Resume_Game, "Pause/gjenoppta spill\tF3" },
    { IDS_Menu1_High_Scores, "Beste resultater..." },
    { IDS_Menu1_Demo, "Demonstrasjon" },
    { IDS_Menu1_Exit, "Avslutt" },
    { IDS_Menu1_Options, "Alternativer" },
    { IDS_Menu1_Full_Screen, "Full skjerm\tF4" },
    { IDS_Menu1_Select_Table, "Velg bord" },
    { IDS_Menu1_Select_Players, "Velg spillere" },
    { IDS_Menu1_1Player, "1 spiller" },
    { IDS_Menu1_2Players, "2 spillere" },
    { IDS_Menu1_3Players, "3 spillere" },
    { IDS_Menu1_4Players, "4 spillere" },
    { IDS_Menu1_Sounds, "Lyder" },
    { IDS_Menu1_Music, "Musikk" },
    { IDS_Menu1_Player_Controls, "Spillkontroller...\tF8" },
    { IDS_Menu1_Table_Resolution, "Table Resolution" },
    { IDS_Menu1_MaximumResolution, "Use Maximum Resolution" },
    { IDS_Menu1_640x480, "640 x 480" },
    { IDS_Menu1_800x600, "800 x 600" },
    { IDS_Menu1_1024x768, "1024 x 768" },
    { IDS_Menu1_Window, "Window" },
    { IDS_Menu1_WindowUniformScale, "Uniform Scaling" },
    { IDS_Menu1_AlternativeRender, "Alternative Rendering" },
    { IDS_Menu1_Help, "Hjelp" },
    { IDS_Menu1_Help_Topics, "Emner i Hjelp\tF1" },
    { IDS_Menu1_About_Pinball, "Om Pinball" },
    { IDS_HIGHSCORES_Caption, "Beste resultater" },
    { IDS_HIGHSCORES_Ok, "OK" },
    { IDS_HIGHSCORES_Cancel, "Avbryt" },
    { IDS_HIGHSCORES_Clear, "Nullstill" },
    { IDS_HIGHSCORES_Name, "Navn" },
    { IDS_HIGHSCORES_Score, "Poeng" },
    { IDS_HIGHSCORES_Rank, "Plassering" },
    { IDS_HIGHSCORES_Rank1, "1" },
    { IDS_HIGHSCORES_Rank2, "2" },
    { IDS_HIGHSCORES_Rank3, "3" },
    { IDS_HIGHSCORES_Rank4, "4" },
    { IDS_HIGHSCORES_Rank5, "5" },
    { IDS_KEYMAPPER_Caption, "3D Pinball - Spillkontroller" },
    { IDS_KEYMAPPER_Ok, "OK" },
    { IDS_KEYMAPPER_Cancel, "Avbryt" },
    { IDS_KEYMAPPER_Default, "Standard" },
    { IDS_KEYMAPPER_FlipperL, "Venstre flipper" },
    { IDS_KEYMAPPER_FlipperR, "Høyre flipper" },
    { IDS_KEYMAPPER_BumpLeft, "Dunk venstre bordkant" },
    { IDS_KEYMAPPER_BumpRight, "Dunk høyre bordkant" },
    { IDS_KEYMAPPER_BumpBottom, "Dunk nedre kant" },
    { IDS_KEYMAPPER_Plunger, "Utskyter" },
    { IDS_KEYMAPPER_Help1, "Hvis du vil endre spillkontrollene, velger du spillkontrollene du vil bruke og velger i rullegardinlisten hvilke taster som skal representere dem (du kan også bruke piltastene for å velge). Velg deretter OK." },
    { IDS_KEYMAPPER_Help2, "Velg Standard hvis du vil tilbakestille 3D Pinball til originalinnstillingene. Deretter velger du OK. Hvis du vil bruke pilene på det numeriske tastaturet, må Num Lock være deaktivert." },
    { IDS_KEYMAPPER_Groupbox1, "Kontrollalternativer" },
    { IDS_KEYMAPPER_Groupbox2, "Instruksjoner" },
    { IDS_STRING101, "Vunnet nytt spill" },
    { IDS_STRING102, "Låst ball" },
    { IDS_STRING103, "Midtstolpe\n%ld" },
    { IDS_STRING104, "Vunnet bonus\n%ld" },
    { IDS_STRING105, "Bonus på" },
    { IDS_STRING106, "Våpen oppgradert" },
    { IDS_STRING107, "Motor oppgradert" },
    { IDS_STRING108, "Bonus opp 1 million" },
    { IDS_STRING109, "Ekstra ball tilgjengelig\n%ld" },
    { IDS_STRING110, "Ekstra ball" },
    { IDS_STRING111, "Pris for refleksskudd\n%ld" },
    { IDS_STRING112, "Vant siste slag" },
    { IDS_STRING113, "Hyperrombonus\n%ld" },
    { IDS_STRING114, "Hyperrombonus tilgjengelig" },
    { IDS_STRING115, "Jackpot\n%ld" },
    { IDS_STRING116, "Jackpot aktivert" },
    { IDS_STRING117, "Multiball" },
    { IDS_STRING118, "Rampebonus" },
    { IDS_STRING119, "Lagt til lys" },
    { IDS_STRING120, "Rampebonus på" },
    { IDS_STRING121, "Tilbakestillingslys av" },
    { IDS_STRING122, "Dyktighetsskudd\n%ld" },
    { IDS_STRING123, "Pause\nF3 for å fortsette" },
    { IDS_STRING124, "Fortsett spillet" },
    { IDS_STRING125, "F2 starter et nytt spill" },
    { IDS_STRING126, "Forsiktig..." },
    { IDS_STRING127, "Spiller 1" },
    { IDS_STRING128, "Spiller 2" },
    { IDS_STRING129, "Spiller 3" },
    { IDS_STRING130, "Spiller 4" },
    { IDS_STRING131, "Demo\nSpiller 1" },
    { IDS_STRING132, "Demo\nSpiller 2" },
    { IDS_STRING133, "Demo\nSpiller 3" },
    { IDS_STRING134, "Demo\nSpiller 4" },
    { IDS_STRING135, "Spillet er slutt" },
    { IDS_STRING136, "TILT!" },
    { IDS_STRING137, "Dette programmet krever en 80386-prosessor eller høyere." },
    { IDS_STRING138, "80386 kreves" },
    { IDS_STRING139, "3D Pinball for Windows - Romkadett" },
    { IDS_STRING140, "En eller flere spillkontroller er tilordnet samme tast.\nYtelsen blir størst når alle kontrollene er tilordnet hver sin tast." },
    { IDS_STRING141, "Slette Beste resultater?" },
    { IDS_STRING142, "Bekreft" },
    { IDS_STRING143, "Wavemix.inf mangler. Den må være i samme katalogen som Pinball." },
    { IDS_STRING144, "Advarsel!" },
    { IDS_STRING145, "Nybunkret skip" },
    { IDS_STRING146, "Tyngdekraftsbrønn" },
    { IDS_STRING147, "Tidssprang forover" },
    { IDS_STRING148, "Tidssprang bakover" },
    { IDS_STRING149, "Malstrøm!" },
    { IDS_STRING150, "Ormebol" },
    { IDS_STRING151, "Venter på utstasjonering" },
    { IDS_STRING152, "Flagg oppgradert" },
    { IDS_STRING153, "Behold bonus" },
    { IDS_STRING154, "Medalje for 1. nivå" },
    { IDS_STRING155, "Medalje for 2. nivå" },
    { IDS_STRING156, "Medalje for 3. nivå" },
    { IDS_STRING157, "Feltmultiplikator: 2" },
    { IDS_STRING158, "Feltmultiplikator: 3" },
    { IDS_STRING159, "Feltmultiplikator: 5" },
    { IDS_STRING160, "Feltmultiplikator: 10" },
    { IDS_STRING161, "Skyteøvelse" },
    { IDS_STRING162, "Utskytingstrening" },
    { IDS_STRING163, "Tilbakekomsttrening" },
    { IDS_STRING164, "Vitenskapelig" },
    { IDS_STRING165, "Komet ute av kurs" },
    { IDS_STRING166, "Svart hull" },
    { IDS_STRING167, "Romstråling" },
    { IDS_STRING168, "Gulljakt" },
    { IDS_STRING169, "Romtrussel" },
    { IDS_STRING170, "Redning" },
    { IDS_STRING171, "Satelittgjenvinning" },
    { IDS_STRING172, "Rekognosering" },
    { IDS_STRING173, "Helvetesmaskin" },
    { IDS_STRING174, "Kosmisk pest" },
    { IDS_STRING175, "Hemmelighet" },
    { IDS_STRING176, "Tidssprang" },
    { IDS_STRING177, "Malstrøm" },
    { IDS_STRING178, "Oppdrag godtatt\n%ld" },
    { IDS_STRING179, "Oppdrag fullført\n%ld" },
    { IDS_STRING180, "%s-oppdrag valgt" },
    { IDS_STRING181, "Svart hull\n%ld" },
    { IDS_STRING182, "Normalisert tyngdekraft\n%ld" },
    { IDS_STRING183, "Tyngdekraftsbrønn\n%ld" },
    { IDS_STRING184, "Forfremmelse til %s" },
    { IDS_STRING185, "Kadett" },
    { IDS_STRING186, "Fenrik" },
    { IDS_STRING187, "Løytnant" },
    { IDS_STRING188, "Kapteinløytnant" },
    { IDS_STRING189, "Orlogskaptein" },
    { IDS_STRING190, "Kommandørkaptein" },
    { IDS_STRING191, "Kommandør" },
    { IDS_STRING192, "Viseadmiral" },
    { IDS_STRING193, "Admiral" },
    { IDS_STRING194, "Åpnet ormebol" },
    { IDS_STRING195, "Krasjbonus\n%ld" },
    { IDS_STRING196, "Ekstraball" },
    { IDS_STRING197, "Utstasjoner på nytt" },
    { IDS_STRING198, "Spiller 1 Skyt igjen" },
    { IDS_STRING199, "Spiller 2 Skyt igjen" },
    { IDS_STRING200, "Spiller 3 Skyt igjen" },
    { IDS_STRING201, "Spiller 4 Skyt igjen" },
    { IDS_STRING202, "Dette 3D Pinball-bordet ble laget for Microsoft av Maxis.\nDu får mer informasjon ved å ringe (800)-336-2947\n(bare kunder i USA og Canada.\nCopyright (c) 1995 Maxis." },
    { IDS_STRING203, "3D Pinball-bord laget for Microsoft av Maxis. Copyright (c) 1995 Maxis." },
    { IDS_STRING204, "Om 3D Pinball" },
    { IDS_STRING205, "Treff mål for å velge oppdrag" },
    { IDS_STRING206, "Bunkre skip på nytt" },
    { IDS_STRING207, "Skyt ut for å godta %s-oppdrag" },
    { IDS_STRING208, "Gjenstående\nangrepsbumpertreff: %d" },
    { IDS_STRING209, "Skyteøvelse bestått" },
    { IDS_STRING210, "Oppdrag avbrutt" },
    { IDS_STRING211, "Gjenstående utskytinger: %d" },
    { IDS_STRING212, "Utskytingstrening bestått" },
    { IDS_STRING213, "Gjenstående tilbakekomster: %d" },
    { IDS_STRING214, "Tilbakekomsttrening bestått" },
    { IDS_STRING215, "Gjenstående\nbombemål: %d" },
    { IDS_STRING216, "Vitenskapelig oppdrag fullført" },
    { IDS_STRING217, "Advarsel!  Lite drivstoff." },
    { IDS_STRING218, "Fyll høyre farebanker" },
    { IDS_STRING219, "Hyperrom-start" },
    { IDS_STRING220, "Komet ødelagt" },
    { IDS_STRING221, "Gå inn i ormebol" },
    { IDS_STRING222, "Eliminert stråling" },
    { IDS_STRING223, "Oppgrader angrepsbumpere" },
    { IDS_STRING224, "Gå inn i svart hull" },
    { IDS_STRING225, "Svart hull er eliminert" },
    { IDS_STRING226, "Gjenstående\nmål: %d" },
    { IDS_STRING227, "Ødelagte fremmedformer" },
    { IDS_STRING228, "Oppgraderte flagg" },
    { IDS_STRING229, "Hyperrom-start" },
    { IDS_STRING230, "Overlevende reddet" },
    { IDS_STRING231, "Romvesener slått tilbake" },
    { IDS_STRING232, "Traff drivstoffmål" },
    { IDS_STRING233, "Gjenstående fjernangreps-\nbumpertreff: %d" },
    { IDS_STRING234, "Satellitt reparert" },
    { IDS_STRING235, "Gjenstående\nbanepasseringer: %d" },
    { IDS_STRING236, "Skyt ball opp drivstoffsjakt" },
    { IDS_STRING237, "Undersøkelsen fullført" },
    { IDS_STRING238, "Gjenstående utbane-\npasseringer: %d" },
    { IDS_STRING239, "Helvetesmaskinen ødelagt" },
    { IDS_STRING240, "Rulleflagg: %d" },
    { IDS_STRING241, "Traff rulle for Romsprang" },
    { IDS_STRING242, "Pesten eliminert" },
    { IDS_STRING243, "Traff gult ormebol" },
    { IDS_STRING244, "Traff rødt ormebol" },
    { IDS_STRING245, "Traff grønt ormebol" },
    { IDS_STRING246, "Fant planer" },
    { IDS_STRING247, "Trampoline-\ntreff: %d" },
    { IDS_STRING248, "Traff Hyperromsjakt eller utskytingsrampe" },
    { IDS_STRING249, "Gjenstående trufne\nbombemål: %d" },
    { IDS_STRING250, "Gjenstående\nblinkmåltreff: %d" },
    { IDS_STRING251, "Gjenstående\nbanepasseringer: %d" },
    { IDS_STRING252, "Skyt ball opp drivstoffsjakt" },
    { IDS_STRING253, "Truffet utskytingsrampe" },
    { IDS_STRING254, "Traff flagg" },
    { IDS_STRING255, "Traff ormebol" },
    { IDS_STRING256, "Hyperromsjakt for å avslutte malstrøm" },
    { IDS_STRING257, "pinball.mid" },
    { IDS_STRING258, "0 UseBitmapFont" },
    { IDS_STRING259, "90 Venstre flippertast" },
    { IDS_STRING260, "45 Høyre flippertast" },
    { IDS_STRING261, "32 Utskytingstast" },
    { IDS_STRING262, "88 Venstre dunketast" },
    { IDS_STRING263, "46 Høyre dunketast" },
    { IDS_STRING264, "38 Dunk nede-tast" },
    { IDS_STRING265, "Software\\Microsoft\\Plus!\\Pinball" },
    { IDS_STRING266, "SpaceCadet" },
    { IDS_STRING267, "1c7c22a0-9576-11ce-bf80-444553540000" },
    { IDS_STRING268, "PINBALL.DAT" },
    { IDS_STRING269, "Romkadett" },
    { IDS_STRING270, "Feil:" },
    { IDS_STRING271, "Finner ikke andre bord." },
    { IDS_STRING272, "3D Pinball\nRomkadett" },
    { IDS_STRING273, "Forfremmelse til %s" },
    { IDS_STRING274, "Degradering til %s" },
    { IDS_STRING275, "Oppgrader angrepsbumpere" },
    { IDS_STRING276, "Fyll venstre farebanker" },
    { IDS_STRING277, "BESTE RESULTATER" },
    { IDS_STRING278, "pinball.chm" },
    { IDS_STRING279, "Ikke nok minne til å kjøre 3D Pinball." },
    { IDS_STRING280, "Spiller 1s resultat\n%ld" },
    { IDS_STRING281, "Spiller 2s resultat\n%ld" },
    { IDS_STRING282, "Spiller 3s resultat\n%ld" },
    { IDS_STRING283, "Spiller 4s resultat\n%ld" },
    { IDS_STRING284, "Beste resultat 1\n%ld" },
    { IDS_STRING285, "Beste resultat 2\n%ld" },
    { IDS_STRING286, "Beste resultat 3\n%ld" },
    { IDS_STRING287, "Beste resultat 4\n%ld" },
    { IDS_STRING288, "Beste resultat 5\n%ld" },
    { IDS_STRING289, "255 255 255   (R G B standard skriftfarge)" },
    { IDS_Menu1_UseMaxResolution_640x480, "Use Maximum Resolution (640 x 480)" },
    { IDS_Menu1_UseMaxResolution_800x600, "Use Maximum Resolution (800 x 600)" },
    { IDS_Menu1_UseMaxResolution_1024x768, "Use Maximum Resolution (1024 x 768)" },
};
