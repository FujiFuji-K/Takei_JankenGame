//文字列に関する関数
#pragma once

#include <iostream>
#include <thread>
#include <chrono>
#include <vector>


namespace Fujiwara
{
	namespace String
	{
		//OutputString関数の文字出力間隔
		constexpr long long SleepInterval_ms = 70;

		// 引数で渡された文字列を連結して連結した文字列を戻り値で返す関数
		template<typename... Args>
		std::wstring ConnectWSTR(Args... args) {
			//ロケールの設定
			std::wcout.imbue(std::locale(""));

			std::wstring wstr = L"";
			std::vector<std::wstring> vector_wstr = { args... };

			for (std::wstring temp : vector_wstr) {
				wstr.append(temp);//文字列を連結
			}

			return wstr;
		}

		// 引数で渡された文字列を一文字ずつコンソールに出力する関数。
		// 第一引数に出力したい文字列
		// 第二引数に出力後改行するかの真偽。Trueで改行、Falseで改行無し。
		void OutputString(const std::wstring& wstr, bool isNextLine) {
			/* ##### std::wcout関数で文字列を出力しようとしてもコンソールに表示されない不具合について #####
			 * 通常、UTF-8でコーディングされていれば問題なく文字列が出力されるはずなのだが、環境によってはただしく出力されない事がある。
			 * その場合、下記のコードを記述することで解決する場合がある。
			 *	std::wcout.imbue(std::locale(""));
			 * これは表示するロケール(言語)の設定を行う処理である。*/
			std::wcout.imbue(std::locale(""));


			for (int i = 0; i < wstr.length(); i++) {
				//文字を取り出す
				auto wch = wstr.substr(i, 1);
				//文字を出力
				std::wcout << wch;
				//sleep
				std::this_thread::sleep_for(std::chrono::milliseconds(SleepInterval_ms));
			}
			//改行
			if (isNextLine) std::cout << std::endl;
		}
	}
}




