#pragma once

#include "../header-files/engine_utility.hpp"

class engine_main : protected engine_utility
{
public:
	static void init();
	static void tick();
	static void exit();
};