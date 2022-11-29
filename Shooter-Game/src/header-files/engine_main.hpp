#pragma once

#ifndef ENGINE_MAIN_HEADER_CLASS
#define ENGINE_MAIN_HEADER_CLASS

#include "../header-files/engine_utility.hpp"

class engine_main : protected engine_utility
{
public:
	/// <summary>
	/// This Funktion is called first, to set up the Application.
	/// </summary>
	static void init();
	/// <summary>
	/// This Funktion is called repediatly to push the game state forward.
	/// </summary>
	static void tick();
	/// <summary>
	/// This is a clean up Funktion, which is called last to clean up.
	/// </summary>
	static void exit();
};

#endif //ENGINE_MAIN_HEADER_CLASS