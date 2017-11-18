#include "stdafx.h"
#include "CppUnitTest.h"
#include "Game.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TheBowlingGameUT
{	
    Game* pGame = nullptr;

    Game* CreateGameInstance(){ return new Game(); }
    void DeleteGameInstance() { delete pGame; pGame = nullptr; }

	TEST_CLASS(TestCases)
	{
	public:
		TEST_METHOD(TestGutterGame)
		{   
            pGame = CreateGameInstance();

            RollMany(20, 0);

            Assert::AreEqual(0, pGame->GetScore());

            DeleteGameInstance();
		}

        TEST_METHOD(TestAllOnes)
        {
            pGame = CreateGameInstance();
            
            RollMany(20, 1);

            Assert::AreEqual(20, pGame->GetScore());

            DeleteGameInstance();
        }

        TEST_METHOD(TestOneSpare)
        {
            pGame = CreateGameInstance();

            RollSpare();
            RollOnce(3);
            RollMany(17, 0);

            Assert::AreEqual(16, pGame->GetScore());

            DeleteGameInstance();
        }

        TEST_METHOD(TestOneStrike)
        {
            pGame = CreateGameInstance();

            RollStrike();
            RollOnce(3);
            RollOnce(4);

            RollMany(16, 0);

            Assert::AreEqual(24, pGame->GetScore());

            DeleteGameInstance();
        }

        TEST_METHOD(TestPerfectGame)
        {
            pGame = CreateGameInstance();

            RollMany(12, 10);

            Assert::AreEqual(300, pGame->GetScore());

            DeleteGameInstance();
        }

    private:
        void RollOnce(int pins)
        {
            pGame->Roll(pins);
        }

        void RollMany(int n, int pins)
        {
            for (int i = 0; i < n; i++)
                pGame->Roll(pins);
        }

        void RollSpare()
        {
            pGame->Roll(9);
            pGame->Roll(1);
        }

        void RollStrike()
        {
            pGame->Roll(10);
        }
	};
}