#include <iostream>
#include <windows.h>

void disable();

void console() {
  ShowWindow(GetConsoleWindow(), SW_HIDE);
  disable();
};

void disable() {
  RegisterHotKey(NULL, 0, 0, 0x61);
  RegisterHotKey(NULL, 0, 0, 0x62);
  RegisterHotKey(NULL, 0, 0, 0x63);
  RegisterHotKey(NULL, 0, 0, 0x64);
  RegisterHotKey(NULL, 0, 0, 0x65);
  RegisterHotKey(NULL, 0, 0, 0x66);
  RegisterHotKey(NULL, 0, 0, 0x67);
  RegisterHotKey(NULL, 0, 0, 0x68);
  RegisterHotKey(NULL, 0, 0, 0x69);
};

void keyboard() {
  if(GetKeyState(0x61) & 0x8000) {
    system("start notepad");
  } else if(GetKeyState(0x62) & 0x8000) {
    system("start notepad");
  };
};

int main() {

  console();

  while(true) {
    keyboard();
    Sleep(120);
  };

  return 0;
}
