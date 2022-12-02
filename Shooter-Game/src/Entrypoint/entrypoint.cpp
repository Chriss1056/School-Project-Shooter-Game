#include "../header-files/engine_main.hpp"
#include <iostream>

int main()
{
	int returnValue = -1;

	engine_main::init(returnValue);
	if (returnValue)
		return 1;

	do
	{
		engine_main::tick(returnValue);
	} while (!returnValue);

	engine_main::exit(returnValue);

	return returnValue;
}