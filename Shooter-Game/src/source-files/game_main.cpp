#include "../header-files/game_main.hpp"

int refreshGameWorld(game_main::gameWorld& gameWorld)
{
	std::vector<int> tmp;
	tmp.resize(20);
	for (int x = 0; x < (gameWorld.world.size() - 1); x++)
	{
		for (int y = 0; y < gameWorld.world[x].size(); y++)
		{
			tmp[y] = gameWorld.world[(x + 1)][y];
		}
		for (int y = 0; y < gameWorld.world[x].size(); y++)
		{
			gameWorld.world[x][y] = tmp[y];
		}
	}
	return 0;
}

int generateNewWorldLine(game_main::gameWorld& gameWorld)
{
	srand(time(0));
	for (int i = 0; i < gameWorld.world[60].size(); i++)
	{
		gameWorld.world[60][i] = rand() % 2;
	}
	return 0;
}

void game_main::tickGame(int& returnValue, gameWorld& gameWorld)
{
	if (refreshGameWorld(gameWorld))
	{
		returnValue = 1;
		return;
	}
	if (generateNewWorldLine(gameWorld))
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