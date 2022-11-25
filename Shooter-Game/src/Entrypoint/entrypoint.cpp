#include "../header-files/engine_main.hpp"
#include <iostream>

int main()
{
	int keep_alive = 0;

	engine_main::init();

	do
	{
		engine_main::tick();
	} while (keep_alive);

	engine_main::exit();

	std::cin.get();
	return 0;
}