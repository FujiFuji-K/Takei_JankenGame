//Debug

#include "Judgement.h"
#include "string_utility.h"

void ResultOutput(Common::eResult result);

int main() {

	Fujiwara::String::OutputString(Fujiwara::String::ConnectWSTR(L"こんにちわ！", L"よろしくお願いいたします！"), true);

	Common::eHand pHand = Common::eHand::Paper;
	Common::eHand cHand = Common::eHand::Rock;

	ResultOutput(Fujiwara::Judgement::BattleJudgement(pHand, cHand));

	pHand = Common::eHand::Rock;
	cHand = Common::eHand::Paper;
	ResultOutput(Fujiwara::Judgement::BattleJudgement(pHand, cHand));

	pHand = Common::eHand::Scissors;
	cHand = Common::eHand::Scissors;
	ResultOutput(Fujiwara::Judgement::BattleJudgement(pHand, cHand));


	return 0;
}

void ResultOutput(Common::eResult result)
{
	switch (result)
	{
	case Common::PlayerWin:
		Fujiwara::String::OutputString(L"プレイヤーの勝ち！", true);
		break;
	case Common::CPUWin:
		Fujiwara::String::OutputString(L"CPUの勝ち！", true);
		break;
	case Common::Draw:
		Fujiwara::String::OutputString(L"あいこ！", true);
		break;
	}
}