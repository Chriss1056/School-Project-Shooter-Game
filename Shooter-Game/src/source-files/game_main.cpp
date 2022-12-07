#include "../header-files/game_main.hpp"

void game_main::generateWorld(int& returnValue, gameWorld& gameWorld)
{
	gameWorld.killedEnemies = 0;
	gameWorld.points = 0;
	gameWorld.ship.x = 0;
	gameWorld.ship.y = 0;
	gameWorld.world.resize(20);
	for (int y = 0; y < gameWorld.world.size(); y++)
	{
		gameWorld.world[y].resize(61);
	}
	for (int y = 0; y < gameWorld.world.size(); y++)
	{
		for (int x = 0; x < gameWorld.world[y].size(); x++)
		{
			gameWorld.world[y][x] = 0;
		}
	}
	returnValue = 0;
}

void game_main::tickGame(int& returnValue, gameWorld& gameWorld)
{
	returnValue = 0;
}