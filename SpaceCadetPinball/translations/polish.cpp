#include "../pinball.h"
#include "polish.h"

const std::map<uint32_t, const char*> rc_strings_polish = {
    { IDS_Menu1_Game, "Gra" },
    { IDS_Menu1_New_Game, "Nowa gra" },
    { IDS_Menu1_Launch_Ball, "Załaduj kulkę" },
    { IDS_Menu1_Pause_Resume_Game, "Wstrzymaj/wznów grę" },
    { IDS_Menu1_High_Scores, "Najlepsze wyniki..." },
    { IDS_Menu1_Demo, "Pokaz" },
    { IDS_Menu1_Exit, "Zakończ" },
    { IDS_Menu1_Options, "Opcje" },
    { IDS_Menu1_Full_Screen, "Pełny ekran" },
    { IDS_Menu1_Select_Table, "Wybierz stół" },
    { IDS_Menu1_Select_Players, "Wybierz graczy" },
    { IDS_Menu1_1Player, "1 gracz" },
    { IDS_Menu1_2Players, "2 graczy" },
    { IDS_Menu1_3Players, "3 graczy" },
    { IDS_Menu1_4Players, "4 graczy" },
    { IDS_Menu1_Sounds, "Dźwięki" },
    { IDS_Menu1_Music, "Muzyka" },
    { IDS_Menu1_Player_Controls, "Sterowniki gracza..." },
    { IDS_Menu1_Table_Resolution, "Table Resolution" },
    { IDS_Menu1_MaximumResolution, "Use Maximum Resolution" },
    { IDS_Menu1_640x480, "640 x 480" },
    { IDS_Menu1_800x600, "800 x 600" },
    { IDS_Menu1_1024x768, "1024 x 768" },
    { IDS_Menu1_Window, "Window" },
    { IDS_Menu1_WindowUniformScale, "Uniform Scaling" },
    { IDS_Menu1_AlternativeRender, "Alternative Rendering" },
    { IDS_Menu1_Help, "Pomoc" },
    { IDS_Menu1_Help_Topics, "Tematy Pomocy" },
    { IDS_Menu1_About_Pinball, "Pinball - informacje" },
    { IDS_HIGHSCORES_Caption, "Najlepsze wyniki" },
    { IDS_HIGHSCORES_Ok, "OK" },
    { IDS_HIGHSCORES_Cancel, "Anuluj" },
    { IDS_HIGHSCORES_Clear, "Wyczyść" },
    { IDS_HIGHSCORES_Name, "Nazwa" },
    { IDS_HIGHSCORES_Score, "Wynik" },
    { IDS_HIGHSCORES_Rank, "Klasyfikacja" },
    { IDS_HIGHSCORES_Rank1, "1" },
    { IDS_HIGHSCORES_Rank2, "2" },
    { IDS_HIGHSCORES_Rank3, "3" },
    { IDS_HIGHSCORES_Rank4, "4" },
    { IDS_HIGHSCORES_Rank5, "5" },
    { IDS_KEYMAPPER_Caption, "3D Pinball: Sterowniki gracza" },
    { IDS_KEYMAPPER_Ok, "OK" },
    { IDS_KEYMAPPER_Cancel, "Anuluj" },
    { IDS_KEYMAPPER_Default, "Domyślne" },
    { IDS_KEYMAPPER_FlipperL, "Lewe ramię" },
    { IDS_KEYMAPPER_FlipperR, "Prawe ramię" },
    { IDS_KEYMAPPER_BumpLeft, "Uderzenie w stół z lewej strony" },
    { IDS_KEYMAPPER_BumpRight, "Uderzenie w stół z prawej strony" },
    { IDS_KEYMAPPER_BumpBottom, "Uderzenie w stół od dołu" },
    { IDS_KEYMAPPER_Plunger, "Wyrzutnia" },
    { IDS_KEYMAPPER_Help1, "Aby zmienić klawisze sterowania grą, wybierz opcję, którą chcesz zmienić, kliknij przycisk strzałki, wybierz żądany klawisz i kliknij przycisk OK." },
    { IDS_KEYMAPPER_Help2, "Aby przywrócić oryginalne ustawienia gry 3D Pinball, kliknij przycisk Domyślne, a następnie kliknij przycisk OK. Aby używać klawiszy strzałek na klawiaturze numerycznej upewnij się, że klawisz NUMLOCK jest wyłączony." },
    { IDS_KEYMAPPER_Groupbox1, "Opcje sterowania" },
    { IDS_KEYMAPPER_Groupbox2, "Instrukcje" },
    { IDS_STRING101, "Powtórzenie gry" },
    { IDS_STRING102, "Kulka zablokowana" },
    { IDS_STRING103, "Centralny słupek\n%ld" },
    { IDS_STRING104, "Premia przyznana\n%ld" },
    { IDS_STRING105, "Premia aktywna" },
    { IDS_STRING106, "Modernizacja broni" },
    { IDS_STRING107, "Modernizacja silnika" },
    { IDS_STRING108, "Premia - 1 milion" },
    { IDS_STRING109, "Dostępna dodatkowa kulka\n%ld" },
    { IDS_STRING110, "Dodatkowa kulka" },
    { IDS_STRING111, "Nagroda za odbity strzał\n%ld" },
    { IDS_STRING112, "Ostateczne zwycięstwo" },
    { IDS_STRING113, "Premia hiperprzestrzeni\n%ld" },
    { IDS_STRING114, "Dostępna premia hiperprzestrzeni" },
    { IDS_STRING115, "Pula nagród przyznana\n%ld" },
    { IDS_STRING116, "Pula nagród aktywna" },
    { IDS_STRING117, "Kilka kulek" },
    { IDS_STRING118, "Premia pomostu przyznana" },
    { IDS_STRING119, "Światełko dodane" },
    { IDS_STRING120, "Premia pomostu włączona" },
    { IDS_STRING121, "Światełko wyłączone" },
    { IDS_STRING122, "Strzał zręcznościowy\n%ld" },
    { IDS_STRING123, "Gra wstrzymana.\nF3 wznawia grę." },
    { IDS_STRING124, "Kontynuuj grę" },
    { IDS_STRING125, "F2 rozpoczyna nową grę." },
    { IDS_STRING126, "Ostrożnie..." },
    { IDS_STRING127, "Gracz 1" },
    { IDS_STRING128, "Gracz 2" },
    { IDS_STRING129, "Gracz 3" },
    { IDS_STRING130, "Gracz 4" },
    { IDS_STRING131, "Pokaz\nGracz 1" },
    { IDS_STRING132, "Pokaz\nGracz 2" },
    { IDS_STRING133, "Pokaz\nGracz 3" },
    { IDS_STRING134, "Pokaz\nGracz 4" },
    { IDS_STRING135, "Koniec gry" },
    { IDS_STRING136, "TILT!" },
    { IDS_STRING137, "Ten program wymaga procesora 80386 lub nowszego." },
    { IDS_STRING138, "Wymagany procesor 80386" },
    { IDS_STRING139, "3D Pinball dla Windows - Space Cadet" },
    { IDS_STRING140, "Jedna lub kilka opcji sterujących używa tego samego klawisza.\nNajlepiej jest używać różnych klawiszy dla różnych opcji." },
    { IDS_STRING141, "Czy wyczyścić najlepsze wyniki?" },
    { IDS_STRING142, "Potwierdzanie" },
    { IDS_STRING143, "Brak pliku WAVEMIX.INF - ten plik musi znajdować się w katalogu gry Pinball!" },
    { IDS_STRING144, "Ostrzeżenie:" },
    { IDS_STRING145, "Paliwo uzupełnione" },
    { IDS_STRING146, "Studnia grawitacyjna" },
    { IDS_STRING147, "Zakrzywienie czasu w przód" },
    { IDS_STRING148, "Zakrzywienie czasu w tył" },
    { IDS_STRING149, "Wir!" },
    { IDS_STRING150, "Tunel czasoprzestrzenny" },
    { IDS_STRING151, "Oczekiwanie na rozstawienie" },
    { IDS_STRING152, "Modernizacja flag" },
    { IDS_STRING153, "Wstrzymanie premii" },
    { IDS_STRING154, "Awans na poziom pierwszy" },
    { IDS_STRING155, "Awans na poziom drugi" },
    { IDS_STRING156, "Awans na poziom trzeci" },
    { IDS_STRING157, "Współczynnik pola x2" },
    { IDS_STRING158, "Współczynnik pola x3" },
    { IDS_STRING159, "Współczynnik pola x5" },
    { IDS_STRING160, "Współczynnik pola x10" },
    { IDS_STRING161, "Ćwiczenie celności" },
    { IDS_STRING162, "Trening ładowania" },
    { IDS_STRING163, "Trening ponownego wejścia" },
    { IDS_STRING164, "Nauka" },
    { IDS_STRING165, "Zabłąkana kometa" },
    { IDS_STRING166, "Czarna dziura" },
    { IDS_STRING167, "Kosmiczna radiacja" },
    { IDS_STRING168, "Polowanie na pluskwy" },
    { IDS_STRING169, "Inwazja obcych" },
    { IDS_STRING170, "Misja ratunkowa" },
    { IDS_STRING171, "Przechwycenie satelity" },
    { IDS_STRING172, "Rekonesans" },
    { IDS_STRING173, "Maszyna zagłady" },
    { IDS_STRING174, "Plaga kosmiczna" },
    { IDS_STRING175, "Tajemnica" },
    { IDS_STRING176, "Zakrzywienie czasu" },
    { IDS_STRING177, "Wir" },
    { IDS_STRING178, "Misja przyjęta\n%ld" },
    { IDS_STRING179, "Misja ukończona\n%ld" },
    { IDS_STRING180, "Wybrano misję: %s" },
    { IDS_STRING181, "Czarna dziura\n%ld" },
    { IDS_STRING182, "Grawitacja normalna\n%ld" },
    { IDS_STRING183, "Studnia grawitacyjna\n%ld" },
    { IDS_STRING184, "Awans do stopnia: %s" },
    { IDS_STRING185, "Kadet" },
    { IDS_STRING186, "Rekrut" },
    { IDS_STRING187, "Porucznik" },
    { IDS_STRING188, "Kapitan" },
    { IDS_STRING189, "Młodszy komandor" },
    { IDS_STRING190, "Komandor" },
    { IDS_STRING191, "Komodor" },
    { IDS_STRING192, "Admirał" },
    { IDS_STRING193, "Admirał floty" },
    { IDS_STRING194, "Tunel czasoprzestrzenny otwarty" },
    { IDS_STRING195, "Premia za katastrofę\n%ld" },
    { IDS_STRING196, "Rozgrywaj ponownie" },
    { IDS_STRING197, "Rozstawiaj ponownie" },
    { IDS_STRING198, "Gracz 1 rozgrywa ponownie" },
    { IDS_STRING199, "Gracz 2 rozgrywa ponownie" },
    { IDS_STRING200, "Gracz 3 rozgrywa ponownie" },
    { IDS_STRING201, "Gracz 4 rozgrywa ponownie" },
    { IDS_STRING202, "Ta gra 3D Pinball Table została opracowana dla firmy Microsoft przez firmę Maxis.\nWięcej informacji pod numerem tel. (800)-336-2947\n(tylko klienci z USA i Kanady).\nCopyright (c) 1995 Maxis." },
    { IDS_STRING203, "Gra 3D Pinball Table opracowana dla Microsoft przez firmę Maxis. Copyright (c) 1995 Maxis." },
    { IDS_STRING204, "3D Pinball - informacje" },
    { IDS_STRING205, "Aby wybrać misję, celuj w tarcze misji" },
    { IDS_STRING206, "Uzupełnij paliwo" },
    { IDS_STRING207, "Pomost ładowania akceptuje misję %s" },
    { IDS_STRING208, "Trafienia zderzaków ataku\nPozostało: %d" },
    { IDS_STRING209, "Test celności zdany" },
    { IDS_STRING210, "Misja przerwana" },
    { IDS_STRING211, "Pozostało ładowań: %d" },
    { IDS_STRING212, "Test ładowania zdany" },
    { IDS_STRING213, "Pozostało ponownych wejść: %d" },
    { IDS_STRING214, "Test ponownych wejść zdany" },
    { IDS_STRING215, "Tarcze strącania\nPozostało: %d" },
    { IDS_STRING216, "Misja naukowa ukończona" },
    { IDS_STRING217, "Uwaga - niski stan paliwa" },
    { IDS_STRING218, "Wypełnij prawy bank ryzyka" },
    { IDS_STRING219, "Przejście w hiperprzestrzeń" },
    { IDS_STRING220, "Kometa zniszczona" },
    { IDS_STRING221, "Celuj w tunel czasoprzestrzenny" },
    { IDS_STRING222, "Radiacja zlikwidowana" },
    { IDS_STRING223, "Wymień zderzaki ładowania" },
    { IDS_STRING224, "Celuj w czarną dziurę" },
    { IDS_STRING225, "Czarna dziura zniszczona" },
    { IDS_STRING226, "Tarcze\nPozostało: %d" },
    { IDS_STRING227, "Ksenomorfy zniszczone" },
    { IDS_STRING228, "Wymień flagi" },
    { IDS_STRING229, "Przejście w hiperprzestrzeń" },
    { IDS_STRING230, "Rozbitkowie uratowani" },
    { IDS_STRING231, "Obcy odstraszeni" },
    { IDS_STRING232, "Celuj w tarcze paliwa" },
    { IDS_STRING233, "Trafienia odległego zderzaka ataku\nPozostało: %d" },
    { IDS_STRING234, "Satelita naprawiony" },
    { IDS_STRING235, "Przejścia po torach\nPozostało: %d" },
    { IDS_STRING236, "Wprowadź kulkę w rynnę paliwa" },
    { IDS_STRING237, "Przegląd zakończony" },
    { IDS_STRING238, "Przejścia po torach zewn.\nPozostało: %d" },
    { IDS_STRING239, "Maszyna zagłady zniszczona" },
    { IDS_STRING240, "Zwijanie flag: %d" },
    { IDS_STRING241, "Celuj w wywrotkę zakrzywienia przestrzeni" },
    { IDS_STRING242, "Plaga zażegnana" },
    { IDS_STRING243, "Celuj w żółty tunel" },
    { IDS_STRING244, "Celuj w czerwony tunel" },
    { IDS_STRING245, "Celuj w zielony tunel" },
    { IDS_STRING246, "Plany odzyskane" },
    { IDS_STRING247, "Trafienia odbicia\nPozostało: %d" },
    { IDS_STRING248, "Celuj w rynnę hiperprzestrzeni lub pomost ładowania" },
    { IDS_STRING249, "Trafienia tarcz strącania\nPozostało: %d" },
    { IDS_STRING250, "Trafienia tarcz punktowych\nPozostało: %d" },
    { IDS_STRING251, "Przejścia po torach\nPozostało: %d" },
    { IDS_STRING252, "Wprowadź kulkę w rynnę paliwa" },
    { IDS_STRING253, "Celuj w pomost ładowania" },
    { IDS_STRING254, "Celuj we flagi" },
    { IDS_STRING255, "Celuj w tunel czasoprzestrzenny" },
    { IDS_STRING256, "Rynna hiperprzestrzeni zamyka Wir" },
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
    { IDS_STRING270, "Błąd:" },
    { IDS_STRING271, "Nie można odnaleźć innych stołów." },
    { IDS_STRING272, "3D Pinball\nSpace Cadet" },
    { IDS_STRING273, "Awans do stopnia: %s" },
    { IDS_STRING274, "Degradacja do stopnia: %s" },
    { IDS_STRING275, "Wymień zderzaki ataku" },
    { IDS_STRING276, "Wypełnij lewy bank ryzyka" },
    { IDS_STRING277, "NAJLEPSZY WYNIK" },
    { IDS_STRING278, "pinball.chm" },
    { IDS_STRING279, "Za mało pamięci do uruchomienia gry 3D Pinball." },
    { IDS_STRING280, "Wynik gracza 1\n%ld" },
    { IDS_STRING281, "Wynik gracza 2\n%ld" },
    { IDS_STRING282, "Wynik gracza 3\n%ld" },
    { IDS_STRING283, "Wynik gracza 4\n%ld" },
    { IDS_STRING284, "Najlepszy wynik 1\n%ld" },
    { IDS_STRING285, "Najlepszy wynik 2\n%ld" },
    { IDS_STRING286, "Najlepszy wynik 3\n%ld" },
    { IDS_STRING287, "Najlepszy wynik 4\n%ld" },
    { IDS_STRING288, "Najlepszy wynik 5\n%ld" },
    { IDS_STRING289, "255 255 255   (kolor R G B czcionki domyślnej)" },
    { IDS_Menu1_UseMaxResolution_640x480, "Use Maximum Resolution (640 x 480)" },
    { IDS_Menu1_UseMaxResolution_800x600, "Use Maximum Resolution (800 x 600)" },
    { IDS_Menu1_UseMaxResolution_1024x768, "Use Maximum Resolution (1024 x 768)" },
};
