// ����
#pragma once

#include "../common.h"

namespace Fujiwara
{
	//����搧���������猈��������
	constexpr int MaxWinCount = 3;

	namespace Judgement {
		//�����Ńv���C���[��CPU�̎��n���A�߂�l�Ō��ʂ�Ԃ��֐�
		Common::eResult BattleJudgement(Common::eHand playerHand, Common::eHand cpuHand);

		//�����Ńv���C���[��CPU�̏����񐔂�n���A�ŏI�I�ȏ��s��Ԃ��B�܂����������Ă��Ȃ��ꍇ��Draw��Ԃ��B
		Common::eResult FinalWinner(int playerWinCount, int cpuWinCount);
	}
}