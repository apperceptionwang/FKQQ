// FKQQ.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <Windows.h>

int main()
{
	MessageBox(NULL,L"请打开QQ,不要关闭黑框！",L"Mr王出版",MB_OK);
	POINT pos = { 0 };
	RECT wndRect = { 0 };	
	while (true)
	{
		HWND hwndQQ = FindWindow(L"TXGuiFoundation", L"QQ");
		GetWindowRect(hwndQQ, &wndRect);
		GetCursorPos(&pos);
		if (wndRect.left<pos.x&&pos.x<wndRect.right&&wndRect.top<pos.y&&pos.y<wndRect.bottom)
		{
			MoveWindow(hwndQQ,pos.x-300,pos.y-100,600,600,true);
		}
		
	}
    return 0;
}

