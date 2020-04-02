#include<iostream>
#include<math.h>
#include<Windows.h>

using namespace std;

void draw(int _x, int _y, void * item) {
  CONSOLE_SCREEN_BUFFER_INFO coninfo;
  HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
  GetConsoleScreenBufferInfo(hConsole, &coninfo);

  // Go to position
  coninfo.dwCursorPosition.X = _x;
  coninfo.dwCursorPosition.Y = _y;
  SetConsoleCursorPosition(hConsole, coninfo.dwCursorPosition);
}

int main() {
  return 0;
}