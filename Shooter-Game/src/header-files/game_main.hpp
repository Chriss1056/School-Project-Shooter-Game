#pragma once

#ifndef GAME_MAIN_HEADER_CLASS
#define GAME_MAIN_HEADER_CLASS

#include "engine_utility.hpp"
#include "../Entrypoint/entrypoint.hpp"


class game_main : protected engine_utility
{
private:
	/// <summary>
	/// This Stores the Position of the ship.
	/// </summary>
	struct ship
	{
		/// <summary>
		/// This is the X Coordinate of the ship.
		/// </summary>
		int x;
		/// <summary>
		/// This is the Y Coordinate of the ship.
		/// </summary>
		int y;
	};
	/// <summary>
	/// This is the Main Game Struct, where all Game Data is living.
	/// </summary>
	struct gameWorld
	{
		/// <summary>
		/// This is the Main Game World.
		/// </summary>
		int world[MAX_Y][(MAX_X + 1)];
		/// <summary>
		/// This is the Position of the Ship.
		/// </summary>
		ship ship;
		/// <summary>
		/// These are the gained Points in this Session.
		/// </summary>
		int points;
		/// <summary>
		/// These are the killed Enemies in this Session.
		/// </summary>
		int killedEnemies;
	};
protected:
	/// <summary>
	/// With this Function, you get the main game struct.
	/// </summary>
	/// <param name="returnValue">is the return Code. Anything else than 0 is an error.</param>
	/// <returns>0 ... Success</returns>
	static gameWorld getWorld(int& returnValue);
	/// <summary>
	/// With this Function, you populate and set up the Main Game Struct.
	/// </summary>
	/// <param name="returnValue">is the return Code. Anything else than 0 is an error.</param>
	/// <param name="gameWorld">is the Main Game Struct.</param>
	/// <returns>0 ... Success</returns>
	static void generateWorld(int& returnValue, gameWorld& gameWorld);
	/// <summary>
	/// With this Function, you progress the Game one step further.
	/// </summary>
	/// <param name="returnValue">is the return Code. Anything else than 0 is an error.</param>
	/// <param name="gameWorld">is the Main Game Struct.</param>
	/// <returns>0 ... Success</returns>
	static void tickGame(int& returnValue, gameWorld& gameWorld);
};

#endif //GAME_MAIN_HEADER_CLASS