#pragma once
#include "/janken/Takei_JankenGame/Takei_Janken/common.h"

namespace Tsutsui
{
	class Player
	{
	public:
		int pl_winCount;

		Common::eHand InputResult(Common::eHand playerHand);

    };
}