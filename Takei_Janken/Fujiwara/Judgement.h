// 判定
#pragma once

#include "../common.h"

namespace Fujiwara
{
	//何回先制勝利したら決着がつくか
	constexpr int MaxWinCount = 3;

	namespace Judgement {
		//引数でプレイヤーとCPUの手を渡し、戻り値で結果を返す関数
		Common::eResult BattleJudgement(Common::eHand playerHand, Common::eHand cpuHand);

		//引数でプレイヤーとCPUの勝利回数を渡し、最終的な勝敗を返す。まだ決着がついていない場合はDrawを返す。
		Common::eResult FinalWinner(int playerWinCount, int cpuWinCount);
	}
}