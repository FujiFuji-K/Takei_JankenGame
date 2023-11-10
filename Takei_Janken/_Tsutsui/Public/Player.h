#pragma once
#include "/janken/Takei_JankenGame/Takei_Janken/common.h"

namespace Tsutsui
{
	class Player
	{
	public:
		int winCount;
		int hd;

		Common::eHand InputResult(void);

    };
}