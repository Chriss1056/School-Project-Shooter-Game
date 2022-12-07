#include "../header-files/engine_main.hpp"

void engine_main::init(int& returnValue)
{
	gameWorld game;
	int returnValueGame = 2;
	game_main::generateWorld(returnValueGame, game);
	if (returnValueGame)
		returnValue = 1;
	else
		returnValue = 0;
	return;
}

void engine_main::tick(int& returnValue)
{
	//
}

void engine_main::exit(int& returnValue)
{
	//
}