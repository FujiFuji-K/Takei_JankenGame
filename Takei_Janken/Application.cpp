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
		//コンストラクタ
		Application() = default;
		//デストラクタ
		~Application() = default;

		//初期化
		bool Initialize() {
			//初期化処理を記述


			return true;
		}

		//実行
		void Run() {

			startProcess();

			while (loopFlag) {

				loopProcess();

			}
		}

	private:
		//ゲーム開始時の処理
		void startProcess() {
			//例
			Fujiwara::String::OutputString(L"じゃんけんゲーム！3回先制した方が勝利！", true);
			Fujiwara::String::OutputString(L"0->グー", true);
			Fujiwara::String::OutputString(L"1->チョキ", true);
			Fujiwara::String::OutputString(L"2->パー", true);
		}
		//ループ処理
		void loopProcess() {

		}

	};
}


int main() {
	//Application
	auto app = std::make_unique<Application::Application>();

	//初期化処理。失敗したらエラーを表示して関数を抜ける。
	if (app->Initialize() == false) {
		assert(0 && "Application Initialize Unsuccessful");
		return -1;
	}

	//ゲームループ
	app->Run();

	return 0;
}