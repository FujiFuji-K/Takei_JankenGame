#include "CPU.h"
#include <iostream>

Common::eHand Tsutsui::CPU::GetHand(Common::eHand cpuHand)
{
	cpuHand = rand() % 3;
	if (cpuHand == 0)
	{
		Common::eHand::Rock;
	}
	else if (cpuHand == 1)
	{
		Common::eHand::Scissors;
	}
	else if (cpuHand == 2)
	{
		Common::eHand::Paper;
	}
	return Common::eHand();
}
