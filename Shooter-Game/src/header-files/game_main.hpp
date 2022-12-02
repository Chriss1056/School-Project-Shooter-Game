#pragma once

#ifndef GAME_MAIN_HEADER_CLASS
#define GAME_MAIN_HEADER_CLASS

#include "engine_utility.hpp"


class game_main : protected engine_utility
{
private:
	struct gameWorld
	{
		int x;
		int y;
		int world[][]; //////////////////////////////////////////////////////////////
		int ships;
		int points;
		int round;
	};
protected:
	static gameWorld getWorld(int& returnValue);
	static void generateWorld(int& returnValue, gameWorld& gameWorld, int x, int y);
	static void tickGame(int& returnValue, gameWorld& gameWorld);
};

#endif //GAME_MAIN_HEADER_CLASS