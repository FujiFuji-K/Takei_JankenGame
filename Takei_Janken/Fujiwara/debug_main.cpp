//Debug

#include "Judgement.h"
#include "string_utility.h"

void ResultOutput(Common::eResult result);

int main() {

	Fujiwara::String::OutputString(Fujiwara::String::ConnectWSTR(L"����ɂ���I", L"��낵�����肢�������܂��I"), true);

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
		Fujiwara::String::OutputString(L"�v���C���[�̏����I", true);
		break;
	case Common::CPUWin:
		Fujiwara::String::OutputString(L"CPU�̏����I", true);
		break;
	case Common::Draw:
		Fujiwara::String::OutputString(L"�������I", true);
		break;
	}
}