#include "Player.h"
#include <iostream>
using namespace::std;


Common::eHand Tsutsui::Player::InputResult(void)
{
	cin >> playerHand;
	if (playerHand == 0)
	{
		cout << "グーです" < endl;
		Common::eHand::Rock;
	}
	else if (playerHand == 1)
	{
		cout << "チョキです" < endl;
		Common::eHand::Scissors;
	}
	else if (playerHand == 2)
	{
		cout << "パーです" < endl;
		Common::eHand::Paper;
	}
	return Common::eHand();
}
