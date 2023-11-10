//������Ɋւ���֐�
#pragma once

#include <iostream>
#include <thread>
#include <chrono>
#include <vector>


namespace Fujiwara
{
	namespace String
	{
		//OutputString�֐��̕����o�͊Ԋu
		constexpr long long SleepInterval_ms = 70;

		// �����œn���ꂽ�������A�����ĘA�������������߂�l�ŕԂ��֐�
		template<typename... Args>
		std::wstring ConnectWSTR(Args... args) {
			//���P�[���̐ݒ�
			std::wcout.imbue(std::locale(""));

			std::wstring wstr = L"";
			std::vector<std::wstring> vector_wstr = { args... };

			for (std::wstring temp : vector_wstr) {
				wstr.append(temp);//�������A��
			}

			return wstr;
		}

		// �����œn���ꂽ��������ꕶ�����R���\�[���ɏo�͂���֐��B
		// �������ɏo�͂�����������
		// �������ɏo�͌���s���邩�̐^�U�BTrue�ŉ��s�AFalse�ŉ��s�����B
		void OutputString(const std::wstring& wstr, bool isNextLine) {
			/* ##### std::wcout�֐��ŕ�������o�͂��悤�Ƃ��Ă��R���\�[���ɕ\������Ȃ��s��ɂ��� #####
			 * �ʏ�AUTF-8�ŃR�[�f�B���O����Ă���Ζ��Ȃ������񂪏o�͂����͂��Ȃ̂����A���ɂ���Ă͂��������o�͂���Ȃ���������B
			 * ���̏ꍇ�A���L�̃R�[�h���L�q���邱�Ƃŉ�������ꍇ������B
			 *	std::wcout.imbue(std::locale(""));
			 * ����͕\�����郍�P�[��(����)�̐ݒ���s�������ł���B*/
			std::wcout.imbue(std::locale(""));


			for (int i = 0; i < wstr.length(); i++) {
				//���������o��
				auto wch = wstr.substr(i, 1);
				//�������o��
				std::wcout << wch;
				//sleep
				std::this_thread::sleep_for(std::chrono::milliseconds(SleepInterval_ms));
			}
			//���s
			if (isNextLine) std::cout << std::endl;
		}
	}
}




