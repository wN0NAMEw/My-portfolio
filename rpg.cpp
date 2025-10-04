#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <random>
#include <stdlib.h>
#include <iostream>
#include <conio.h>
#include <string>
#include <vector>
#include <chrono>
#include <thread>

// vector<int> ttm;
// cout << "\x1B[2J\x1B[H";

using namespace std;
// моя лень или просто инвентарь
static int idHp = 0;
static int idMp = 0;
static int idHpMp = 0;

struct Player {
    int MaxArmor;
    int Armor;
    int PointUP;
    int level;
    int MaxHelth;
    int health;
    int xp;
    int nextLevelXp;
    int MaxMana;
    int mana;
    int gold;
    int damage;
};

struct BaseEnimys {
    int health;
    int defend;
    int maxdamage;
    int mindamage;
    int dropGold;
    int dropXp;
};
struct Boss {
    int health = 3000;
    int defend = 70;
    int maxdamage = 200;
    int mindamage = 100;
    int dropGold = 999;
    int dropXp = 9999;
};

// рисовалка
void drawSercher() {
    for (int i = 0; i < 3; i++) {
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "      " << endl;
        cout << "                     |=============|" << endl;
        cout << "                     |    ПОИСК    |" << endl;
        cout << "                     |    ВРАГА    |" << endl;
        cout << "                     |=============|" << endl;
        cout << "      " << endl;
        std::chrono::milliseconds serch(100);
        std::this_thread::sleep_for(serch);
        system("CLS");

        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "                      **  " << endl;
        cout << "                     |=============|" << endl;
        cout << "                     |    ПОИСК    |" << endl;
        cout << "                     |    ВРАГА    |" << endl;
        cout << "                     |=============|" << endl;
        cout << "                      **  " << endl;
        std::this_thread::sleep_for(serch);
        system("CLS");

        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "                      ****  " << endl;
        cout << "                     |=============|" << endl;
        cout << "                     |    ПОИСК    |" << endl;
        cout << "                     |    ВРАГА    |" << endl;
        cout << "                     |=============|" << endl;
        cout << "                      ****  " << endl;
        std::this_thread::sleep_for(serch);
        system("CLS");

        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "                      ******  " << endl;
        cout << "                     |=============|" << endl;
        cout << "                     |    ПОИСК    |" << endl;
        cout << "                     |    ВРАГА    |" << endl;
        cout << "                     |=============|" << endl;
        cout << "                      ******  " << endl;
        std::this_thread::sleep_for(serch);
        system("CLS");

        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "                      ********  " << endl;
        cout << "                     |=============|" << endl;
        cout << "                     |    ПОИСК    |" << endl;
        cout << "                     |    ВРАГА    |" << endl;
        cout << "                     |=============|" << endl;
        cout << "                      ********  " << endl;
        std::this_thread::sleep_for(serch);
        system("CLS");

        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "                      **********  " << endl;
        cout << "                     |=============|" << endl;
        cout << "                     |    ПОИСК    |" << endl;
        cout << "                     |    ВРАГА    |" << endl;
        cout << "                     |=============|" << endl;
        cout << "                      **********  " << endl;
        std::this_thread::sleep_for(serch);
        system("CLS");

        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "\n";
        cout << "                      ************  " << endl;
        cout << "                     |=============|" << endl;
        cout << "                     |    ПОИСК    |" << endl;
        cout << "                     |    ВРАГА    |" << endl;
        cout << "                     |=============|" << endl;
        cout << "                      ************  " << endl;
        std::this_thread::sleep_for(serch);
        system("CLS");
    }
    cout << "\n";
    cout << "\n";
    cout << "\n";
    cout << "\n";
    cout << "\n";
    cout << "                      *************  " << endl;
    cout << "                     |=============|" << endl;
    cout << "                     |     ВРАГ    |" << endl;
    cout << "                     |    НАЙДЕН   |" << endl;
    cout << "                     |=============|" << endl;
    cout << "                      *************  " << endl;
    std::chrono::milliseconds fins(1500);
    std::this_thread::sleep_for(fins);
    system("CLS");
}
void drawLose() {
    cout << endl;
    cout << endl;
    cout << "               |======================|" << endl;
    cout << "               |                      |" << endl;
    cout << "               |     ВЫ ПРОИГРАЛИ     |" << endl;
    cout << "               |                      |" << endl;
    cout << "               |======================|" << endl;
    cout << endl;
    cout << endl;
}
void drawWin() {
    cout << endl;
    cout << endl;
    cout << "               |=======================|" << endl;
    cout << "               |                       |" << endl;
    cout << "               |      ВЫ ВЫЙГРАЛИ      |" << endl;
    cout << "               |                       |" << endl;
    cout << "               |=======================|" << endl;
    cout << endl;
    cout << endl;
}
void drawPlayer() {
    cout << endl;
    cout << "                        _.'\"\"\"\"\"-._" << endl;
    cout << "                      .'  _.       ``\\" << endl;
    cout << "     .--.           .' _.' )`.        |" << endl;
    cout << "    (    `---...._.'   `---.'_)    ..  \\" << endl;
    cout << "     \\            `----....___    `. \\  |" << endl;
    cout << "      `.           _ ----- _   `._  )/  |" << endl;
    cout << "        `.       /\"  \\   /\"  \\`.  `._   |" << endl;
    cout << "          `.    ((O)` ) ((O)` ) `.   `._\\" << endl;
    cout << "            `-- '`---'   `---' )  `.    `-." << endl;
    cout << "               /                  ` \\      `-." << endl;
    cout << "             .'                      `.       `." << endl;
    cout << "            /                     `  ` `.       `-." << endl;
    cout << "     .--.   \\ ===._____.======. `    `   `. .___.--`     .''''."
        << endl;
    cout << "    ' .` `-. `.                )`. `   ` ` \\          .' . '  8)"
        << endl;
    cout << "   (8  .  ` `-.`.               ( .  ` `  .`\\      .'  '    ' /"
        << endl;
    cout << "    \\  `. `    `-.               ) ` .   ` ` \\  .'   ' .  '  /"
        << endl;
    cout << "     \\ ` `.  ` . \\`.    .--.     |  ` ) `   .``/   '  // .  /"
        << endl;
    cout << "      `.  ``. .   \\ \\   .-- `.  (  ` /_   ` . / ' .  '/   .'"
        << endl;
    cout << "        `. ` \\  `  \\ \\  '-.   `-'  .'  `-.  `   .  .'/  .'"
        << endl;
    cout << "          \\ `.`.  ` \\ \\    ) /`._.`       `.  ` .  .'  /" << endl;
    cout << "            |  `.`. . \\ \\  (.'               `.   .'  .'" << endl;
    cout << "         __/  .. \\ \\ ` ) \\                     \\.' .. \\__"
        << endl;
    cout << " .-._.-'     '\"  ) .-'   `.                   (  '\"     `-._.--."
        << endl;
    cout << "(_________.-====' / .' /\\_)`--..__________..-- `====-. _________)"
        << endl;
    cout << "                 (.'(.'" << endl;
    cout << endl;
}
void drawChibiPlayer() {
    cout << endl;
    cout << "           (.)_(.)" << endl;
    cout << "        _ (   _   )" << endl;
    cout << "       / \\/`-----'\\/ \\" << endl;
    cout << "     __\\ ( (     ) ) /__" << endl;
    cout << "     )   /\\ \\._./ /\\   (" << endl;
    cout << "      )_/ /|\\   /|\\ \\_(" << endl;
    cout << endl;
}
void drawMagaz() {
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "      |-------------=====================--------------|" << endl;
    cout << "      |              |:|МАГАЗ У БАРЫГИ|:|              |" << endl;
    cout << "      |-------------=====================--------------|" << endl;
    cout << "      | |              ________                      | |" << endl;
    cout << "      | |             /__    __\\                     | |" << endl;
    cout << "      | |            / (*)  (*) \\                    | |" << endl;
    cout << "      | |           /            \\                   | |" << endl;
    cout << "      | |           |------------|                   | |" << endl;
    cout << "      | |           |     ||     |                   | |" << endl;
    cout << "      | |           |   ~~~~~~   |                   | |" << endl;
    cout << "      | |___________|____________|___________________| |" << endl;
    cout << "      |/______________________________________________\\|" << endl;
    cout << "      |!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!|" << endl;
    cout << "      |````````````````````````````````````````````````|" << endl;
    cout << "      |                                                |" << endl;
    cout << "      |________________________________________________|" << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
}
void drawBoss() {
    cout << endl;
    cout << "                   ___====-_  _-====___" << endl;
    cout << "             _--^^^#####//      \\\\#####^^^--_" << endl;
    cout << "          _-^##########// (    ) \\\\##########^-_" << endl;
    cout << "         -############//  |\\^^/|  \\\\############-" << endl;
    cout << "       _/############//   (@::@)   \\\\############\\_" << endl;
    cout << "      /#############((     \\\\//     ))#############\\" << endl;
    cout << "     -###############\\\\    (oo)    //###############-" << endl;
    cout << "    -#################\\\\  / VV \\  //#################-" << endl;
    cout << "   -###################\\\\/      \\//###################-" << endl;
    cout << "  _#/|##########/\\######(   /\\   )######/\\##########|\\#_"
        << endl;
    cout << "  |/ |#/\\#/\\#/\\/  \\#/\\##\\  |  |  /##/\\#/  \\/\\#/\\#/\\#| \\|"
        << endl;
    cout << "  `  |/  V  V  `   V  \\#\\| |  | |/#/  V   '  V  V  \\|  '" << endl;
    cout << "     `   `  `      `   / | |  | | \\   '      '  '   '" << endl;
    cout << "                      (  | |  | |  )" << endl;
    cout << "                     __\\ | |  | | /__" << endl;
    cout << "                    (vvv(VVV)(VVV)vvv)" << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
}
void drawOwl() {
    cout << endl;
    cout << "          , _ ," << endl;
    cout << "         ( o o )" << endl;
    cout << "        /'` ' `'\\" << endl;
    cout << "        |'''''''|" << endl;
    cout << "        |\\'''//|" << endl;
    cout << "           \"\"\" " << endl;
    cout << endl;
}
void drawBat() {
    cout << endl;
    cout << " /\\                 /\\" << endl;
    cout << "/ \\'._   (\\_/)   _.'/ \\" << endl;
    cout << "|.''._'--(o.o)--'_.''.|" << endl;
    cout << " \\_ / `;=/ \" \\=;` \\ _/" << endl;
    cout << "   `\\__| \\___/ |__/`" << endl;
    cout << "        \\(_|_)/" << endl;
    cout << "         \" ` \"" << endl;
    cout << endl;
}
void drawBear() {
    cout << endl;
    cout << "      (()__(()" << endl;
    cout << "       /       \\ " << endl;
    cout << "      ( /    \\  \\" << endl;
    cout << "       \\ o o    /" << endl;
    cout << "       (_()_)__/ \\  " << endl;
    cout << "      / _,==.____ \\" << endl;
    cout << "     (   |--|      )" << endl;
    cout << "     /\\_.|__|'-.__/\\_" << endl;
    cout << "    / (        /     \\ " << endl;
    cout << "    \\  \\      (      /" << endl;
    cout << "     )  '._____)    /    " << endl;
    cout << "  (((____.--(((____/" << endl;
    cout << endl;
}
void drawSpider() {
    cout << endl;
    cout << "                (" << endl;
    cout << "                 )" << endl;
    cout << "                (" << endl;
    cout << "          /\\  .-\"\"\"-.  /\\" << endl;
    cout << "         //\\\\/  ,,,  \\//\\\\" << endl;
    cout << "         |/\\| ,;;;;;, |/\\|" << endl;
    cout << "         //\\\\\\;-\"\"\"-;///\\\\" << endl;
    cout << "        //  \\/   .   \\/  \\\\" << endl;
    cout << "       (| ,-_| \\ | / |_-, |)" << endl;
    cout << "         //`__\\.-.-./__`\\\\" << endl;
    cout << "        // /.-(() ())-.\\ \\\\" << endl;
    cout << "       (\\ |)   '---'   (| /)" << endl;
    cout << "        ` (|           |) `" << endl;
    cout << "          \\)           (/" << endl;
    cout << endl;
}

// прямая связь с игроком
void StatDisplayPlayer(const Player& user) {
    cout << "|==========================" << endl;
    cout << "| Уровень: " << user.level << endl;
    cout << "| Опыт: " << user.xp << "/" << user.nextLevelXp << endl;
    cout << "| Очки прокачки: " << user.PointUP << endl;
    cout << "| Здоровье: " << user.health << "/" << user.MaxHelth << endl;
    cout << "| Мана: " << user.mana << "/" << user.MaxMana << endl;
    cout << "| Урон: " << user.damage << endl;
    cout << "| Броня: " << user.Armor << endl;
    cout << "| Деньги: " << user.gold << endl;
    cout << "|==========================" << endl;
}
void MenuInventoary() {
    cout << "|====================================================|" << endl;
    cout << "| Зелье Востановления Здоровья |      +100хп     | " << idHp
        << " |" << endl;
    cout << "| Зелье Востановления Маны     |      +100мп     | " << idMp
        << " |" << endl;
    cout << "| Зелье Востановления Всего    | +100 хп +100 мп | " << idHpMp
        << " |" << endl;
    cout << "|====================================================|" << endl;
}
void CodeInventoary() {
    int selectedOption = 0;
    string options[] = { "Выйти" };
    int numOptions = sizeof(options) / sizeof(options[0]);
    bool isRunning = true;
    while (isRunning) {
        system("CLS");
        cout << endl;
        cout << endl;
        cout << endl;
        drawChibiPlayer();
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        MenuInventoary();
        cout << "Выберите действие: \n";
        for (int i = 0; i < numOptions; i++) {
            if (i == selectedOption) {
                cout << "\033[1;33m> " << options[i] << "\033[0m" << endl;
            }
            else {
                cout << "  " << options[i] << endl;
            }
        }

        int key = _getch();
        switch (key) {
        case 72:
            selectedOption = (selectedOption - 1 + numOptions) % numOptions;
            break;
        case 80:
            selectedOption = (selectedOption + 1) % numOptions;
            break;
        case 13:
            if (selectedOption == 0) {
                isRunning = false;
                break;
            }
        }
    }
}

// магазинчик
void MenuInventoaryInStore() {
    cout << "|====================================================|" << endl;
    cout << "| Зелье Востановления Здоровья |      +100хп     | " << idHp << " |"
        << endl;
    cout << "| Зелье Востановления Маны     |      +100мп     | " << idMp << " |"
        << endl;
    cout << "| Зелье Востановления Всего    | +100 хп +100 мп | " << idHpMp
        << " |" << endl;
    cout << "|====================================================|" << endl;
}
void Buing(Player& user, int poduct) {
    if (poduct == 1) {
        if (idHp <= 8 and user.gold >= 75) {
            user.gold -= 75;
            idHp++;
        }
    }
    else if (poduct == 2) {
        if (idMp <= 8 and user.gold >= 75) {
            user.gold -= 75;
            idMp++;
        }
    }
    else if (poduct == 3) {
        if (idHpMp <= 8 and user.gold >= 150) {
            user.gold -= 150;
            idHpMp++;
        }
    }
}
void CodeMagaz(Player& user) {
    int selectedOption = 0;
    string options[] = { "Зелье Востановления Здоровья  +100хп / 75 монет",
        "Зелье Востановления Маны  +100мп / 75 монет",
        "Зелье Востановления Всего  +100хп  +100мп / 150 монет", "Выйти" };
    int numOptions = sizeof(options) / sizeof(options[0]);
    bool isRunning = true;
    while (isRunning) {
        system("CLS");
        drawMagaz();
        cout << endl;
        StatDisplayPlayer(user);
        cout << endl;
        MenuInventoaryInStore();
        cout << endl;
        cout << "Выберите действие: \n";
        for (int i = 0; i < numOptions; i++) {
            if (i == selectedOption) {
                cout << "\033[1;33m> " << options[i] << "\033[0m" << endl;
            }
            else {
                cout << "  " << options[i] << endl;
            }
        }

        int key = _getch();
        switch (key) {
        case 72:
            selectedOption = (selectedOption - 1 + numOptions) % numOptions;
            break;
        case 80:
            selectedOption = (selectedOption + 1) % numOptions;
            break;
        case 13:
            if (selectedOption == 0) {
                Buing(user, 1);
            }
            else if (selectedOption == 1) {
                Buing(user, 2);
            }
            else if (selectedOption == 2) {
                Buing(user, 3);
            }
            else if (selectedOption == 3) {
                isRunning = false;
                system("CLS");
                break;
            }
        }
    }
}

// боевка

void ButtleMob(Player& user, int doping) {
    srand(time(NULL));
    chrono::milliseconds late(1500);
    BaseEnimys Mob;
    Mob.health = 50 * doping;
    Mob.defend = 5 * doping;
    Mob.maxdamage = 3 * doping;
    Mob.mindamage = doping;
    Mob.dropGold = 2 * doping + 5;
    Mob.dropXp =5 * doping;
    drawSercher();
    int random = rand() % 100 + 1;
    bool isRunning = true;
    int selectedOption = 0;
    int temp = 0;
    vector<string> options = {};

    if (user.level <= 1) {
        options = { "ШАР ОГНЯ  DAM:1  MP:-5",
        "НЕИЗУЧЕННО",
        "НЕИЗУЧЕННО",
        "НЕИЗУЧЕННО",
        "НЕИЗУЧЕННО",
        "НЕИЗУЧЕННО",
        "НЕИЗУЧЕННО",
        "НЕИЗУЧЕННО",
        "НЕИЗУЧЕННО",
        "ВЫСАСЫВАНИЕ МАНЫ  MP:+10",
        "Зелье Востановления Здоровья",
        "Зелье Востановления Маны",
        "Зелье Востановления Всего" };
        temp = options.size();
    }
    else if (user.level == 2){
        options = {"ШАР ОГНЯ  DAM:1  MP:-5",
        "УДАР МОЛНИИ  DAM:2  MP:-20",
        "НЕИЗУЧЕННО",
        "НЕИЗУЧЕННО",
        "НЕИЗУЧЕННО",
        "НЕИЗУЧЕННО",
        "НЕИЗУЧЕННО",
        "НЕИЗУЧЕННО",
        "НЕИЗУЧЕННО",
        "ВЫСАСЫВАНИЕ МАНЫ  MP:+20",
        "Зелье Востановления Здоровья",
        "Зелье Востановления Маны",
        "Зелье Востановления Всего"};
        temp = options.size();
    }
    else if (user.level == 3) {
        options = { "ШАР ОГНЯ  DAM:1  MP:-5",
        "УДАР МОЛНИИ  DAM:2  MP:-20",
        "БЛАГОСЛОВЛЕНИЕ  HIL:20  MP:-30",
        "НЕИЗУЧЕННО",
        "НЕИЗУЧЕННО",
        "НЕИЗУЧЕННО",
        "НЕИЗУЧЕННО",
        "НЕИЗУЧЕННО",
        "НЕИЗУЧЕННО",
        "ВЫСАСЫВАНИЕ МАНЫ  MP:+30",
        "Зелье Востановления Здоровья",
        "Зелье Востановления Маны",
        "Зелье Востановления Всего" };
        temp = options.size();
    }
    else if (user.level == 4) {
        options = { "ШАР ОГНЯ  DAM:1  MP:-5",
        "УДАР МОЛНИИ  DAM:2  MP:-20",
        "БЛАГОСЛОВЛЕНИЕ  HIL:20  MP:-30",
        "ЭФИРНАЯ БРОНЯ  ARM:1  MP:-30",
        "НЕИЗУЧЕННО",
        "НЕИЗУЧЕННО",
        "НЕИЗУЧЕННО",
        "НЕИЗУЧЕННО",
        "НЕИЗУЧЕННО",
        "ВЫСАСЫВАНИЕ МАНЫ  MP:+40",
        "Зелье Востановления Здоровья",
        "Зелье Востановления Маны",
        "Зелье Востановления Всего" };
        temp = options.size();
    }
    else if (user.level == 5) {
        options = { "ШАР ОГНЯ  DAM:1  MP:-5",
        "УДАР МОЛНИИ  DAM:2  MP:-20",
        "БЛАГОСЛОВЛЕНИЕ  HIL:20  MP:-30",
        "ЭФИРНАЯ БРОНЯ  ARM:1  MP:-30",
        "ТЕНЕВОЙ ШИП  DAM:5  MP:-100",
        "НЕИЗУЧЕННО",
        "НЕИЗУЧЕННО",
        "НЕИЗУЧЕННО",
        "НЕИЗУЧЕННО",
        "ВЫСАСЫВАНИЕ МАНЫ  MP:+50",
        "Зелье Востановления Здоровья",
        "Зелье Востановления Маны",
        "Зелье Востановления Всего" };
        temp = options.size();
    }
    else if (user.level == 6) {
        options = { "ШАР ОГНЯ  DAM:1  MP:-5",
        "УДАР МОЛНИИ  DAM:2  MP:-20",
        "БЛАГОСЛОВЛЕНИЕ  HIL:20  MP:-30",
        "ЭФИРНАЯ БРОНЯ  ARM:1  MP:-30",
        "ТЕНЕВОЙ ШИП  DAM:5  MP:-100",
        "ITSWENSDEYMYDUDS  KWA:100  HP:-20",
        "НЕИЗУЧЕННО",
        "НЕИЗУЧЕННО",
        "НЕИЗУЧЕННО",
        "ВЫСАСЫВАНИЕ МАНЫ  MP:+60",
        "Зелье Востановления Здоровья",
        "Зелье Востановления Маны",
        "Зелье Востановления Всего" };
        temp = options.size();
    }
    else if (user.level == 7) {
        options = { "ШАР ОГНЯ  DAM:1  MP:-5",
        "УДАР МОЛНИИ  DAM:2  MP:-20",
        "БЛАГОСЛОВЛЕНИЕ  HIL:20  MP:-30",
        "ЭФИРНАЯ БРОНЯ  ARM:1  MP:-30",
        "ТЕНЕВОЙ ШИП  DAM:5  MP:-100",
        "ITSWENSDEYMYDUDS  KWA:100  HP:-20",
        "12 ОГНЕЙ  HIL:200  MP:-100",
        "НЕИЗУЧЕННО",
        "НЕИЗУЧЕННО",
        "ВЫСАСЫВАНИЕ МАНЫ  MP:+70",
        "Зелье Востановления Здоровья",
        "Зелье Востановления Маны",
        "Зелье Востановления Всего" };
        temp = options.size();
    }
    else if (user.level == 8) {
        options = { "ШАР ОГНЯ  DAM:1  MP:-5",
                            "УДАР МОЛНИИ  DAM:2  MP:-20",
                            "БЛАГОСЛОВЛЕНИЕ  HIL:20  MP:-30",
                            "ЭФИРНАЯ БРОНЯ  ARM:1  MP:-30",
                            "ТЕНЕВОЙ ШИП  DAM:5  MP:-100",
                            "ITSWENSDEYMYDUDS  KWA:100  HP:-20",
                            "12 ОГНЕЙ  HIL:200  MP:-100",
                            "НЕБЕСНАЯ КАКА  DAM:10  MP:-200",
                            "НЕИЗУЧЕННО",
                            "ВОСТАНОВЛЕНИЕ МАНЫ  MP:+80",
        "Зелье Востановления Здоровья",
        "Зелье Востановления Маны",
        "Зелье Востановления Всего" };
        temp = options.size();
    }
    else if (user.level == 9) {
        options = { "ШАР ОГНЯ  DAM:1  MP:-5",
                            "УДАР МОЛНИИ  DAM:2  MP:-20",
                            "БЛАГОСЛОВЛЕНИЕ  HIL:20  MP:-30",
                            "ЭФИРНАЯ БРОНЯ  ARM:1  MP:-30",
                            "ТЕНЕВОЙ ШИП  DAM:5  MP:-100",
                            "ITSWENSDEYMYDUDS  KWA:100  HP:-20",
                            "12 ОГНЕЙ  HIL:200  MP:-100",
                            "НЕБЕСНАЯ КАКА  DAM:10  MP:-200",
                            "ГАСТЕРБЛАСТ  DAM:66  MP:-333",
                            "ВОСТАНОВЛЕНИЕ МАНЫ  MP:+90",
        "Зелье Востановления Здоровья",
        "Зелье Востановления Маны",
        "Зелье Востановления Всего" };
        temp = options.size();
    }
    else if (user.level >= 10) {
        options = { "ШАР ОГНЯ  DAM:1  MP:-5",
                  "УДАР МОЛНИИ  DAM:2  MP:-20",
                  "БЛАГОСЛОВЛЕНИЕ  HIL:20  MP:-30",
                  "ЭФИРНАЯ БРОНЯ  ARM:1  MP:-30",
                  "ТЕНЕВОЙ ШИП  DAM:5  MP:-100",
                  "ITSWENSDEYMYDUDS  KWA:100  HP:-20",
                  "12 ОГНЕЙ  HIL:200  MP:-100",
                  "НЕБЕСНАЯ КАКА  DAM:10  MP:-200",
                  "ГАСТЕРБЛАСТ  DAM:66  MP:-333",
                  "ВЫСАСЫВАНИЕ МАНЫ  DAM:100  MP:+100",
        "Зелье Востановления Здоровья",
        "Зелье Востановления Маны",
        "Зелье Востановления Всего" };
        temp = options.size();
    }

    while (isRunning) {
        int mobdam = rand() % Mob.maxdamage + Mob.mindamage;
        system("CLS");
        if (user.health <= 0) {
            isRunning = false;
            drawLose();
            this_thread::sleep_for(late);
            break;
        }
        else if (Mob.health <= 0) {
            isRunning = false;
            drawWin();
            user.xp += Mob.dropXp;
            user.gold += Mob.dropGold;
            cout << "                  Вы получили " << Mob.dropGold << " монет и "
                << Mob.dropXp << " опыта" << endl;
            this_thread::sleep_for(late);
            break;
        }
        if (random <= 25) {
            drawBat();
        }
        else if (random > 25 and random <= 50) {
            drawOwl();
        }
        else if (random > 50 and random <= 75) {
            drawBear();
        }
        else if (random > 75 and random <= 100) {
            drawSpider();
        }
        cout << "    ЗДОАРОВЬЕ: " << Mob.health << endl;
        cout << endl;
        drawChibiPlayer();
        cout << endl;
        StatDisplayPlayer(user);
        cout << endl;
        cout << "Выберите действие: \n";


        for (int i = 0; i < temp; i++) {
            if (i == selectedOption) {
                cout << "\033[1;33m> " << options[i] << "\033[0m" << endl;
            }
            else {
                cout << "  " << options[i] << endl;
            }
        }

        int key = _getch();

        
        switch (key) {
            case 72:
                selectedOption = (selectedOption - 1 + temp) % temp;
                break;
            case 80:
                selectedOption = (selectedOption + 1) % temp;
                break;
            case 13:
                if (selectedOption == 0) {
                    if (user.mana >= 5) {
                        user.mana -= 5;
                        if (Mob.defend <= user.damage) {
                            Mob.health -= user.damage - Mob.defend;
                        }
                        else {
                            Mob.health--;
                        }
                    }
                }
                else if (selectedOption == 1) {
                    if (user.level >= 2) {
                        if (user.mana >= 20) {
                            user.mana -= 20;
                            if (Mob.defend <= user.damage) {
                                Mob.health -= user.damage * 2 - Mob.defend;
                            }
                            else {
                                Mob.health--;
                            }
                        }
                    }
                }
                else if (selectedOption == 2) {
                    if (user.level >= 3) {
                        if (user.mana >= 30) {
                            user.mana -= 30;
                            user.health += 20;
                            if (user.health > user.MaxHelth) {
                                user.health = user.MaxHelth;
                            }
                        }
                    }
                }
                else if (selectedOption == 3) {
                    if (user.level >= 4) {
                        if (user.mana >= 30) {
                            user.mana -= 30;
                            user.Armor += 1;
                        }
                    }
                }
                else if (selectedOption == 4) {
                    if (user.level >= 5) {
                        if (user.mana >= 100) {
                            user.mana -= 100;
                            if (Mob.defend <= user.damage) {
                                Mob.health -= user.damage * 5 - Mob.defend;
                            }
                            else {
                                Mob.health--;
                            }
                        }
                    }
                }
                else if (selectedOption == 5) {
                    if (user.level >= 6) {
                        if (user.health >= 21) {
                            user.health -= 20;
                            Mob.health -= 100;
                        }
                    }
                }
                else if (selectedOption == 6) {
                    if (user.level >= 7) {
                        if (user.mana >= 100) {
                            user.mana -= 100;
                            user.health += 200;
                            if (user.health > user.MaxHelth) {
                                user.health = user.MaxHelth;
                            }
                        }
                    }
                }
                else if (selectedOption == 7) {
                    if (user.level >= 8) {
                        if (user.mana >= 200) {
                            user.mana -= 200;
                            if (Mob.defend <= user.damage) {
                                Mob.health -= user.damage * 10 - Mob.defend;
                            }
                            else {
                                Mob.health--;
                            }
                        }
                    }
                }
                else if (selectedOption == 8) {
                    if (user.level >= 9) {
                        if (user.mana >= 333) {
                            user.mana -= 333;
                            Mob.health -= 666;
                        }
                    }
                }
                else if (selectedOption == 9) {
                    if (user.level == 1) {
                        user.mana += 10;
                        if (user.mana > user.MaxMana) {
                            user.mana = user.MaxMana;
                        }
                    }
                    else if (user.level == 2) {
                        user.mana += 20;
                        if (user.mana > user.MaxMana) {
                            user.mana = user.MaxMana;
                        }
                    }
                    else if (user.level == 3) {
                        user.mana += 30;
                        if (user.mana > user.MaxMana) {
                            user.mana = user.MaxMana;
                        }
                    }
                    else if (user.level == 4) {
                        user.mana += 40;
                        if (user.mana > user.MaxMana) {
                            user.mana = user.MaxMana;
                        }
                    }
                    else if (user.level == 5) {
                        user.mana += 50;
                        if (user.mana > user.MaxMana) {
                            user.mana = user.MaxMana;
                        }
                    }
                    else if (user.level == 6) {
                        user.mana += 60;
                        if (user.mana > user.MaxMana) {
                            user.mana = user.MaxMana;
                        }
                    }
                    else if (user.level == 7) {
                        user.mana += 70;
                        if (user.mana > user.MaxMana) {
                            user.mana = user.MaxMana;
                        }
                    }
                    else if (user.level == 8) {
                        user.mana += 80;
                        if (user.mana > user.MaxMana) {
                            user.mana = user.MaxMana;
                        }
                    }
                    else if (user.level == 9) {
                        user.mana += 90;
                        if (user.mana > user.MaxMana) {
                            user.mana = user.MaxMana;
                        }
                    }
                    else if (user.level >= 10) {
                        user.mana += 100;
                        Mob.health -= 100;
                        if (user.mana > user.MaxMana) {
                            user.mana = user.MaxMana;
                        }
                    }
                }
                else if (selectedOption == 10) {
                    if (idHp > 0) {
                        idHp --;
                        user.health += 100;
                        if (user.health > user.MaxHelth) {
                            user.health = user.MaxHelth;
                        }
                    }
                }
                else if (selectedOption == 11) {
                    if (idMp > 0) {
                        idMp --;
                        user.mana += 100;
                        if (user.mana > user.MaxMana) {
                            user.mana = user.MaxMana;
                        }
                    }
                }
                else if (selectedOption == 12) {
                    if (idHpMp > 0) {
                        idHpMp --;
                        user.health += 100;
                        user.mana += 100;
                        if (user.health > user.MaxHelth) {
                            user.health = user.MaxHelth;
                        }
                        if (user.mana > user.MaxMana) {
                            user.mana = user.MaxMana;
                        }
                    }
                }

                if (user.Armor >= mobdam) {
                    user.health--;
                }
                else {
                    user.health -= mobdam - user.Armor;
                }
                break;
        }
    }
}
void ButtleBoss(Player& user) {
    srand(time(NULL));
    chrono::milliseconds late(1500);
    Boss Dragon;
    drawSercher();
    int selectedOption = 0;
    int temp = 0;
    vector<string> options = {};
    if (user.level <= 1) {
        options = { "ШАР ОГНЯ  DAM:1  MP:-5",
        "НЕИЗУЧЕННО",
        "НЕИЗУЧЕННО",
        "НЕИЗУЧЕННО",
        "НЕИЗУЧЕННО",
        "НЕИЗУЧЕННО",
        "НЕИЗУЧЕННО",
        "НЕИЗУЧЕННО",
        "НЕИЗУЧЕННО",
        "ВЫСАСЫВАНИЕ МАНЫ  MP:+10",
        "Зелье Востановления Здоровья",
        "Зелье Востановления Маны",
        "Зелье Востановления Всего" };
        temp = options.size();
    }
    else if (user.level == 2) {
        options = { "ШАР ОГНЯ  DAM:1  MP:-5",
        "УДАР МОЛНИИ  DAM:2  MP:-20",
        "НЕИЗУЧЕННО",
        "НЕИЗУЧЕННО",
        "НЕИЗУЧЕННО",
        "НЕИЗУЧЕННО",
        "НЕИЗУЧЕННО",
        "НЕИЗУЧЕННО",
        "НЕИЗУЧЕННО",
        "ВЫСАСЫВАНИЕ МАНЫ  MP:+20",
        "Зелье Востановления Здоровья",
        "Зелье Востановления Маны",
        "Зелье Востановления Всего" };
        temp = options.size();
    }
    else if (user.level == 3) {
        options = { "ШАР ОГНЯ  DAM:1  MP:-5",
        "УДАР МОЛНИИ  DAM:2  MP:-20",
        "БЛАГОСЛОВЛЕНИЕ  HIL:20  MP:-30",
        "НЕИЗУЧЕННО",
        "НЕИЗУЧЕННО",
        "НЕИЗУЧЕННО",
        "НЕИЗУЧЕННО",
        "НЕИЗУЧЕННО",
        "НЕИЗУЧЕННО",
        "ВЫСАСЫВАНИЕ МАНЫ  MP:+30",
        "Зелье Востановления Здоровья",
        "Зелье Востановления Маны",
        "Зелье Востановления Всего" };
        temp = options.size();
    }
    else if (user.level == 4) {
        options = { "ШАР ОГНЯ  DAM:1  MP:-5",
        "УДАР МОЛНИИ  DAM:2  MP:-20",
        "БЛАГОСЛОВЛЕНИЕ  HIL:20  MP:-30",
        "ЭФИРНАЯ БРОНЯ  ARM:1  MP:-30",
        "НЕИЗУЧЕННО",
        "НЕИЗУЧЕННО",
        "НЕИЗУЧЕННО",
        "НЕИЗУЧЕННО",
        "НЕИЗУЧЕННО",
        "ВЫСАСЫВАНИЕ МАНЫ  MP:+40",
        "Зелье Востановления Здоровья",
        "Зелье Востановления Маны",
        "Зелье Востановления Всего" };
        temp = options.size();
    }
    else if (user.level == 5) {
        options = { "ШАР ОГНЯ  DAM:1  MP:-5",
        "УДАР МОЛНИИ  DAM:2  MP:-20",
        "БЛАГОСЛОВЛЕНИЕ  HIL:20  MP:-30",
        "ЭФИРНАЯ БРОНЯ  ARM:1  MP:-30",
        "ТЕНЕВОЙ ШИП  DAM:5  MP:-100",
        "НЕИЗУЧЕННО",
        "НЕИЗУЧЕННО",
        "НЕИЗУЧЕННО",
        "НЕИЗУЧЕННО",
        "ВЫСАСЫВАНИЕ МАНЫ  MP:+50",
        "Зелье Востановления Здоровья",
        "Зелье Востановления Маны",
        "Зелье Востановления Всего" };
        temp = options.size();
    }
    else if (user.level == 6) {
        options = { "ШАР ОГНЯ  DAM:1  MP:-5",
        "УДАР МОЛНИИ  DAM:2  MP:-20",
        "БЛАГОСЛОВЛЕНИЕ  HIL:20  MP:-30",
        "ЭФИРНАЯ БРОНЯ  ARM:1  MP:-30",
        "ТЕНЕВОЙ ШИП  DAM:5  MP:-100",
        "ITSWENSDEYMYDUDS  KWA:100  HP:-20",
        "НЕИЗУЧЕННО",
        "НЕИЗУЧЕННО",
        "НЕИЗУЧЕННО",
        "ВЫСАСЫВАНИЕ МАНЫ  MP:+60",
        "Зелье Востановления Здоровья",
        "Зелье Востановления Маны",
        "Зелье Востановления Всего" };
        temp = options.size();
    }
    else if (user.level == 7) {
        options = { "ШАР ОГНЯ  DAM:1  MP:-5",
        "УДАР МОЛНИИ  DAM:2  MP:-20",
        "БЛАГОСЛОВЛЕНИЕ  HIL:20  MP:-30",
        "ЭФИРНАЯ БРОНЯ  ARM:1  MP:-30",
        "ТЕНЕВОЙ ШИП  DAM:5  MP:-100",
        "ITSWENSDEYMYDUDS  KWA:100  HP:-20",
        "12 ОГНЕЙ  HIL:200  MP:-100",
        "НЕИЗУЧЕННО",
        "НЕИЗУЧЕННО",
        "ВЫСАСЫВАНИЕ МАНЫ  MP:+70",
        "Зелье Востановления Здоровья",
        "Зелье Востановления Маны",
        "Зелье Востановления Всего" };
        temp = options.size();
    }
    else if (user.level == 8) {
        options = { "ШАР ОГНЯ  DAM:1  MP:-5",
                            "УДАР МОЛНИИ  DAM:2  MP:-20",
                            "БЛАГОСЛОВЛЕНИЕ  HIL:20  MP:-30",
                            "ЭФИРНАЯ БРОНЯ  ARM:1  MP:-30",
                            "ТЕНЕВОЙ ШИП  DAM:5  MP:-100",
                            "ITSWENSDEYMYDUDS  KWA:100  HP:-20",
                            "12 ОГНЕЙ  HIL:200  MP:-100",
                            "НЕБЕСНАЯ КАКА  DAM:10  MP:-200",
                            "НЕИЗУЧЕННО",
                            "ВОСТАНОВЛЕНИЕ МАНЫ  MP:+80",
        "Зелье Востановления Здоровья",
        "Зелье Востановления Маны",
        "Зелье Востановления Всего" };
        temp = options.size();
    }
    else if (user.level == 9) {
        options = { "ШАР ОГНЯ  DAM:1  MP:-5",
                            "УДАР МОЛНИИ  DAM:2  MP:-20",
                            "БЛАГОСЛОВЛЕНИЕ  HIL:20  MP:-30",
                            "ЭФИРНАЯ БРОНЯ  ARM:1  MP:-30",
                            "ТЕНЕВОЙ ШИП  DAM:5  MP:-100",
                            "ITSWENSDEYMYDUDS  KWA:100  HP:-20",
                            "12 ОГНЕЙ  HIL:200  MP:-100",
                            "НЕБЕСНАЯ КАКА  DAM:10  MP:-200",
                            "ГАСТЕРБЛАСТ  DAM:66  MP:-333",
                            "ВОСТАНОВЛЕНИЕ МАНЫ  MP:+90",
        "Зелье Востановления Здоровья",
        "Зелье Востановления Маны",
        "Зелье Востановления Всего" };
        temp = options.size();
    }
    else if (user.level >= 10) {
        options = { "ШАР ОГНЯ  DAM:1  MP:-5",
                  "УДАР МОЛНИИ  DAM:2  MP:-20",
                  "БЛАГОСЛОВЛЕНИЕ  HIL:20  MP:-30",
                  "ЭФИРНАЯ БРОНЯ  ARM:1  MP:-30",
                  "ТЕНЕВОЙ ШИП  DAM:5  MP:-100",
                  "ITSWENSDEYMYDUDS  KWA:100  HP:-20",
                  "12 ОГНЕЙ  HIL:200  MP:-100",
                  "НЕБЕСНАЯ КАКА  DAM:10  MP:-200",
                  "ГАСТЕРБЛАСТ  DAM:66  MP:-333",
                  "ВЫСАСЫВАНИЕ МАНЫ  DAM:100  MP:+100",
        "Зелье Востановления Здоровья",
        "Зелье Востановления Маны",
        "Зелье Востановления Всего" };
        temp = options.size();
    }
    bool isRunning = true;
    while (isRunning) {
        int mobdam = rand() % Dragon.maxdamage + Dragon.mindamage;
        system("CLS");
        drawBoss();
        if (user.health <= 0) {
            isRunning = false;
            drawLose();
            this_thread::sleep_for(late);
            break;
        }
        else if (Dragon.health <= 0) {
            isRunning = false;
            drawWin();
            user.xp += Dragon.dropXp;
            user.gold += Dragon.dropGold;
            cout << "                  Вы получили " << Dragon.dropGold << " монет и "
                << Dragon.dropXp << " опыта" << endl;
            this_thread::sleep_for(late);
            break;
        }
        cout << "    ЗДОАРОВЬЕ: " << Dragon.health << endl;
        cout << endl;
        drawChibiPlayer();
        cout << endl;
        StatDisplayPlayer(user);
        cout << endl;
        cout << "Выберите действие: \n";
        for (int i = 0; i < temp; i++) {
            if (i == selectedOption) {
                cout << "\033[1;33m> " << options[i] << "\033[0m" << endl;
            }
            else {
                cout << "  " << options[i] << endl;
            }
        }
        int key = _getch();
        switch (key) {
        case 72:
            selectedOption = (selectedOption - 1 + temp) % temp;
            break;
        case 80:
            selectedOption = (selectedOption + 1) % temp;
            break;
        case 13:
            if (selectedOption == 0) {
                if (user.mana >= 5) {
                    user.mana -= 5;
                    if (Dragon.defend <= user.damage) {
                        Dragon.health -= user.damage - Dragon.defend;
                    }
                    else {
                        Dragon.health--;
                    }
                }
            }
            else if (selectedOption == 1) {
                if (user.level >= 2) {
                    if (user.mana >= 20) {
                        user.mana -= 20;
                        if (Dragon.defend <= user.damage) {
                            Dragon.health -= user.damage * 2 - Dragon.defend;
                        }
                        else {
                            Dragon.health--;
                        }
                    }
                }
            }
            else if (selectedOption == 2) {
                if (user.level >= 3) {
                    if (user.mana >= 30) {
                        user.mana -= 30;
                        user.health += 20;
                        if (user.health > user.MaxHelth) {
                            user.health = user.MaxHelth;
                        }
                    }
                }
            }
            else if (selectedOption == 3) {
                if (user.level >= 4) {
                    if (user.mana >= 30) {
                        user.mana -= 30;
                        user.Armor += 1;
                    }
                }
            }
            else if (selectedOption == 4) {
                if (user.level >= 5) {
                    if (user.mana >= 100) {
                        user.mana -= 100;
                        if (Dragon.defend <= user.damage) {
                            Dragon.health -= user.damage * 5 - Dragon.defend;
                        }
                        else {
                            Dragon.health--;
                        }
                    }
                }
            }
            else if (selectedOption == 5) {
                if (user.level >= 6) {
                    if (user.health >= 21) {
                        user.health -= 20;
                        Dragon.health -= 100;
                    }
                }
            }
            else if (selectedOption == 6) {
                if (user.level >= 7) {
                    if (user.mana >= 100) {
                        user.mana -= 100;
                        user.health += 200;
                        if (user.health > user.MaxHelth) {
                            user.health = user.MaxHelth;
                        }
                    }
                }
            }
            else if (selectedOption == 7) {
                if (user.level >= 8) {
                    if (user.mana >= 200) {
                        user.mana -= 200;
                        if (Dragon.defend <= user.damage) {
                            Dragon.health -= user.damage * 10 - Dragon.defend;
                        }
                        else {
                            Dragon.health--;
                        }
                    }
                }
            }
            else if (selectedOption == 8) {
                if (user.level >= 9) {
                    if (user.mana >= 333) {
                        user.mana -= 333;
                        Dragon.health -= 666;
                    }
                }
            }
            else if (selectedOption == 9) {
                if (user.level == 1) {
                    user.mana += 10;
                    if (user.mana > user.MaxMana) {
                        user.mana = user.MaxMana;
                    }
                }
                else if (user.level == 2) {
                    user.mana += 20;
                    if (user.mana > user.MaxMana) {
                        user.mana = user.MaxMana;
                    }
                }
                else if (user.level == 3) {
                    user.mana += 30;
                    if (user.mana > user.MaxMana) {
                        user.mana = user.MaxMana;
                    }
                }
                else if (user.level == 4) {
                    user.mana += 40;
                    if (user.mana > user.MaxMana) {
                        user.mana = user.MaxMana;
                    }
                }
                else if (user.level == 5) {
                    user.mana += 50;
                    if (user.mana > user.MaxMana) {
                        user.mana = user.MaxMana;
                    }
                }
                else if (user.level == 6) {
                    user.mana += 60;
                    if (user.mana > user.MaxMana) {
                        user.mana = user.MaxMana;
                    }
                }
                else if (user.level == 7) {
                    user.mana += 70;
                    if (user.mana > user.MaxMana) {
                        user.mana = user.MaxMana;
                    }
                }
                else if (user.level == 8) {
                    user.mana += 80;
                    if (user.mana > user.MaxMana) {
                        user.mana = user.MaxMana;
                    }
                }
                else if (user.level == 9) {
                    user.mana += 90;
                    if (user.mana > user.MaxMana) {
                        user.mana = user.MaxMana;
                    }
                }
                else if (user.level >= 10) {
                    user.mana += 100;
                    Dragon.health -= 100;
                    if (user.mana > user.MaxMana) {
                        user.mana = user.MaxMana;
                    }
                }
            }
            else if (selectedOption == 10) {
                if (idHp > 0) {
                    idHp--;
                    user.health += 100;
                    if (user.health > user.MaxHelth) {
                        user.health = user.MaxHelth;
                    }
                }
                }
            else if (selectedOption == 11) {
                    if (idMp > 0) {
                        idMp--;
                        user.mana += 100;
                        if (user.mana > user.MaxMana) {
                            user.mana = user.MaxMana;
                        }
                    }
                    }
            else if (selectedOption == 12) {
                        if (idHpMp > 0) {
                            idHpMp--;
                            user.health += 100;
                            user.mana += 100;
                            if (user.health > user.MaxHelth) {
                                user.health = user.MaxHelth;
                            }
                            if (user.mana > user.MaxMana) {
                                user.mana = user.MaxMana;
                            }
                        }
                        }

            if (user.Armor >= mobdam) {
                user.health--;
            }
            else {
                user.health -= mobdam - user.Armor;
            }
        }
    }
}
void EnterMob(Player& user) {
    int selectedOption = 0;
    bool isRunning = true;
    while (isRunning) {
        user.Armor = user.MaxArmor;
        user.health = user.MaxHelth;
        user.mana = user.MaxMana;
        string options[] = { "Уровень 1",
                            "Уровень 2",
                            "Уровень 3",
                            "Уровень 4",
                            "Уровень 5",
                            "Уровень 6",
                            "Уровень 7",
                            "Уровень 8",
                            "Уровень 9",
                            "Boss",
                            "Выйти" };
        int numOptions = sizeof(options) / sizeof(options[0]);
        cout << "\x1B[2J\x1B[H";
        drawChibiPlayer();
        cout << "Выберите врага: \n";
        for (int i = 0; i < numOptions; i++) {
            if (i == selectedOption) {
                cout << "\033[1;33m> " << options[i] << "\033[0m" << endl;
            }
            else {
                cout << "  " << options[i] << endl;
            }
        }
        int key = _getch();
        switch (key) {
        case 72:
            selectedOption = (selectedOption - 1 + numOptions) % numOptions;
            break;
        case 80:
            selectedOption = (selectedOption + 1) % numOptions;
            break;
        case 13:
            if (selectedOption == 0) {
                ButtleMob(user, 1);
            }
            else if (selectedOption == 1) {
                ButtleMob(user, 2);
            }
            else if (selectedOption == 2) {
                ButtleMob(user, 3);
            }
            else if (selectedOption == 3) {
                ButtleMob(user, 4);
            }
            else if (selectedOption == 4) {
                ButtleMob(user, 5);
            }
            else if (selectedOption == 5) {
                ButtleMob(user, 6);
            }
            else if (selectedOption == 6) {
                ButtleMob(user, 7);
            }
            else if (selectedOption == 7) {
                ButtleMob(user, 8);
            }
            else if (selectedOption == 8) {
                ButtleMob(user, 9);
            }
            else if (selectedOption == 9) {
                ButtleBoss(user);
            }
            else if (selectedOption == 10) {
                isRunning = false;
                cout << "\x1B[2J\x1B[H";
                break;
            }

        default:
            cout << "\x1B[2J\x1B[H";
        }
    }
}

// все про уровень
void CodeUP(Player& user) {
    int selectedOption = 0;
    string options[] = { "Урон + 1", "Мана + 10", "Здоровье + 5", "Защита + 1", "Выйти" };
    int numOptions = sizeof(options) / sizeof(options[0]);
    bool isRunning = true;
    while (isRunning) {
        system("CLS");
        drawChibiPlayer();
        StatDisplayPlayer(user);
        cout << "Выберите действие: \n";
        for (int i = 0; i < numOptions; i++) {
            if (i == selectedOption) {
                cout << "\033[1;33m> " << options[i] << "\033[0m" << endl;
            }
            else {
                cout << "  " << options[i] << endl;
            }
        }

        int key = _getch();
        switch (key) {
        case 72:
            selectedOption = (selectedOption - 1 + numOptions) % numOptions;
            break;
        case 80:
            selectedOption = (selectedOption + 1) % numOptions;
            break;
        case 13:
            if (selectedOption == 0) {
                if (user.PointUP > 0) {
                    user.damage++;
                    user.PointUP--;
                }
            }
            else if (selectedOption == 1) {
                if (user.PointUP > 0) {
                    user.MaxMana += 10;
                    user.PointUP--;
                }
            }
            else if (selectedOption == 2) {
                if (user.PointUP > 0) {
                    user.MaxHelth += 5;
                    user.PointUP--;
                }
            }
            else if (selectedOption == 3) {
                if (user.PointUP > 0) {
                    user.MaxArmor++;
                    user.PointUP--;
                }
            }
            else if (selectedOption == 4) {
                isRunning = false;
                system("CLS");
                break;
            }

        default:
            system("CLS");
        }
    }
}
void levelUp(Player& user) {
    if (user.xp >= user.nextLevelXp) {
        user.level++;
        user.PointUP += 3;
        user.xp -= user.nextLevelXp;
    }
}

int main() {

    setlocale(LC_ALL, "Russian");

    Player user;
    user.level = 1;
    user.PointUP = 3;
    user.nextLevelXp = user.level * 25;
    user.xp = 0;
    user.MaxHelth = 30;
    user.health = user.MaxHelth;
    user.MaxMana = 50;
    user.mana = user.MaxMana;
    user.MaxArmor = 3;
    user.Armor = user.MaxArmor;
    user.gold = 300;
    user.damage = 10;

    int selectedOption = 0;
    string options[] = { "Отправиться драться", "Магазин", "Прокачка характеристик", "Повысить уровень","Рюкзак" };
    int numOptions = sizeof(options) / sizeof(options[0]);

    while (true) {
        system("CLS");
        drawPlayer();
        StatDisplayPlayer(user);
        cout << "Выберите действие: \n";
        for (int i = 0; i < numOptions; i++) {
            if (i == selectedOption) {
                cout << "\033[1;33m> " << options[i] << "\033[0m" << endl;
            }
            else {
                cout << "  " << options[i] << endl;
            }
        }

        int key = _getch();
        switch (key) {
        case 72:
            selectedOption = (selectedOption - 1 + numOptions) % numOptions;
            break;
        case 80:
            selectedOption = (selectedOption + 1) % numOptions;
            break;
        case 13:
            if (selectedOption == 0) {
                EnterMob(user);
            }
            else if (selectedOption == 1) {
                CodeMagaz(user);
            }
            else if (selectedOption == 2) {
                CodeUP(user);
            }
            else if (selectedOption == 3) {
                levelUp(user);
            }
            else if (selectedOption == 4) {
                CodeInventoary();
            }
        default:
            system("CLS");
        }
    }

    return 0;
}