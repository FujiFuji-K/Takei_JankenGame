#pragma once
#include "/janken/Takei_JankenGame/Takei_Janken/common.h"

namespace Tsutsui
{
	class Player
	{
	public:
		int pl_winCount;
		int playerHand;

		Common::eHand InputResult(void);

    };
}