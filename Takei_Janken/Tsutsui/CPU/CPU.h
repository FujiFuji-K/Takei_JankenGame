#pragma once
#include "/janken/Takei_JankenGame/Takei_Janken/common.h"

namespace Tsutsui
{
	class CPU
	{
	public:
		int cpu_winCount;
		int cpuHand;
		Common::eHand GetHand(void);
	};
}