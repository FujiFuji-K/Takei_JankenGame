#include <memory>
#include <assert.h>

#include "common.h"
#include "Fujiwara/Judgement.h"
#include "Fujiwara/string_utility.h"
#include "Tsutsui/Player/Player.h"
#include "Tsutsui/CPU/CPU.h"


namespace Application
{
	class Application
	{
	private:
		bool loopFlag = true;


	public:
		//�R���X�g���N�^
		Application() = default;
		//�f�X�g���N�^
		~Application() = default;

		//������
		bool Initialize() {
			//�������������L�q


			return true;
		}

		//���s
		void Run() {

			startProcess();

			while (loopFlag) {

				loopProcess();

			}
		}

	private:
		//�Q�[���J�n���̏���
		void startProcess() {
			//��
			Fujiwara::String::OutputString(L"����񂯂�Q�[���I3��搧�������������I", true);
			Fujiwara::String::OutputString(L"0->�O�[", true);
			Fujiwara::String::OutputString(L"1->�`���L", true);
			Fujiwara::String::OutputString(L"2->�p�[", true);
		}
		//���[�v����
		void loopProcess() {

		}

	};
}


int main() {
	//Application
	auto app = std::make_unique<Application::Application>();

	//�����������B���s������G���[��\�����Ċ֐��𔲂���B
	if (app->Initialize() == false) {
		assert(0 && "Application Initialize Unsuccessful");
		return -1;
	}

	//�Q�[�����[�v
	app->Run();

	return 0;
}