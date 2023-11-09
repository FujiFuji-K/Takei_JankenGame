#include "Player.h"
#include <iostream>
using namespace::std;


Common::eHand Tsutsui::Player::InputResult(void)
{
	cin >> hd;
	if (hd == 0)
	{
		Common::eHand(0);
	}
	else if (hd == 1)
	{
		Common::eHand(1);
	}
	else if (hd == 2)
	{
		Common::eHand(2);
	}
	return Common::eHand();
}
