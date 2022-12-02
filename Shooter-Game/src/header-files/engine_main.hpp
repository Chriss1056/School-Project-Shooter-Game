#pragma once

#ifndef ENGINE_MAIN_HEADER_CLASS
#define ENGINE_MAIN_HEADER_CLASS

#include "engine_utility.hpp"
#include "game_main.hpp"

/// <summary>
/// This is the main class for the Game.
/// </summary>
class engine_main : protected engine_utility, protected game_main
{
public:
	/// <summary>
	/// This Funktion is called first, to set up the Application.
	/// </summary>
	static void init(int& returnValue);
	/// <summary>
	/// This Funktion is called repediatly to push the game state forward.
	/// </summary>
	static void tick(int& returnValue);
	/// <summary>
	/// This is a clean up Funktion, which is called last to clean up.
	/// </summary>
	static void exit(int& returnValue);
};

#endif //ENGINE_MAIN_HEADER_CLASS