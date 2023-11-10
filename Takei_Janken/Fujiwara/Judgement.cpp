#include "Judgement.h"

Common::eResult Fujiwara::Judgement::BattleJudgement(Common::eHand playerHand, Common::eHand cpuHand)
{
	//Draw
	if (playerHand == cpuHand) {
		return Common::eResult::Draw;
	}
	//Player -> Rock
	else if (playerHand == Common::eHand::Rock) {
		if (cpuHand == Common::eHand::Scissors)		return Common::eResult::PlayerWin;
		else if (cpuHand == Common::eHand::Paper)	return Common::eResult::CPUWin;
	}
	//Player -> Scissors
	else if (playerHand == Common::eHand::Scissors) {
		if (cpuHand == Common::eHand::Rock)			return Common::eResult::CPUWin;
		else if (cpuHand == Common::eHand::Paper)	return Common::eResult::PlayerWin;
	}
	//Player -> Paper
	else if (playerHand == Common::eHand::Paper) {
		if (cpuHand == Common::eHand::Rock)			return Common::eResult::PlayerWin;
		else if (cpuHand == Common::eHand::Scissors)return Common::eResult::CPUWin;
	}
}

Common::eResult Fujiwara::Judgement::FinalWinner(int playerWinCount, int cpuWinCount)
{
	if (playerWinCount >= MaxWinCount) {
		return Common::eResult::PlayerWin;
	}
	else if (cpuWinCount >= MaxWinCount) {
		return Common::eResult::CPUWin;
	}
	else {
		return Common::eResult::Draw;
	}
}
