#pragma once

#ifndef ENGINE_UTILITY_HEADER_CLASS
#define ENGINE_UTILITY_HEADER_CLASS

#include "engine_main.hpp"
#include <conio.h>
#include <windows.h>

/// <summary>
/// All Background Colors in the following format: R/X G/X B/X D/L
/// </summary>
enum class COLOR_B
{
	RXXD = BACKGROUND_RED,
	XGXD = BACKGROUND_GREEN,
	RGXD = BACKGROUND_RED | BACKGROUND_GREEN,
	XXBD = BACKGROUND_BLUE,
	RXBD = BACKGROUND_RED | BACKGROUND_BLUE,
	XGBD = BACKGROUND_GREEN | BACKGROUND_BLUE,
	RGBD = BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE,
	RXXL = BACKGROUND_RED | BACKGROUND_INTENSITY,
	XGXL = BACKGROUND_GREEN | BACKGROUND_INTENSITY,
	RGXL = BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_INTENSITY,
	XXBL = BACKGROUND_BLUE | BACKGROUND_INTENSITY,
	RXBL = BACKGROUND_RED | BACKGROUND_BLUE | BACKGROUND_INTENSITY,
	XGBL = BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_INTENSITY,
	RGBL = BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_INTENSITY
};

/// <summary>
/// All Foreground Colors in the following format: R/X G/X B/X D/L
/// </summary>
enum class COLOR_F
{
	RXXD = FOREGROUND_RED,
	XGXD = FOREGROUND_GREEN,
	RGXD = FOREGROUND_RED | FOREGROUND_GREEN,
	XXBD = FOREGROUND_BLUE,
	RXBD = FOREGROUND_RED | FOREGROUND_BLUE,
	XGBD = FOREGROUND_GREEN | FOREGROUND_BLUE,
	RGBD = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE,
	RXXL = FOREGROUND_RED | FOREGROUND_INTENSITY,
	XGXL = FOREGROUND_GREEN | FOREGROUND_INTENSITY,
	RGXL = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY,
	XXBL = FOREGROUND_BLUE | FOREGROUND_INTENSITY,
	RXBL = FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY,
	XGBL = FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY,
	RGBL = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY
};

/// <summary>
/// This is a Utility Namespace for all Utility functions.
/// </summary>
namespace engine_utility
{
	/// <summary>
	/// Colors the Text.
	/// </summary>
	/// <param name="returnValue">is the return Code. Anything else than 0 is an error.</param>
	/// <param name="color">is the Color for the Text.</param>
	/// <returns>0 ... Success</returns>
	static void textColor(int& returnValue, COLOR_F color);
	/// <summary>
	/// Colors the Background.
	/// </summary>
	/// <param name="returnValue">is the return Code. Anything else than 0 is an error.</param>
	/// <param name="color">is the Color for the Background.</param>
	/// <returns>0 ... Success</returns>
	static void textBackgroundColor(int& returnValue, COLOR_B color);

	/// <summary>
	/// Makes the Console Cursor Visible or Invisible, depending on the "show" argument.
	/// </summary>
	/// <param name="returnValue">is the return Code. Anything else than 0 is an error.</param>
	/// <param name="show">is the Visibility setting.</param>
	/// <returns>0 ... Success</returns>
	static void showCursor(int& returnValue, BOOL show);
	/// <summary>
	/// Sets the fill level of the Console Cursor. Values between 0 and 100 are Valid.
	/// </summary>
	/// <param name="returnValue">is the return Code. Anything else than 0 is an error.</param>
	/// <param name="fillLevel">is the Level to which the COnsole Cursor get's filled.</param>
	/// <returns>0 ... Success</returns>
	static void cursorFillLevel(int& returnValue, int fillLevel);

	/// <summary>
	/// This Funktion places the Console Cursor at the refferenced Position.
	/// </summary>
	/// <param name="resultValue">is the return Code. Anything else than 0 is an error.</param>
	/// <param name="x">is the X Coordinate in the Console Window.</param>
	/// <param name="y">is the Y Coordinate in the Console Window.</param>
	static void gotoxy(int& resultValue, short x, short y);

	/// <summary>
	/// Get's the key code of the last pressed key.
	/// </summary>
	/// <param name="returnValue">is the return Code. Anything else than 0 is an error.</param>
	/// <param name="key">is the Code of the last Pressed Key.</param>
	/// <returns>Key Code</returns>
	static void getKey(int& returnValue, int& key);
};

#endif //ENGINE_UTILITY_HEADER_CLASS