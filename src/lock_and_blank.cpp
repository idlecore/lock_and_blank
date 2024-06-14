#include <windows.h>

#pragma comment(lib, "user32.lib")

#define POWER_OFF 0x0002

void main()
{
    if (LockWorkStation())
        SendMessage(HWND_BROADCAST, WM_SYSCOMMAND, SC_MONITORPOWER, POWER_OFF);
}
