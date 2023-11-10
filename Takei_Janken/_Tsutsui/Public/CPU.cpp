#include "CPU.h"
#include <iostream>

Common::eHand Tsutsui::CPU::GetHand(void)
{
	hand = rand() % 3;
	if (hand == 0)
	{
		Common::eHand(0);
	}
	else if (hand == 1)
	{
		Common::eHand(1);
	}
	else if (hand == 2)
	{
		Common::eHand(2);
	}
	return Common::eHand();
}
