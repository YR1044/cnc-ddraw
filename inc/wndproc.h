#ifndef WNDPROC_H
#define WNDPROC_H

#define WM_AUTORENDERER WM_USER+111
#define WM_WINEFULLSCREEN WM_USER+112
#define WM_D3D9DEVICELOST WM_USER+113

#define IDT_TIMER_LEAVE_BNET 541287654

LRESULT CALLBACK fake_WndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

#endif