#include<iostream>
#include<math.h>
#include<Windows.h>

using namespace std;

#define SCREEN_WIDTH 120
#define SCREEN_HEIGHT 40

void draw(int _x, int _y, void * item) {
  CONSOLE_SCREEN_BUFFER_INFO coninfo;
  HANDLE _hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
  GetConsoleScreenBufferInfo(hConsole, &coninfo);


  wchar_t *screen = new wchar_t[nScreenWidth*nScreenHeight];
	HANDLE hConsole = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE, 0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL);
	SetConsoleActiveScreenBuffer(hConsole);
	DWORD dwBytesWritten = 0;

  // Go to position
  // coninfo.dwCursorPosition.X = _x;
  // coninfo.dwCursorPosition.Y = _y;
  // SetConsoleCursorPosition(hConsole, coninfo.dwCursorPosition);
}

int main() {
  return 0;
}