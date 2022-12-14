#include <iostream>
#include <windows.h>

int main() {

  ShowWindow(GetConsoleWindow(), SW_HIDE);

  while(true) {
    if(GetAsyncKeyState(VK_NUMPAD1)) {
      system("start notepad");
    } else if(GetAsyncKeyState(VK_NUMPAD2)) {
      system("start notepad");
    };
    Sleep(60);
  };
  return 0;
}