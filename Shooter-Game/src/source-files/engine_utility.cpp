#include "../header-files/engine_utility.hpp"

void engine_utility::textColor(int& returnValue, COLOR_F color)
{
	WORD attr = (WORD)color;
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	if (SetConsoleTextAttribute(handle, attr) == 0)
	{
		returnValue = 1;
		return;
	}
	returnValue = 0;
}

void engine_utility::textBackgroundColor(int& returnValue, COLOR_B color)
{
	WORD attr = (WORD)color;
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	if (SetConsoleTextAttribute(handle, attr) == 0)
	{
		returnValue = 1;
		return;
	}
	returnValue = 0;
}

void engine_utility::showCursor(int& returnValue, BOOL show)
{
	CONSOLE_CURSOR_INFO cci;
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	if (GetConsoleCursorInfo(handle, &cci) == 0)
	{
		returnValue = 1;
		return;
	}
	cci.bVisible = (BOOL)show;
	if (SetConsoleCursorInfo(handle, &cci) == 0)
	{
		returnValue = 1;
		return;
	}
	returnValue = 0;
}

void engine_utility::cursorFillLevel(int& returnValue, int fillLevel)
{
	CONSOLE_CURSOR_INFO cci;
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	if (GetConsoleCursorInfo(handle, &cci) == 0)
	{
		returnValue = 1;
		return;
	}
	cci.dwSize = (DWORD)fillLevel;
	if (SetConsoleCursorInfo(handle, &cci) == 0)
	{
		returnValue = 1;
		return;
	}
	returnValue = 0;
}

void engine_utility::gotoxy(int& returnValue, short x, short y)
{
	COORD xy;
	xy.X = x;
	xy.Y = y;
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	if (SetConsoleCursorPosition(handle, xy) == 0)
	{
		returnValue = 1;
		return;
	}
	returnValue = 0;
}

void engine_utility::getKey(int& returnValue, int& key)
{
	int x = _getch();
	if (x >= 224)
	{
		x += _getch();
	}
	key = x;
	returnValue = 0;
}