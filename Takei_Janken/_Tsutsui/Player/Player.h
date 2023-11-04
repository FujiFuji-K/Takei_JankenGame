#pragma once
#include "/janken/Takei_JankenGame/Takei_Janken/common.h"

namespace Tsutsui
{
	class Player
	{
		int winCount;

		Common::eHand hand;
		Common::eHand InputResult();

    };
}