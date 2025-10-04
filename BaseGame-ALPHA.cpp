// ПРИМЕЧАНИЕ: КОД СЛЕДУЕТ ЗАПУСКАТЬ НА САЙТЕ replit.com

#include <chrono>
#include <iostream>
#include <string>
#include <termios.h>
#include <thread>
#include <unistd.h>
#include <vector>
using namespace std;
// vector<int> ttm;
// cout << "\x1B[2J\x1B[H";
int SQR = 39;
std::chrono::milliseconds stop(250);
int getch() {
 struct termios oldt, newt;
 int ch;
 tcgetattr(STDIN_FILENO, &oldt);
 newt = oldt;
 newt.c_lflag &= ~(ICANON | ECHO);
 tcsetattr(STDIN_FILENO, TCSANOW, &newt);
 ch = getchar();
 tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
 return ch;
}


// can work
// ⬛️
// ⬜️
// 🟥
// 🟧
// 🟨
// 🟩
// 🟦
// 🟪
// 🟫

void def_win_user(){
 cout << "\x1B[2J\x1B[H";
 string user_win[27][27] = {
   {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},
   {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},
   {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},
   {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},
   {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬛️","⬜️","⬛️","⬜️","⬜️","⬛️","⬜️","⬜️","⬛️","⬜️","⬛️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},
   {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬛️","⬜️","⬛️","⬜️","⬛️","⬜️","⬛️","⬜️","⬛️","⬜️","⬛️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},
   {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬛️","⬛️","⬛️","⬜️","⬛️","⬜️","⬛️","⬜️","⬛️","⬜️","⬛️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},
   {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬛️","⬜️","⬜️","⬛️","⬜️","⬛️","⬜️","⬛️","⬜️","⬛️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},
   {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬛️","⬜️","⬜️","⬛️","⬜️","⬛️","⬜️","⬛️","⬜️","⬛️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},
   {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬛️","⬜️","⬜️","⬜️","⬛️","⬜️","⬜️","⬜️","⬛️","⬛️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},
   {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},
   {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},
   {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},
   {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},
   {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},
   {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬛️","⬜️","⬜️","⬜️","⬛️","⬜️","⬛️","⬛️","⬛️","⬜️","⬛️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},
   {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬛️","⬜️","⬜️","⬜️","⬛️","⬜️","⬜️","⬛️","⬜️","⬜️","⬛️","⬛️","⬛️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},
   {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬛️","⬜️","⬛️","⬜️","⬛️","⬜️","⬜️","⬛️","⬜️","⬜️","⬛️","⬜️","⬛️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},
   {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬛️","⬜️","⬛️","⬜️","⬛️","⬜️","⬜️","⬛️","⬜️","⬜️","⬛️","⬜️","⬛️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},
   {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬛️","⬜️","⬛️","⬜️","⬜️","⬛️","⬛️","⬛️","⬜️","⬛️","⬜️","⬛️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},
   {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},
   {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},
   {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},
   {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},
   {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},
   {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},
   {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"}};

 for(int i = 0; i < 27; i++){
   for(int j = 0; j < 27; j++){
     cout << user_win[i][j];
   }
   std::this_thread::sleep_for(stop);
   cout<<endl;
 }
  exit(0);
}

void LEVEV_1(){
  cout << "\x1B[2J\x1B[H";
 string level_1[39][39] = {
 // 1    2    3     4    5    6     7    8    9    10   11   12    13   14   15   16    17   18   19   20    21   22   23    24   25   26   27    28   29   30    31   32   33   34    35   36   37   38    39
 {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},//1
 {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},//2
 {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},//3
 {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},//4
 {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},//5
 {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},//6
 {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},//7
 {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},//8
 {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},//9
 {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},//10
 {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},//11
 {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},//12
 {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},//13
 {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},//14
 {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},//15
 {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},//16
 {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},//17
 {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},//18
 {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},//19
 {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},//20
 {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},//21
 {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},//22
 {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},//23
 {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},//24
 {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},//25
 {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},//26
 {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},//27
 {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},//28
 {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},//29
 {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},//30
 {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},//31
 {"⬜️","🟥","🟥","🟥","🟥","🟥","⬜️","⬜️","⬜️","🟥","🟥","🟥","🟥","🟥","⬜️","⬜️","⬜️","🟥","🟥","🟥","🟥","🟥","⬜️","⬜️","⬜️","🟥","🟥","🟥","🟥","🟥","⬜️","⬜️","⬜️","🟥","🟥","🟥","🟥","🟥","⬜️"},//32
 {"⬜️","🟥","🟪","🟪","🟪","🟥","⬜️","⬜️","⬜️","🟥","🟪","🟪","🟪","🟥","⬜️","⬜️","⬜️","🟥","🟪","🟪","🟪","🟥","⬜️","⬜️","⬜️","🟥","🟪","🟪","🟪","🟥","⬜️","⬜️","⬜️","🟥","🟪","🟪","🟪","🟥","⬜️"},//33
 {"⬜️","🟥","🟪","🟪","🟪","🟥","⬜️","⬜️","⬜️","🟥","🟪","🟪","🟪","🟥","⬜️","⬜️","⬜️","🟥","🟪","🟪","🟪","🟥","⬜️","⬜️","⬜️","🟥","🟪","🟪","🟪","🟥","⬜️","⬜️","⬜️","🟥","🟪","🟪","🟪","🟥","⬜️"},//34
 {"⬜️","🟥","🟪","🟪","🟪","🟥","⬜️","⬜️","⬜️","🟥","🟪","🟪","🟪","🟥","⬜️","⬜️","⬜️","🟥","🟪","🟪","🟪","🟥","⬜️","⬜️","⬜️","🟥","🟪","🟪","🟪","🟥","⬜️","⬜️","⬜️","🟥","🟪","🟪","🟪","🟥","⬜️"},//35
 {"⬜️","🟥","🟥","🟥","🟥","🟥","⬜️","⬜️","⬜️","🟥","🟥","🟥","🟥","🟥","⬜️","⬜️","⬜️","🟥","🟥","🟥","🟥","🟥","⬜️","⬜️","⬜️","🟥","🟥","🟥","🟥","🟥","⬜️","⬜️","⬜️","🟥","🟥","🟥","🟥","🟥","⬜️"},//36
 {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},//37
 {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},//38
 {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"} //39
 };
 int uPiX = 1;
 int uPiY = 1;

 int fPi1X = 1;int fPi2X =9;int fPi3X =17;int fPi4X =25;int fPi5X =33;
 int fPi1Y = 31;int fPi2Y = 31;int fPi3Y = 31;int fPi4Y = 31;int fPi5Y = 31;

 int box1Y = 27;int box2Y = 27;int box3Y = 27;int box4Y = 27;int box5Y = 27;
 int box1X = 2;int box2X = 10;int box3X = 18;int box4X = 26;int box5X = 34;

 bool satBut1,satBut2,satBut3,satBut4,satBut5 = false;
 string mapGame[SQR][SQR];
 bool temprun = true;
 while (temprun) {
   for (int i = 0; i < SQR; i++) {
     for (int j = 0; j < SQR; j++) {
       mapGame[i][j] = level_1[i][j];



       if( ((box1X == fPi1X+1) and (box1Y == fPi1Y+1)) or
          (box2X == fPi1X+1) and (box2Y == fPi1Y+1) or
          (box3X == fPi1X+1) and (box3Y == fPi1Y+1) or
          (box4X == fPi1X+1) and (box4Y == fPi1Y+1) or
          (box5X == fPi1X+1) and (box5Y == fPi1Y+1) ){
         mapGame[fPi1Y][fPi1X] = "🟩";
         mapGame[fPi1Y][fPi1X+1] = "🟩";
         mapGame[fPi1Y][fPi1X+2] = "🟩";
         mapGame[fPi1Y][fPi1X+3] = "🟩";
         mapGame[fPi1Y][fPi1X+4] = "🟩";
         mapGame[fPi1Y+1][fPi1X] = "🟩";
         mapGame[fPi1Y+1][fPi1X+4] = "🟩";
         mapGame[fPi1Y+2][fPi1X] = "🟩";
         mapGame[fPi1Y+2][fPi1X+4] = "🟩";
         mapGame[fPi1Y+3][fPi1X] = "🟩";
         mapGame[fPi1Y+3][fPi1X+4] = "🟩";
         mapGame[fPi1Y+4][fPi1X] = "🟩";
         mapGame[fPi1Y+4][fPi1X+1] = "🟩";
         mapGame[fPi1Y+4][fPi1X+2] = "🟩";
         mapGame[fPi1Y+4][fPi1X+3] = "🟩";
         mapGame[fPi1Y+4][fPi1X+4] = "🟩";
         satBut1 = true;
       }
       else{
         satBut1 = false;
       }

       if(((box1X == fPi2X+1) and (box1Y == fPi2Y+1)) or
        (box2X == fPi2X+1) and (box2Y == fPi2Y+1) or
        (box3X == fPi2X+1) and (box3Y == fPi2Y+1) or
        (box4X == fPi2X+1) and (box4Y == fPi2Y+1) or
        (box5X == fPi2X+1) and (box5Y == fPi2Y+1) ){
       mapGame[fPi2Y][fPi2X] = "🟩";
       mapGame[fPi2Y][fPi2X+1] = "🟩";
       mapGame[fPi2Y][fPi2X+2] = "🟩";
       mapGame[fPi2Y][fPi2X+3] = "🟩";
       mapGame[fPi2Y][fPi2X+4] = "🟩";
       mapGame[fPi2Y+1][fPi2X] = "🟩";
       mapGame[fPi2Y+1][fPi2X+4] = "🟩";
       mapGame[fPi2Y+2][fPi2X] = "🟩";
       mapGame[fPi2Y+2][fPi2X+4] = "🟩";
       mapGame[fPi2Y+3][fPi2X] = "🟩";
       mapGame[fPi2Y+3][fPi2X+4] = "🟩";
       mapGame[fPi2Y+4][fPi2X] = "🟩";
       mapGame[fPi2Y+4][fPi2X+1] = "🟩";
       mapGame[fPi2Y+4][fPi2X+2] = "🟩";
       mapGame[fPi2Y+4][fPi2X+3] = "🟩";
       mapGame[fPi2Y+4][fPi2X+4] = "🟩";
           satBut2 = true;
         }
       else{
           satBut2 = false;
         }

       if(((box1X == fPi3X+1) and (box1Y == fPi3Y+1)) or
        (box2X == fPi3X+1) and (box2Y == fPi3Y+1) or
        (box3X == fPi3X+1) and (box3Y == fPi3Y+1) or
        (box4X == fPi3X+1) and (box4Y == fPi3Y+1) or
        (box5X == fPi3X+1) and (box5Y == fPi3Y+1) ){
       mapGame[fPi3Y][fPi3X] = "🟩";
       mapGame[fPi3Y][fPi3X+1] = "🟩";
       mapGame[fPi3Y][fPi3X+2] = "🟩";
       mapGame[fPi3Y][fPi3X+3] = "🟩";
       mapGame[fPi3Y][fPi3X+4] = "🟩";
       mapGame[fPi3Y+1][fPi3X] = "🟩";
       mapGame[fPi3Y+1][fPi3X+4] = "🟩";
       mapGame[fPi3Y+2][fPi3X] = "🟩";
       mapGame[fPi3Y+2][fPi3X+4] = "🟩";
       mapGame[fPi3Y+3][fPi3X] = "🟩";
       mapGame[fPi3Y+3][fPi3X+4] = "🟩";
       mapGame[fPi3Y+4][fPi3X] = "🟩";
       mapGame[fPi3Y+4][fPi3X+1] = "🟩";
       mapGame[fPi3Y+4][fPi3X+2] = "🟩";
       mapGame[fPi3Y+4][fPi3X+3] = "🟩";
       mapGame[fPi3Y+4][fPi3X+4] = "🟩";
         satBut3 = true;
       }
       else{
         satBut3 = false;
       }

       if(((box1X == fPi4X+1) and (box1Y == fPi4Y+1)) or
        (box2X == fPi4X+1) and (box2Y == fPi4Y+1) or
        (box3X == fPi4X+1) and (box3Y == fPi4Y+1) or
        (box4X == fPi4X+1) and (box4Y == fPi4Y+1) or
        (box5X == fPi4X+1) and (box5Y == fPi4Y+1) ){
       mapGame[fPi4Y][fPi4X] = "🟩";
       mapGame[fPi4Y][fPi4X+1] = "🟩";
       mapGame[fPi4Y][fPi4X+2] = "🟩";
       mapGame[fPi4Y][fPi4X+3] = "🟩";
       mapGame[fPi4Y][fPi4X+4] = "🟩";
       mapGame[fPi4Y+1][fPi4X] = "🟩";
       mapGame[fPi4Y+1][fPi4X+4] = "🟩";
       mapGame[fPi4Y+2][fPi4X] = "🟩";
       mapGame[fPi4Y+2][fPi4X+4] = "🟩";
       mapGame[fPi4Y+3][fPi4X] = "🟩";
       mapGame[fPi4Y+3][fPi4X+4] = "🟩";
       mapGame[fPi4Y+4][fPi4X] = "🟩";
       mapGame[fPi4Y+4][fPi4X+1] = "🟩";
       mapGame[fPi4Y+4][fPi4X+2] = "🟩";
       mapGame[fPi4Y+4][fPi4X+3] = "🟩";
       mapGame[fPi4Y+4][fPi4X+4] = "🟩";
         satBut4 = true;
       }
       else{
         satBut4 = false;
       }

       if(((box1X == fPi5X+1) and (box1Y == fPi5Y+1)) or
        (box2X == fPi5X+1) and (box2Y == fPi5Y+1) or
        (box3X == fPi5X+1) and (box3Y == fPi5Y+1) or
        (box4X == fPi5X+1) and (box4Y == fPi5Y+1) or
        (box5X == fPi5X+1) and (box5Y == fPi5Y+1) ){
       mapGame[fPi5Y][fPi5X] = "🟩";
       mapGame[fPi5Y][fPi5X+1] = "🟩";
       mapGame[fPi5Y][fPi5X+2] = "🟩";
       mapGame[fPi5Y][fPi5X+3] = "🟩";
       mapGame[fPi5Y][fPi5X+4] = "🟩";
       mapGame[fPi5Y+1][fPi5X] = "🟩";
       mapGame[fPi5Y+1][fPi5X+4] = "🟩";
       mapGame[fPi5Y+2][fPi5X] = "🟩";
       mapGame[fPi5Y+2][fPi5X+4] = "🟩";
       mapGame[fPi5Y+3][fPi5X] = "🟩";
       mapGame[fPi5Y+3][fPi5X+4] = "🟩";
       mapGame[fPi5Y+4][fPi5X] = "🟩";
       mapGame[fPi5Y+4][fPi5X+1] = "🟩";
       mapGame[fPi5Y+4][fPi5X+2] = "🟩";
       mapGame[fPi5Y+4][fPi5X+3] = "🟩";
       mapGame[fPi5Y+4][fPi5X+4] = "🟩";
           satBut5 = true;
         }
       else{
           satBut5 = false;
         }

       mapGame[uPiY][uPiX] = "⬛️";
       mapGame[uPiY][uPiX+1] = "⬛️";
       mapGame[uPiY][uPiX+2] = "⬛️";
       mapGame[uPiY+1][uPiX] = "⬛️";
       mapGame[uPiY+1][uPiX+1] = "⬛️";
       mapGame[uPiY+1][uPiX+2] = "⬛️";
       mapGame[uPiY+2][uPiX] = "⬛️";
       mapGame[uPiY+2][uPiX+1] = "⬛️";
       mapGame[uPiY+2][uPiX+2] = "⬛️";

       mapGame[box1Y][box1X] = "🟫";
       mapGame[box1Y][box1X+1] = "🟫";
       mapGame[box1Y][box1X+2] = "🟫";
       mapGame[box1Y+1][box1X] = "🟫";
       mapGame[box1Y+1][box1X+1] = "🟫";
       mapGame[box1Y+1][box1X+2] = "🟫";
       mapGame[box1Y+2][box1X] = "🟫";
       mapGame[box1Y+2][box1X+1] = "🟫";
       mapGame[box1Y+2][box1X+2] = "🟫";

       mapGame[box2Y][box2X] = "🟫";
       mapGame[box2Y][box2X+1] = "🟫";
       mapGame[box2Y][box2X+2] = "🟫";
       mapGame[box2Y+1][box2X] = "🟫";
       mapGame[box2Y+1][box2X+1] = "🟫";
       mapGame[box2Y+1][box2X+2] = "🟫";
       mapGame[box2Y+2][box2X] = "🟫";
       mapGame[box2Y+2][box2X+1] = "🟫";
       mapGame[box2Y+2][box2X+2] = "🟫";

       mapGame[box3Y][box3X] = "🟫";
       mapGame[box3Y][box3X+1] = "🟫";
       mapGame[box3Y][box3X+2] = "🟫";
       mapGame[box3Y+1][box3X] = "🟫";
       mapGame[box3Y+1][box3X+1] = "🟫";
       mapGame[box3Y+1][box3X+2] = "🟫";
       mapGame[box3Y+2][box3X] = "🟫";
       mapGame[box3Y+2][box3X+1] = "🟫";
       mapGame[box3Y+2][box3X+2] = "🟫";

       mapGame[box4Y][box4X] = "🟫";
       mapGame[box4Y][box4X+1] = "🟫";
       mapGame[box4Y][box4X+2] = "🟫";
       mapGame[box4Y+1][box4X] = "🟫";
       mapGame[box4Y+1][box4X+1] = "🟫";
       mapGame[box4Y+1][box4X+2] = "🟫";
       mapGame[box4Y+2][box4X] = "🟫";
       mapGame[box4Y+2][box4X+1] = "🟫";
       mapGame[box4Y+2][box4X+2] = "🟫";

       mapGame[box5Y][box5X] = "🟫";
       mapGame[box5Y][box5X+1] = "🟫";
       mapGame[box5Y][box5X+2] = "🟫";
       mapGame[box5Y+1][box5X] = "🟫";
       mapGame[box5Y+1][box5X+1] = "🟫";
       mapGame[box5Y+1][box5X+2] = "🟫";
       mapGame[box5Y+2][box5X] = "🟫";
       mapGame[box5Y+2][box5X+1] = "🟫";
       mapGame[box5Y+2][box5X+2] = "🟫";

       cout<< mapGame[i][j];

       if(satBut1 and satBut2 and satBut3 and satBut4 and satBut5 == true){
         std::this_thread::sleep_for(stop);
         temprun = false;
         def_win_user();
         break;break;break;break;break;break;break;break;break;break;break;break;
       }
     }
     cout << endl;
   }

   int key = getch();
   cout<<key;
   switch (key) {
     case 10:
       cout << "\x1B[2J\x1B[H";
       break;

     case 119://key w
       if (uPiY > 0){
         uPiY--;
         if((box1X>0) or (box2X>0) or (box3X>0) or (box4X>0) or (box5X>0)){
           if(
           ((uPiX == box1X) and (uPiY == box1Y+2)) or
           ((uPiX+1 == box1X) and (uPiY == box1Y+2)) or
           ((uPiX+2 == box1X) and (uPiY == box1Y+2)) or

           ((uPiX == box1X+1) and (uPiY == box1Y+2)) or
           ((uPiX+1 == box1X+1) and (uPiY == box1Y+2)) or
           ((uPiX+2 == box1X+1) and (uPiY == box1Y+2)) or

           ((uPiX == box1X+2)and(uPiY == box1Y+2)) or
           ((uPiX+1 == box1X+2)and(uPiY == box1Y+2)) or
           ((uPiX+2 == box1X+2)and(uPiY == box1Y+2)) ){
           box1Y--;
           }
           if(
           ((uPiX == box2X) and (uPiY == box2Y+2)) or
           ((uPiX+1 == box2X) and (uPiY == box2Y+2)) or
           ((uPiX+2 == box2X) and (uPiY == box2Y+2)) or

           ((uPiX == box2X+1) and (uPiY == box2Y+2)) or
           ((uPiX+1 == box2X+1) and (uPiY == box2Y+2)) or
           ((uPiX+2 == box2X+1) and (uPiY == box2Y+2)) or

           ((uPiX == box2X+2)and(uPiY == box2Y+2)) or
           ((uPiX+1 == box2X+2)and(uPiY == box2Y+2)) or
           ((uPiX+2 == box2X+2)and(uPiY == box2Y+2)) ){
           box2Y--;
           }
           if(
           ((uPiX == box3X) and (uPiY == box3Y+2)) or
           ((uPiX+1 == box3X) and (uPiY == box3Y+2)) or
           ((uPiX+2 == box3X) and (uPiY == box3Y+2)) or

           ((uPiX == box3X+1) and (uPiY == box3Y+2)) or
           ((uPiX+1 == box3X+1) and (uPiY == box3Y+2)) or
           ((uPiX+2 == box3X+1) and (uPiY == box3Y+2)) or

           ((uPiX == box3X+2)and(uPiY == box3Y+2)) or
           ((uPiX+1 == box3X+2)and(uPiY == box3Y+2)) or
           ((uPiX+2 == box3X+2)and(uPiY == box3Y+2)) ){
           box3Y--;
           }
           if(
           ((uPiX == box4X) and (uPiY == box4Y+2)) or
           ((uPiX+1 == box4X) and (uPiY == box4Y+2)) or
           ((uPiX+2 == box4X) and (uPiY == box4Y+2)) or

           ((uPiX == box4X+1) and (uPiY == box4Y+2)) or
           ((uPiX+1 == box4X+1) and (uPiY == box4Y+2)) or
           ((uPiX+2 == box4X+1) and (uPiY == box4Y+2)) or

           ((uPiX == box4X+2)and(uPiY == box4Y+2)) or
           ((uPiX+1 == box4X+2)and(uPiY == box4Y+2)) or
           ((uPiX+2 == box4X+2)and(uPiY == box4Y+2)) ){
           box4Y--;
           }
           if(
           ((uPiX == box5X) and (uPiY == box5Y+2)) or
           ((uPiX+1 == box5X) and (uPiY == box5Y+2)) or
           ((uPiX+2 == box5X) and (uPiY == box5Y+2)) or

           ((uPiX == box5X+1) and (uPiY == box5Y+2)) or
           ((uPiX+1 == box5X+1) and (uPiY == box5Y+2)) or
           ((uPiX+2 == box5X+1) and (uPiY == box5Y+2)) or

           ((uPiX == box5X+2)and(uPiY == box5Y+2)) or
           ((uPiX+1 == box5X+2)and(uPiY == box5Y+2)) or
           ((uPiX+2 == box5X+2)and(uPiY == box5Y+2)) ){
           box5Y--;
           }
         }
         else{
           if(
           ((uPiX == box1X) and (uPiY == box1Y+2)) or
           ((uPiX+1 == box1X) and (uPiY == box1Y+2)) or
           ((uPiX+2 == box1X) and (uPiY == box1Y+2)) or

           ((uPiX == box1X+1) and (uPiY == box1Y+2)) or
           ((uPiX+1 == box1X+1) and (uPiY == box1Y+2)) or
           ((uPiX+2 == box1X+1) and (uPiY == box1Y+2)) or

           ((uPiX == box1X+2)and(uPiY == box1Y+2)) or
           ((uPiX+1 == box1X+2)and(uPiY == box1Y+2)) or
           ((uPiX+2 == box1X+2)and(uPiY == box1Y+2)) ){
           uPiY++;
           }
           if(
           ((uPiX == box2X) and (uPiY == box2Y+2)) or
           ((uPiX+1 == box2X) and (uPiY == box2Y+2)) or
           ((uPiX+2 == box2X) and (uPiY == box2Y+2)) or

           ((uPiX == box2X+1) and (uPiY == box2Y+2)) or
           ((uPiX+1 == box2X+1) and (uPiY == box2Y+2)) or
           ((uPiX+2 == box2X+1) and (uPiY == box2Y+2)) or

           ((uPiX == box2X+2)and(uPiY == box2Y+2)) or
           ((uPiX+1 == box2X+2)and(uPiY == box2Y+2)) or
           ((uPiX+2 == box2X+2)and(uPiY == box2Y+2)) ){
           uPiY++;
           }
           if(
           ((uPiX == box3X) and (uPiY == box3Y+2)) or
           ((uPiX+1 == box3X) and (uPiY == box3Y+2)) or
           ((uPiX+2 == box3X) and (uPiY == box3Y+2)) or

           ((uPiX == box3X+1) and (uPiY == box3Y+2)) or
           ((uPiX+1 == box3X+1) and (uPiY == box3Y+2)) or
           ((uPiX+2 == box3X+1) and (uPiY == box3Y+2)) or

           ((uPiX == box3X+2)and(uPiY == box3Y+2)) or
           ((uPiX+1 == box3X+2)and(uPiY == box3Y+2)) or
           ((uPiX+2 == box3X+2)and(uPiY == box3Y+2)) ){
           uPiY++;
           }
           if(
           ((uPiX == box4X) and (uPiY == box4Y+2)) or
           ((uPiX+1 == box4X) and (uPiY == box4Y+2)) or
           ((uPiX+2 == box4X) and (uPiY == box4Y+2)) or

           ((uPiX == box4X+1) and (uPiY == box4Y+2)) or
           ((uPiX+1 == box4X+1) and (uPiY == box4Y+2)) or
           ((uPiX+2 == box4X+1) and (uPiY == box4Y+2)) or

           ((uPiX == box4X+2)and(uPiY == box4Y+2)) or
           ((uPiX+1 == box4X+2)and(uPiY == box4Y+2)) or
           ((uPiX+2 == box4X+2)and(uPiY == box4Y+2)) ){
           uPiY++;
           }
           if(
           ((uPiX == box5X) and (uPiY == box5Y+2)) or
           ((uPiX+1 == box5X) and (uPiY == box5Y+2)) or
           ((uPiX+2 == box5X) and (uPiY == box5Y+2)) or

           ((uPiX == box5X+1) and (uPiY == box5Y+2)) or
           ((uPiX+1 == box5X+1) and (uPiY == box5Y+2)) or
           ((uPiX+2 == box5X+1) and (uPiY == box5Y+2)) or

           ((uPiX == box5X+2)and(uPiY == box5Y+2)) or
           ((uPiX+1 == box5X+2)and(uPiY == box5Y+2)) or
           ((uPiX+2 == box5X+2)and(uPiY == box5Y+2)) ){
           uPiY++;
           }
         }
       }
       cout << "\x1B[2J\x1B[H";
       break;

     case 115://key s
       if (uPiY < SQR-3) {
         uPiY++;
         if((box1X<SQR-3) or (box2X<SQR-3) or (box3X<SQR-3) or (box4X<SQR-3) or (box5X<SQR-3)){
           if(
           ((uPiX == box1X) and (uPiY+2 == box1Y)) or
           ((uPiX+1 == box1X) and (uPiY+2 == box1Y)) or
           ((uPiX+2 == box1X) and (uPiY+2 == box1Y)) or

           ((uPiX == box1X+1) and (uPiY+2 == box1Y)) or
           ((uPiX+1 == box1X+1) and (uPiY+2 == box1Y)) or
           ((uPiX+2 == box1X+1) and (uPiY+2 == box1Y)) or

           ((uPiX == box1X+2)and(uPiY+2 == box1Y)) or
           ((uPiX+1 == box1X+2)and(uPiY+2 == box1Y)) or
           ((uPiX+2 == box1X+2)and(uPiY+2 == box1Y)) ){
           box1Y++;
           }
           if(
           ((uPiX == box2X) and (uPiY+2 == box2Y)) or
           ((uPiX+1 == box2X) and (uPiY+2 == box2Y)) or
           ((uPiX+2 == box2X) and (uPiY+2 == box2Y)) or

           ((uPiX == box2X+1) and (uPiY+2 == box2Y)) or
           ((uPiX+1 == box2X+1) and (uPiY+2 == box2Y)) or
           ((uPiX+2 == box2X+1) and (uPiY+2 == box2Y)) or

           ((uPiX == box2X+2)and(uPiY+2 == box2Y)) or
           ((uPiX+1 == box2X+2)and(uPiY+2 == box2Y)) or
           ((uPiX+2 == box2X+2)and(uPiY+2 == box2Y)) ){
           box2Y++;
           }
           if(
           ((uPiX == box3X) and (uPiY+2 == box3Y)) or
           ((uPiX+1 == box3X) and (uPiY+2 == box3Y)) or
           ((uPiX+2 == box3X) and (uPiY+2 == box3Y)) or

           ((uPiX == box3X+1) and (uPiY+2 == box3Y)) or
           ((uPiX+1 == box3X+1) and (uPiY+2 == box3Y)) or
           ((uPiX+2 == box3X+1) and (uPiY+2 == box3Y)) or

           ((uPiX == box3X+2)and(uPiY+2 == box3Y)) or
           ((uPiX+1 == box3X+2)and(uPiY+2 == box3Y)) or
           ((uPiX+2 == box3X+2)and(uPiY+2 == box3Y)) ){
           box3Y++;
           }
           if(
           ((uPiX == box4X) and (uPiY+2 == box4Y)) or
           ((uPiX+1 == box4X) and (uPiY+2 == box4Y)) or
           ((uPiX+2 == box4X) and (uPiY+2 == box4Y)) or

           ((uPiX == box4X+1) and (uPiY+2 == box4Y)) or
           ((uPiX+1 == box4X+1) and (uPiY+2 == box4Y)) or
           ((uPiX+2 == box4X+1) and (uPiY+2 == box4Y)) or

           ((uPiX == box4X+2)and(uPiY+2 == box4Y)) or
           ((uPiX+1 == box4X+2)and(uPiY+2 == box4Y)) or
           ((uPiX+2 == box4X+2)and(uPiY+2 == box4Y)) ){
           box4Y++;
           }
           if(
           ((uPiX == box5X) and (uPiY+2 == box5Y)) or
           ((uPiX+1 == box5X) and (uPiY+2 == box5Y)) or
           ((uPiX+2 == box5X) and (uPiY+2 == box5Y)) or

           ((uPiX == box5X+1) and (uPiY+2 == box5Y)) or
           ((uPiX+1 == box5X+1) and (uPiY+2 == box5Y)) or
           ((uPiX+2 == box5X+1) and (uPiY+2 == box5Y)) or

           ((uPiX == box5X+2)and(uPiY+2 == box5Y)) or
           ((uPiX+1 == box5X+2)and(uPiY+2 == box5Y)) or
           ((uPiX+2 == box5X+2)and(uPiY+2 == box5Y)) ){
           box5Y++;
           }
         }
         else{
           if(
           ((uPiX == box1X) and (uPiY+2 == box1Y)) or
           ((uPiX+1 == box1X) and (uPiY+2 == box1Y)) or
           ((uPiX+2 == box1X) and (uPiY+2 == box1Y)) or

           ((uPiX == box1X+1) and (uPiY+2 == box1Y)) or
           ((uPiX+1 == box1X+1) and (uPiY+2 == box1Y)) or
           ((uPiX+2 == box1X+1) and (uPiY+2 == box1Y)) or

           ((uPiX == box1X+2)and(uPiY+2 == box1Y)) or
           ((uPiX+1 == box1X+2)and(uPiY+2 == box1Y)) or
           ((uPiX+2 == box1X+2)and(uPiY+2 == box1Y)) ){
           uPiY--;
           }
           if(
           ((uPiX == box2X) and (uPiY+2 == box2Y)) or
           ((uPiX+1 == box2X) and (uPiY+2 == box2Y)) or
           ((uPiX+2 == box2X) and (uPiY+2 == box2Y)) or

           ((uPiX == box2X+1) and (uPiY+2 == box2Y)) or
           ((uPiX+1 == box2X+1) and (uPiY+2 == box2Y)) or
           ((uPiX+2 == box2X+1) and (uPiY+2 == box2Y)) or

           ((uPiX == box2X+2)and(uPiY+2 == box2Y)) or
           ((uPiX+1 == box2X+2)and(uPiY+2 == box2Y)) or
           ((uPiX+2 == box2X+2)and(uPiY+2 == box2Y)) ){
           uPiY--;
           }
           if(
           ((uPiX == box3X) and (uPiY+2 == box3Y)) or
           ((uPiX+1 == box3X) and (uPiY+2 == box3Y)) or
           ((uPiX+2 == box3X) and (uPiY+2 == box3Y)) or

           ((uPiX == box3X+1) and (uPiY+2 == box3Y)) or
           ((uPiX+1 == box3X+1) and (uPiY+2 == box3Y)) or
           ((uPiX+2 == box3X+1) and (uPiY+2 == box3Y)) or

           ((uPiX == box3X+2)and(uPiY+2 == box3Y)) or
           ((uPiX+1 == box3X+2)and(uPiY+2 == box3Y)) or
           ((uPiX+2 == box3X+2)and(uPiY+2 == box3Y)) ){
           uPiY--;
           }
           if(
           ((uPiX == box4X) and (uPiY+2 == box4Y)) or
           ((uPiX+1 == box4X) and (uPiY+2 == box4Y)) or
           ((uPiX+2 == box4X) and (uPiY+2 == box4Y)) or

           ((uPiX == box4X+1) and (uPiY+2 == box4Y)) or
           ((uPiX+1 == box4X+1) and (uPiY+2 == box4Y)) or
           ((uPiX+2 == box4X+1) and (uPiY+2 == box4Y)) or

           ((uPiX == box4X+2)and(uPiY+2 == box4Y)) or
           ((uPiX+1 == box4X+2)and(uPiY+2 == box4Y)) or
           ((uPiX+2 == box4X+2)and(uPiY+2 == box4Y)) ){
           uPiY--;
           }
           if(
           ((uPiX == box5X) and (uPiY+2 == box5Y)) or
           ((uPiX+1 == box5X) and (uPiY+2 == box5Y)) or
           ((uPiX+2 == box5X) and (uPiY+2 == box5Y)) or

           ((uPiX == box5X+1) and (uPiY+2 == box5Y)) or
           ((uPiX+1 == box5X+1) and (uPiY+2 == box5Y)) or
           ((uPiX+2 == box5X+1) and (uPiY+2 == box5Y)) or

           ((uPiX == box5X+2)and(uPiY+2 == box5Y)) or
           ((uPiX+1 == box5X+2)and(uPiY+2 == box5Y)) or
           ((uPiX+2 == box5X+2)and(uPiY+2 == box5Y)) ){
           uPiY--;
           }
         }
       }
       cout << "\x1B[2J\x1B[H";
       break;

     case 97://key a
       if (uPiX > 0) {
         uPiX--;
         if((box1X > 0) or (box2X > 0) or (box3X > 0) or (box4X > 0) or (box5X > 0)){
           if(
             ((uPiX == box1X+2) and (uPiY == box1Y)) or
             ((uPiX == box1X+2) and (uPiY+1 == box1Y)) or
             ((uPiX == box1X+2) and (uPiY+2 == box1Y)) or

             ((uPiX == box1X+2) and (uPiY == box1Y+1)) or
             ((uPiX == box1X+2) and (uPiY+1 == box1Y+1)) or
             ((uPiX == box1X+2) and (uPiY+2 == box1Y+1)) or

             ((uPiX == box1X+2) and (uPiY == box1Y+2)) or
             ((uPiX == box1X+2) and (uPiY+1 == box1Y+2)) or
             ((uPiX == box1X+2) and (uPiY+2 == box1Y+2)) ){
             box1X--;
             }
             if(
             ((uPiX == box2X+2) and (uPiY == box2Y)) or
             ((uPiX == box2X+2) and (uPiY+1 == box2Y)) or
             ((uPiX == box2X+2) and (uPiY+2 == box2Y)) or

             ((uPiX == box2X+2) and (uPiY == box2Y+1)) or
             ((uPiX == box2X+2) and (uPiY+1 == box2Y+1)) or
             ((uPiX == box2X+2) and (uPiY+2 == box2Y+1)) or

             ((uPiX == box2X+2)and(uPiY == box2Y+2)) or
             ((uPiX == box2X+2)and(uPiY+1 == box2Y+2)) or
             ((uPiX == box2X+2)and(uPiY+2 == box2Y+2)) ){
             box2X--;
             }
             if(
             ((uPiX == box3X+2) and (uPiY == box3Y)) or
             ((uPiX == box3X+2) and (uPiY+1 == box3Y)) or
             ((uPiX == box3X+2) and (uPiY+2 == box3Y)) or

             ((uPiX == box3X+2) and (uPiY == box3Y+1)) or
             ((uPiX == box3X+2) and (uPiY+1 == box3Y+1)) or
             ((uPiX == box3X+2) and (uPiY+2 == box3Y+1)) or

             ((uPiX == box3X+2)and(uPiY == box3Y+2)) or
             ((uPiX == box3X+2)and(uPiY+1 == box3Y+2)) or
             ((uPiX == box3X+2)and(uPiY+2 == box3Y+2)) ){
             box3X--;
             }
             if(
             ((uPiX == box4X+2) and (uPiY == box4Y)) or
             ((uPiX == box4X+2) and (uPiY+1 == box4Y)) or
             ((uPiX == box4X+2) and (uPiY+2 == box4Y)) or

             ((uPiX == box4X+2) and (uPiY == box4Y+1)) or
             ((uPiX == box4X+2) and (uPiY+1 == box4Y+1)) or
             ((uPiX == box4X+2) and (uPiY+2 == box4Y+1)) or

             ((uPiX == box4X+2)and(uPiY == box4Y+2)) or
             ((uPiX == box4X+2)and(uPiY+1 == box4Y+2)) or
             ((uPiX == box4X+2)and(uPiY+2 == box4Y+2)) ){
             box4X--;
             }
             if(
             ((uPiX == box5X+2) and (uPiY == box5Y)) or
             ((uPiX == box5X+2) and (uPiY+1 == box5Y)) or
             ((uPiX == box5X+2) and (uPiY+2 == box5Y)) or

             ((uPiX == box5X+2) and (uPiY == box5Y+1)) or
             ((uPiX == box5X+2) and (uPiY+1 == box5Y+1)) or
             ((uPiX == box5X+2) and (uPiY+2 == box5Y+1)) or

             ((uPiX == box5X+2)and(uPiY == box5Y+2)) or
             ((uPiX == box5X+2)and(uPiY+1 == box5Y+2)) or
             ((uPiX == box5X+2)and(uPiY+2 == box5Y+2)) ){
             box5X--;
           }
          }
         else{
         if(
           ((uPiX == box1X+2) and (uPiY == box1Y)) or
           ((uPiX == box1X+2) and (uPiY+1 == box1Y)) or
           ((uPiX == box1X+2) and (uPiY+2 == box1Y)) or

           ((uPiX == box1X+2) and (uPiY == box1Y+1)) or
           ((uPiX == box1X+2) and (uPiY+1 == box1Y+1)) or
           ((uPiX == box1X+2) and (uPiY+2 == box1Y+1)) or

           ((uPiX == box1X+2) and (uPiY == box1Y+2)) or
           ((uPiX == box1X+2) and (uPiY+1 == box1Y+2)) or
           ((uPiX == box1X+2) and (uPiY+2 == box1Y+2)) ){
             uPiX++;
           }
           if(
           ((uPiX == box2X+2) and (uPiY == box2Y)) or
           ((uPiX == box2X+2) and (uPiY+1 == box2Y)) or
           ((uPiX == box2X+2) and (uPiY+2 == box2Y)) or

           ((uPiX == box2X+2) and (uPiY == box2Y+1)) or
           ((uPiX == box2X+2) and (uPiY+1 == box2Y+1)) or
           ((uPiX == box2X+2) and (uPiY+2 == box2Y+1)) or

           ((uPiX == box2X+2)and(uPiY == box2Y+2)) or
           ((uPiX == box2X+2)and(uPiY+1 == box2Y+2)) or
           ((uPiX == box2X+2)and(uPiY+2 == box2Y+2)) ){
             uPiX++;
           }
           if(
           ((uPiX == box3X+2) and (uPiY == box3Y)) or
           ((uPiX == box3X+2) and (uPiY+1 == box3Y)) or
           ((uPiX == box3X+2) and (uPiY+2 == box3Y)) or

           ((uPiX == box3X+2) and (uPiY == box3Y+1)) or
           ((uPiX == box3X+2) and (uPiY+1 == box3Y+1)) or
           ((uPiX == box3X+2) and (uPiY+2 == box3Y+1)) or

           ((uPiX == box3X+2)and(uPiY == box3Y+2)) or
           ((uPiX == box3X+2)and(uPiY+1 == box3Y+2)) or
           ((uPiX == box3X+2)and(uPiY+2 == box3Y+2)) ){
             uPiX++;
           }
           if(
           ((uPiX == box4X+2) and (uPiY == box4Y)) or
           ((uPiX == box4X+2) and (uPiY+1 == box4Y)) or
           ((uPiX == box4X+2) and (uPiY+2 == box4Y)) or

           ((uPiX == box4X+2) and (uPiY == box4Y+1)) or
           ((uPiX == box4X+2) and (uPiY+1 == box4Y+1)) or
           ((uPiX == box4X+2) and (uPiY+2 == box4Y+1)) or

           ((uPiX == box4X+2)and(uPiY == box4Y+2)) or
           ((uPiX == box4X+2)and(uPiY+1 == box4Y+2)) or
           ((uPiX == box4X+2)and(uPiY+2 == box4Y+2)) ){
             uPiX++;
           }
           if(
           ((uPiX == box5X+2) and (uPiY == box5Y)) or
           ((uPiX == box5X+2) and (uPiY+1 == box5Y)) or
           ((uPiX == box5X+2) and (uPiY+2 == box5Y)) or

           ((uPiX == box5X+2) and (uPiY == box5Y+1)) or
           ((uPiX == box5X+2) and (uPiY+1 == box5Y+1)) or
           ((uPiX == box5X+2) and (uPiY+2 == box5Y+1)) or

           ((uPiX == box5X+2)and(uPiY == box5Y+2)) or
           ((uPiX == box5X+2)and(uPiY+1 == box5Y+2)) or
           ((uPiX == box5X+2)and(uPiY+2 == box5Y+2)) ){
             uPiX++;
         }
         }
       }
       cout << "\x1B[2J\x1B[H";
       break;

     case 100://key d
       if (uPiX < SQR-3) {
         uPiX++;
         if((box1X > 0) or (box2X > 0) or (box3X > 0) or (box4X > 0) or (box5X > 0)){
            if(
              ((uPiX+2== box1X) and (uPiY == box1Y)) or
              ((uPiX+2== box1X) and (uPiY+1 == box1Y)) or
              ((uPiX+2== box1X) and (uPiY+2 == box1Y)) or

              ((uPiX+2== box1X) and (uPiY == box1Y+1)) or
              ((uPiX+2== box1X) and (uPiY+1 == box1Y+1)) or
              ((uPiX+2== box1X) and (uPiY+2 == box1Y+1)) or

              ((uPiX+2== box1X) and (uPiY == box1Y+2)) or
              ((uPiX+2== box1X) and (uPiY+1 == box1Y+2)) or
              ((uPiX+2== box1X) and (uPiY+2 == box1Y+2)) ){
              box1X++;
              }
              if(
              ((uPiX+2== box2X) and (uPiY == box2Y)) or
              ((uPiX+2== box2X) and (uPiY+1 == box2Y)) or
              ((uPiX+2== box2X) and (uPiY+2 == box2Y)) or

              ((uPiX+2== box2X) and (uPiY == box2Y+1)) or
              ((uPiX+2== box2X) and (uPiY+1 == box2Y+1)) or
              ((uPiX+2== box2X) and (uPiY+2 == box2Y+1)) or

              ((uPiX+2== box2X)and(uPiY == box2Y+2)) or
              ((uPiX+2== box2X)and(uPiY+1 == box2Y+2)) or
              ((uPiX+2== box2X)and(uPiY+2 == box2Y+2)) ){
              box2X++;
              }
              if(
              ((uPiX+2== box3X) and (uPiY == box3Y)) or
              ((uPiX+2== box3X) and (uPiY+1 == box3Y)) or
              ((uPiX+2== box3X) and (uPiY+2 == box3Y)) or

              ((uPiX+2== box3X) and (uPiY == box3Y+1)) or
              ((uPiX+2== box3X) and (uPiY+1 == box3Y+1)) or
              ((uPiX+2== box3X) and (uPiY+2 == box3Y+1)) or

              ((uPiX+2== box3X)and(uPiY == box3Y+2)) or
              ((uPiX+2== box3X)and(uPiY+1 == box3Y+2)) or
              ((uPiX+2== box3X)and(uPiY+2 == box3Y+2)) ){
              box3X++;
              }
              if(
              ((uPiX+2== box4X) and (uPiY == box4Y)) or
              ((uPiX+2== box4X) and (uPiY+1 == box4Y)) or
              ((uPiX+2== box4X) and (uPiY+2 == box4Y)) or

              ((uPiX+2== box4X) and (uPiY == box4Y+1)) or
              ((uPiX+2== box4X) and (uPiY+1 == box4Y+1)) or
              ((uPiX+2== box4X) and (uPiY+2 == box4Y+1)) or

              ((uPiX+2== box4X)and(uPiY == box4Y+2)) or
              ((uPiX+2== box4X)and(uPiY+1 == box4Y+2)) or
              ((uPiX+2== box4X)and(uPiY+2 == box4Y+2)) ){
              box4X++;
              }
              if(
              ((uPiX+2== box5X) and (uPiY == box5Y)) or
              ((uPiX+2== box5X) and (uPiY+1 == box5Y)) or
              ((uPiX+2== box5X) and (uPiY+2 == box5Y)) or

              ((uPiX+2== box5X) and (uPiY == box5Y+1)) or
              ((uPiX+2== box5X) and (uPiY+1 == box5Y+1)) or
              ((uPiX+2== box5X) and (uPiY+2 == box5Y+1)) or

              ((uPiX+2== box5X)and(uPiY == box5Y+2)) or
              ((uPiX+2== box5X)and(uPiY+1 == box5Y+2)) or
              ((uPiX+2== box5X)and(uPiY+2 == box5Y+2)) ){
              box5X++;
            }
           }
          else{
          if(
            ((uPiX+2== box1X) and (uPiY == box1Y)) or
            ((uPiX+2== box1X) and (uPiY+1 == box1Y)) or
            ((uPiX+2== box1X) and (uPiY+2 == box1Y)) or

            ((uPiX+2== box1X) and (uPiY == box1Y+1)) or
            ((uPiX+2== box1X) and (uPiY+1 == box1Y+1)) or
            ((uPiX+2== box1X) and (uPiY+2 == box1Y+1)) or

            ((uPiX+2== box1X) and (uPiY == box1Y+2)) or
            ((uPiX+2== box1X) and (uPiY+1 == box1Y+2)) or
            ((uPiX+2== box1X) and (uPiY+2 == box1Y+2)) ){
              uPiX--;
            }
            if(
            ((uPiX+2== box2X) and (uPiY == box2Y)) or
            ((uPiX+2== box2X) and (uPiY+1 == box2Y)) or
            ((uPiX+2== box2X) and (uPiY+2 == box2Y)) or

            ((uPiX+2== box2X) and (uPiY == box2Y+1)) or
            ((uPiX+2== box2X) and (uPiY+1 == box2Y+1)) or
            ((uPiX+2== box2X) and (uPiY+2 == box2Y+1)) or

            ((uPiX+2== box2X)and(uPiY == box2Y+2)) or
            ((uPiX+2== box2X)and(uPiY+1 == box2Y+2)) or
            ((uPiX+2== box2X)and(uPiY+2 == box2Y+2)) ){
              uPiX--;
            }
            if(
            ((uPiX+2== box3X) and (uPiY == box3Y)) or
            ((uPiX+2== box3X) and (uPiY+1 == box3Y)) or
            ((uPiX+2== box3X) and (uPiY+2 == box3Y)) or

            ((uPiX+2== box3X) and (uPiY == box3Y+1)) or
            ((uPiX+2== box3X) and (uPiY+1 == box3Y+1)) or
            ((uPiX+2== box3X) and (uPiY+2 == box3Y+1)) or

            ((uPiX+2== box3X)and(uPiY == box3Y+2)) or
            ((uPiX+2== box3X)and(uPiY+1 == box3Y+2)) or
            ((uPiX+2== box3X)and(uPiY+2 == box3Y+2)) ){
              uPiX--;
            }
            if(
            ((uPiX+2== box4X) and (uPiY == box4Y)) or
            ((uPiX+2== box4X) and (uPiY+1 == box4Y)) or
            ((uPiX+2== box4X) and (uPiY+2 == box4Y)) or

            ((uPiX+2== box4X) and (uPiY == box4Y+1)) or
            ((uPiX+2== box4X) and (uPiY+1 == box4Y+1)) or
            ((uPiX+2== box4X) and (uPiY+2 == box4Y+1)) or

            ((uPiX+2== box4X)and(uPiY == box4Y+2)) or
            ((uPiX+2== box4X)and(uPiY+1 == box4Y+2)) or
            ((uPiX+2== box4X)and(uPiY+2 == box4Y+2)) ){
              uPiX--;
            }
            if(
            ((uPiX+2== box5X) and (uPiY == box5Y)) or
            ((uPiX+2== box5X) and (uPiY+1 == box5Y)) or
            ((uPiX+2== box5X) and (uPiY+2 == box5Y)) or

            ((uPiX+2== box5X) and (uPiY == box5Y+1)) or
            ((uPiX+2== box5X) and (uPiY+1 == box5Y+1)) or
            ((uPiX+2== box5X) and (uPiY+2 == box5Y+1)) or

            ((uPiX+2== box5X)and(uPiY == box5Y+2)) or
            ((uPiX+2== box5X)and(uPiY+1 == box5Y+2)) or
            ((uPiX+2== box5X)and(uPiY+2 == box5Y+2)) ){
              uPiX--;
          }
          }
       }
       cout << "\x1B[2J\x1B[H";
       break;

     default:
       break;
   }
 }
}

int main() {
  cout << "\x1B[2J\x1B[H";
  string startMenu[14][21] = {
  {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},
  {"⬜️","⬛️","⬛️","⬛️","⬜️","⬛️","⬛️","⬛️","⬜️","⬛️","⬛️","⬛️","⬜️","⬛️","⬛️","⬛️","⬜️","⬛️","⬛️","⬛️","⬜️"},
  {"⬜️","⬛️","⬜️","⬜️","⬜️","⬜️","⬛️","⬜️","⬜️","⬛️","⬜️","⬛️","⬜️","⬛️","⬜️","⬛️","⬜️","⬜️","⬛️","⬜️","⬜️"},
  {"⬜️","⬛️","⬛️","⬛️","⬜️","⬜️","⬛️","⬜️","⬜️","⬛️","⬜️","⬛️","⬜️","⬛️","⬛️","⬜️","⬜️","⬜️","⬛️","⬜️","⬜️"},
  {"⬜️","⬜️","⬜️","⬛️","⬜️","⬜️","⬛️","⬜️","⬜️","⬛️","⬛️","⬛️","⬜️","⬛️","⬜️","⬛️","⬜️","⬜️","⬛️","⬜️","⬜️"},
  {"⬜️","⬛️","⬛️","⬛️","⬜️","⬜️","⬛️","⬜️","⬜️","⬛️","⬜️","⬛️","⬜️","⬛️","⬜️","⬛️","⬜️","⬜️","⬛️","⬜️","⬜️"},
  {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},
  {"⬜️","⬜️","🟩","⬜️","⬜️","🟩","⬜️","⬜️","⬜️","⬛️","⬛️","⬛️","⬜️","⬜️","⬜️","🟥","⬜️","⬜️","🟥","⬜️","⬜️"},
  {"⬜️","⬜️","🟩","⬜️","⬜️","🟩","⬜️","⬜️","⬜️","⬜️","⬜️","⬛️","⬜️","⬜️","⬜️","🟥","⬜️","⬜️","🟥","⬜️","⬜️"},
  {"⬜️","⬜️","🟩","🟩","🟩","🟩","⬜️","⬜️","⬜️","⬜️","⬜️","⬛️","⬜️","⬜️","⬜️","🟥","🟥","⬜️","🟥","⬜️","⬜️"},
  {"⬜️","⬜️","⬜️","⬜️","⬜️","🟩","⬜️","⬜️","⬜️","⬜️","⬛️","⬜️","⬜️","⬜️","⬜️","🟥","⬜️","🟥","🟥","⬜️","⬜️"},
  {"⬜️","⬜️","🟩","🟩","🟩","🟩","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","🟥","⬜️","⬜️","🟥","⬜️","⬜️"},
  {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬛️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"},
  {"⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️","⬜️"}};

  int YorN = 1;

  int optX = 2;
  int optY = 13;
  string mapGame[14][21];
  while (true) {
    for (int i = 0; i < 14; i++) {
      for (int j = 0; j < 21; j++) {
        mapGame[i][j] = startMenu[i][j];

        mapGame[optY][optX+3] = "🟦";
        mapGame[optY][optX+2] = "🟦";
        mapGame[optY][optX+1] = "🟦";
        mapGame[optY][optX] = "🟦";

        cout<< mapGame[i][j];
      }
      cout << endl;
    }
    cout<<"            <---  A |_| D  --->"<<endl;
    int key = getch();
    switch (key){
    case 32: //spase
      if(YorN == 1){
        LEVEV_1();
      }
      else{
        exit(0);
      }
      cout << "\x1B[2J\x1B[H";
      break;

    case 97: //key a
      optX = 2;
      YorN = 1;
      cout << "\x1B[2J\x1B[H";
      break;

    case 100: //key d
      optX = 15;
      YorN = 0;
      cout << "\x1B[2J\x1B[H";
      break;

    default:
      break;
    }
  }
  return 0;
}
