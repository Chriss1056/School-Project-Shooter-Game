#include "../header-files/game_main.hpp"

int refreshGameWorld(game_main::gameWorld& gameWorld)
{
	std::vector<int> tmp;
	tmp.resize(20);
	/* Copies Line 61 to line 0
	for (int y = 0; y < gameWorld.world[60].size(); y++)
	{
		tmp[y] = gameWorld.world[60][y];
	}
	for (int y = 0; y < gameWorld.world[0].size(); y++)
	{
		gameWorld.world[0][y] = tmp[y];
	}
	*/ 
	return 0;
}

void game_main::tickGame(int& returnValue, gameWorld& gameWorld)
{
	if (refreshGameWorld(gameWorld))
	{
		returnValue = 1;
		return;
	}
	returnValue = 0;
}

void game_main::generateWorld(int& returnValue, gameWorld& gameWorld)
{
	gameWorld.killedEnemies = 0;
	gameWorld.points = 0;
	gameWorld.ship.x = 0;
	gameWorld.ship.y = 0;
	gameWorld.world.resize(61);
	for (int x = 0; x < gameWorld.world.size(); x++)
	{
		gameWorld.world[x].resize(20);
	}
	for (int x = 0; x < gameWorld.world.size(); x++)
	{
		for (int y = 0; y < gameWorld.world[x].size(); y++)
		{
			gameWorld.world[x][y] = 0;
		}
	}
	returnValue = 0;
}