#pragma once

enum class color
{
	BLACK,
	WHITE
	//
};

class engine_utility
{
protected:
	static void textColor(int& returnValue, color color);
	static void textBackgroundColor(int& returnValue, color color);

	static void showCursor(int& returnValue, int show);
	static void cursorFillLevel(int& returnValue, int fillLevel);

	static void getKey(int& key);
};