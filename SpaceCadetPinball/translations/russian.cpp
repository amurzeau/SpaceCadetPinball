#include "../pinball.h"
#include "russian.h"

const std::map<uint32_t, const char*> rc_strings_russian = {
    { IDS_Menu1_Game, "&Игра" },
    { IDS_Menu1_New_Game, "Новая &игра\tF2" },
    { IDS_Menu1_Launch_Ball, "Запуск &шарика" },
    { IDS_Menu1_Pause_Resume_Game, "Пауза/возобновление и&гры\tF3" },
    { IDS_Menu1_High_Scores, "&Чемпионы..." },
    { IDS_Menu1_Demo, "Д&емонстрация" },
    { IDS_Menu1_Exit, "В&ыход" },
    { IDS_Menu1_Options, "&Параметры" },
    { IDS_Menu1_Full_Screen, "&Во весь экран\tF4" },
    { IDS_Menu1_Select_Table, "Выбор &стола" },
    { IDS_Menu1_Select_Players, "Выбор &игроков" },
    { IDS_Menu1_1Player, "&1 игрок" },
    { IDS_Menu1_2Players, "&2 игрока" },
    { IDS_Menu1_3Players, "&3 игрока" },
    { IDS_Menu1_4Players, "&4 игрока" },
    { IDS_Menu1_Sounds, "&Звуковые эффекты" },
    { IDS_Menu1_Music, "&Музыка" },
    { IDS_Menu1_Player_Controls, "&Клавиши управления...\tF8" },
    { IDS_Menu1_Table_Resolution, "&Разрешение Стола" },
    { IDS_Menu1_MaximumResolution, "Использовать &Максимальное Разрешение" },
    { IDS_Menu1_640x480, "&640 x 480" },
    { IDS_Menu1_800x600, "&800 x 600" },
    { IDS_Menu1_1024x768, "&1024 x 768" },
    { IDS_Menu1_Window, "&Окно" },
    { IDS_Menu1_WindowUniformScale, "&Сохранение Пропорций" },
    { IDS_Menu1_AlternativeRender, "&Альтернативный Вывод" },
    { IDS_Menu1_Help, "&Справка" },
    { IDS_Menu1_Help_Topics, "&Вызов справки\tF1" },
    { IDS_Menu1_About_Pinball, "&О программе" },
    { IDS_HIGHSCORES_Caption, "Чемпионы" },
    { IDS_HIGHSCORES_Ok, "ОК" },
    { IDS_HIGHSCORES_Cancel, "Отмена" },
    { IDS_HIGHSCORES_Clear, "&Очистить" },
    { IDS_HIGHSCORES_Name, "Игрок" },
    { IDS_HIGHSCORES_Score, "Счет" },
    { IDS_HIGHSCORES_Rank, "Место" },
    { IDS_HIGHSCORES_Rank1, "1" },
    { IDS_HIGHSCORES_Rank2, "2" },
    { IDS_HIGHSCORES_Rank3, "3" },
    { IDS_HIGHSCORES_Rank4, "4" },
    { IDS_HIGHSCORES_Rank5, "5" },
    { IDS_KEYMAPPER_Caption, "Пинбол: клавиши управления" },
    { IDS_KEYMAPPER_Ok, "ОК" },
    { IDS_KEYMAPPER_Cancel, "Отмена" },
    { IDS_KEYMAPPER_Default, "По умол&чанию" },
    { IDS_KEYMAPPER_FlipperL, "&Левый флиппер" },
    { IDS_KEYMAPPER_FlipperR, "&Правый флиппер" },
    { IDS_KEYMAPPER_BumpLeft, "&Толчок стола слева" },
    { IDS_KEYMAPPER_BumpRight, "Т&олчок стола справа" },
    { IDS_KEYMAPPER_BumpBottom, "Толчо&к стола снизу" },
    { IDS_KEYMAPPER_Plunger, "&Рычаг запуска" },
    { IDS_KEYMAPPER_Help1, "Для изменения клавиш управления выберите подходящие значения клавиш в раскрывающихся списках, а затем нажмите кнопку OK." },
    { IDS_KEYMAPPER_Help2, "Для восстановления стандартных значений клавиш управления нажмите кнопку " },
    { IDS_KEYMAPPER_Groupbox1, "Выбор клавиш управления" },
    { IDS_KEYMAPPER_Groupbox2, "Указания" },
    { IDS_STRING101, "Выдан Реплей" },
    { IDS_STRING102, "Шарик Заблокирован" },
    { IDS_STRING103, "Центральный Ограничитель %ld" },
    { IDS_STRING104, "Выдан Бонус\n%ld" },
    { IDS_STRING105, "Бонус Активирован" },
    { IDS_STRING106, "Вооружение Улучшено" },
    { IDS_STRING107, "Двигатель Улучшен" },
    { IDS_STRING108, "Бонус Увеличен на 1 Миллион" },
    { IDS_STRING109, "Доступен Экстра Шарик %ld" },
    { IDS_STRING110, "Экстра Шарик" },
    { IDS_STRING111, "Рефлекторный Запуск\n%ld" },
    { IDS_STRING112, "Финальная Битва Выиграна" },
    { IDS_STRING113, "Бонус за Гипер Пространство %ld" },
    { IDS_STRING114, "Доступен Гипер Пространственный Бонус" },
    { IDS_STRING115, "Выдан Джекпот\n%ld" },
    { IDS_STRING116, "Джекпот Активирован" },
    { IDS_STRING117, "Мультиболл" },
    { IDS_STRING118, "Выдан Бонус За Рампу" },
    { IDS_STRING119, "Добавлен Свет" },
    { IDS_STRING120, "Бонус за Рампу Включен" },
    { IDS_STRING121, "Сброс Света Выключен" },
    { IDS_STRING122, "Умелый Запуск\n%ld" },
    { IDS_STRING123, "Игра Приостановлена\nF3 чтобы Продолжить" },
    { IDS_STRING124, "Игра Продолжена" },
    { IDS_STRING125, "F2 Начинает Новую Игру" },
    { IDS_STRING126, "Осторожно..." },
    { IDS_STRING127, "Игрок  1" },
    { IDS_STRING128, "Игрок  2" },
    { IDS_STRING129, "Игрок  3" },
    { IDS_STRING130, "Игрок  4" },
    { IDS_STRING131, "Демо\nИгрок 1" },
    { IDS_STRING132, "Демо\nИгрок 2" },
    { IDS_STRING133, "Демо\nИгрок 3" },
    { IDS_STRING134, "Демо\nИгрок 4" },
    { IDS_STRING135, "Игра Окончена" },
    { IDS_STRING136, "TILT!" },
    { IDS_STRING137, "Эта программа требует наличия по крайней мере 80386 процессора." },
    { IDS_STRING138, "Требуется 80386 процессор" },
    { IDS_STRING139, "Пинбол для Windows - ""Звездный юнга""" },
    { IDS_STRING140, "Несколько различных элементов управления используют одну и ту же клавишу. \nНазначьте различные клавиши для разных элементов управления." },
    { IDS_STRING141, "Очистить таблицу рекордов?" },
    { IDS_STRING142, "Подтверждение" },
    { IDS_STRING143, "Файл WAVEMIX.INF отсутствует - он должен быть расположен в той же папке, что и сама игра!" },
    { IDS_STRING144, "ПРЕДУПРЕЖДЕНИЕ:" },
    { IDS_STRING145, "Корабль Заправлен" },
    { IDS_STRING146, "Гравитационный Колодец" },
    { IDS_STRING147, "Прыжок во Времени Вперед" },
    { IDS_STRING148, "Прыжок во Времени Назад" },
    { IDS_STRING149, "Водоворот!" },
    { IDS_STRING150, "Червоточина" },
    { IDS_STRING151, "Ожидание Запуска" },
    { IDS_STRING152, "Флаги Улучшены" },
    { IDS_STRING153, "Удержание Бонуса" },
    { IDS_STRING154, "Благодарность Первого Уровня" },
    { IDS_STRING155, "Благодарность Второго Уровня" },
    { IDS_STRING156, "Благодарность Третьего Уровня" },
    { IDS_STRING157, "Множитель Поля 2x" },
    { IDS_STRING158, "Множитель Поля 3x" },
    { IDS_STRING159, "Множитель Поля 5x" },
    { IDS_STRING160, "Множитель Поля 10x" },
    { IDS_STRING161, "Стрельба по Мишеням" },
    { IDS_STRING162, "Тренировка по Запуску" },
    { IDS_STRING163, "Тренировка по Возвращению" },
    { IDS_STRING164, "Наука" },
    { IDS_STRING165, "Заблудшая Комета" },
    { IDS_STRING166, "Черная Дыра" },
    { IDS_STRING167, "Космическое Излучение" },
    { IDS_STRING168, "Охота На Жуков" },
    { IDS_STRING169, "Инопланетная Угроза" },
    { IDS_STRING170, "Спасение" },
    { IDS_STRING171, "Поиск Спутника" },
    { IDS_STRING172, "Разведка" },
    { IDS_STRING173, "Машина Судного Дня" },
    { IDS_STRING174, "Космическая чума" },
    { IDS_STRING175, "Секрет" },
    { IDS_STRING176, "Искривление Времени" },
    { IDS_STRING177, "Водоворот" },
    { IDS_STRING178, "Миссия Принята\n%ld" },
    { IDS_STRING179, "Миссия Завершена\n%ld" },
    { IDS_STRING180, "Выбрана Миссия %s" },
    { IDS_STRING181, "Черная Дыра\n%ld" },
    { IDS_STRING182, "Гравитация Нормализованна\n%ld" },
    { IDS_STRING183, "Гравитационный Колодец\n%ld" },
    { IDS_STRING184, "Повышение до %s" },
    { IDS_STRING185, "Кадет" },
    { IDS_STRING186, "Прапорщик" },
    { IDS_STRING187, "Лейтенант" },
    { IDS_STRING188, "Капитан" },
    { IDS_STRING189, "Лейтенант-Коммандер" },
    { IDS_STRING190, "Коммандер" },
    { IDS_STRING191, "Коммодор" },
    { IDS_STRING192, "Адмирал" },
    { IDS_STRING193, "Адмирал Флота" },
    { IDS_STRING194, "Червоточина Открыта" },
    { IDS_STRING195, "Бонус за Крушение\n%ld" },
    { IDS_STRING196, "Реплей Шарика" },
    { IDS_STRING197, "Повторное Развертывание" },
    { IDS_STRING198, "Игрок 1 Стреляет Снова" },
    { IDS_STRING199, "Игрок 2 Стреляет Снова" },
    { IDS_STRING200, "Игрок 3 Стреляет Снова" },
    { IDS_STRING201, "Игрок 4 Стреляет Снова" },
    { IDS_STRING202, "Эта программа разработана MAXIS по заказу Microsoft.\n© 1995 Maxis." },
    { IDS_STRING203, "Эта программа разработана MAXIS по заказу Microsoft. © 1995 Maxis." },
    { IDS_STRING204, "О программе" },
    { IDS_STRING205, "Поразите Цели Миссии, Чтобы Выбрать Миссию" },
    { IDS_STRING206, "Заправьте Корабль" },
    { IDS_STRING207, "Попадите в Рампу, Чтобы Принять Миссию %s" },
    { IDS_STRING208, "Осталось Попаданий по Бамперам Атаки: %d" },
    { IDS_STRING209, "Стрельба по Мишеням Пройдена" },
    { IDS_STRING210, "Миссия Прервана" },
    { IDS_STRING211, "Запусков Осталось: %d" },
    { IDS_STRING212, "Тренировка по Запуску Пройдена" },
    { IDS_STRING213, "Возвращений Осталось: %d" },
    { IDS_STRING214, "Тренировка по Возвращению Пройдена" },
    { IDS_STRING215, "Осталось Падающих\nЦелей: %d" },
    { IDS_STRING216, "Научная Миссия Выполнена" },
    { IDS_STRING217, "Предупреждение - Низкий Уровень Топлива" },
    { IDS_STRING218, "Заполните Правые Банки Опасностей" },
    { IDS_STRING219, "Запуск В Гипер Пространство" },
    { IDS_STRING220, "Комета Уничтожена" },
    { IDS_STRING221, "Войдите в Червоточину" },
    { IDS_STRING222, "Излучение Устранено" },
    { IDS_STRING223, "Обновите Пусковые Бамперы" },
    { IDS_STRING224, "Войдите в Черную Дыру" },
    { IDS_STRING225, "Черная Дыра Ликвидирована" },
    { IDS_STRING226, "Целей\nОсталось: %d" },
    { IDS_STRING227, "Ксеноморфы уничтожены" },
    { IDS_STRING228, "Улучшите Флаги" },
    { IDS_STRING229, "Запуск в Гипер Пространство" },
    { IDS_STRING230, "Выжившие Спасены" },
    { IDS_STRING231, "Инопланетяне Отбиты" },
    { IDS_STRING232, "Поражайте Топливные Цели" },
    { IDS_STRING233, "Осталось Попаданий по Дальним Бамперам Атаки: %d" },
    { IDS_STRING234, "Спутник Отремонтирован" },
    { IDS_STRING235, "Проходов Дорожек\nОсталось: %d" },
    { IDS_STRING236, "Запустите Шарик В Топливный Желоб" },
    { IDS_STRING237, "Обследование Завершено" },
    { IDS_STRING238, "Проходов Внешних Дорожек Осталось: %d" },
    { IDS_STRING239, "Машина Судного Дня Уничтожена" },
    { IDS_STRING240, "Крутите Флаги: %d" },
    { IDS_STRING241, "Попадите В Искривление Пространства" },
    { IDS_STRING242, "Чума Ликвидирована" },
    { IDS_STRING243, "Попадание в Желтую червоточину" },
    { IDS_STRING244, "Попадание в Красную червоточину" },
    { IDS_STRING245, "Попадание в Зеленую червоточину" },
    { IDS_STRING246, "Проекты Восстановлены" },
    { IDS_STRING247, "Осталось Попаданий по Отскоку: %d" },
    { IDS_STRING248, "Попадите в Гипер Пространственный Желоб или Стартовую Рампу" },
    { IDS_STRING249, "Осталось Попаданий по Падающим Целям: %d" },
    { IDS_STRING250, "Осталось Попаданий по Точечным Целям: %d" },
    { IDS_STRING251, "Проходов Дорожек Осталось: %d" },
    { IDS_STRING252, "Запустите Шарик В Топливный Желоб" },
    { IDS_STRING253, "Попадите в Стартовую Рампу" },
    { IDS_STRING254, "Попадите в Флаги" },
    { IDS_STRING255, "Попадите в Червоточину" },
    { IDS_STRING256, "Гипер Пространственный Желоб Закончит Водоворот" },
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
    { IDS_STRING269, "Звездный юнга" },
    { IDS_STRING270, "Ошибка:" },
    { IDS_STRING271, "Не удалось найти другие столы." },
    { IDS_STRING272, "3D Пинбол\nЗвездный юнга" },
    { IDS_STRING273, "Повышение в должности до %s" },
    { IDS_STRING274, "Понижение в должности до %s" },
    { IDS_STRING275, "Улучшите Бамперы Атаки" },
    { IDS_STRING276, "Заполните Левые Банки Опасностей" },
    { IDS_STRING277, "НОВЫЙ РЕКОРД" },
    { IDS_STRING278, "pinball.chm" },
    { IDS_STRING279, "Недостаточно памяти для запуска 3D пинбола." },
    { IDS_STRING280, "Счет Игрока 1\n%ld" },
    { IDS_STRING281, "Счет Игрока 2\n%ld" },
    { IDS_STRING282, "Счет Игрока 3\n%ld" },
    { IDS_STRING283, "Счет Игрока 4\n%ld" },
    { IDS_STRING284, "Рекорд 1\n%ld" },
    { IDS_STRING285, "Рекорд 2\n%ld" },
    { IDS_STRING286, "Рекорд 3\n%ld" },
    { IDS_STRING287, "Рекорд 4\n%ld" },
    { IDS_STRING288, "Рекорд 5\n%ld" },
    { IDS_STRING289, "255 255 255   (R G B default font color)" },
    { IDS_Menu1_UseMaxResolution_640x480, "Использовать &Максимальное Разрешение (640 x 480)" },
    { IDS_Menu1_UseMaxResolution_800x600, "Использовать &Максимальное Разрешение (800 x 600)" },
    { IDS_Menu1_UseMaxResolution_1024x768, "Использовать &Максимальное Разрешение (1024 x 768)" },
};
