#pragma once
#include "/janken/Takei_JankenGame/Takei_Janken/common.h"

namespace Tsutsui
{
	class CPU
	{
	public:
		int cpu_winCount;
		
		Common::eHand GetHand(Common::eHand cpuHand);
	};
}