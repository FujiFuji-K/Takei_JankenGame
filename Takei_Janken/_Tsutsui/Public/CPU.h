#pragma once
#include "/janken/Takei_JankenGame/Takei_Janken/common.h"

namespace Tsutsui
{
	class CPU
	{
	public:
		int winCount;
		int hand;
		Common::eHand GetHand(void);
	};
}