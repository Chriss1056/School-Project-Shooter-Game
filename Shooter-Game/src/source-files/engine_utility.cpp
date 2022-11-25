#include "../header-files/engine_utility.hpp"
#include "../header-files/engine_main.hpp"
#include <conio.h>
#include <windows.h>

void engine_utility::textColor(int& returnValue, color color)
{
	//
}

void engine_utility::textBackgroundColor(int& returnValue, color color)
{
	//
}

void engine_utility::showCursor(int& returnValue, int show)
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
}

void engine_utility::cursorFillLevel(int& returnValue, int fillLevel)
{
	//
}

void engine_utility::getKey(int& key)
{
	int x = getch();
	if (x >= 224)
	{
		x += getch();
	}
	key = x;
}