#include <Windows.h>

int main() {
    NOTIFYICONDATA Data {};

    Data.uFlags = NIF_ICON;
    Data.hIcon = LoadIconW(NULL, IDI_SHIELD); // IDI_APPLICATION
    Data.hWnd = GetConsoleWindow();

    Shell_NotifyIconW(NIM_ADD, &Data);

    while (true) { }

    return 0;
}
