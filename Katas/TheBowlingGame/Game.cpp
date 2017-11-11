/*! \company               $CompanyInfo:$
*   \version               $Revision:$
*   \checkindate           $Date:$
*   \file                  $RCSfile:$
***************************************************************************/
#include "StdAfx.h"
#include "Game.h"


////////////////////////////////   PUBLIC    ////////////////////////////////

//============================== Life Cycle   ================================

/*! Default constructor.
 *
 ****************************************************************************/
Game::Game() : m_Score(0), m_CurrentRoll(0)
{
    for (int i = 0; i < MAX_NO_OF_ROLLS; ++i) 
    { 
        m_Rolls[i] = 0; 
    }
}

/*! Destructor.
 *
 ****************************************************************************/
Game::~Game()
{
}

//============================== Operators   ================================

//============================== Operations  ================================
void Game::Roll(int pins)
{
    m_Rolls[m_CurrentRoll++] = pins;
}


int Game::GetScore()
{
    int score = 0;
    int frameIndex = 0;

    for (int frame = 0; frame < 10; ++frame)
    {
        if (IsStrike(frameIndex))
        {
            score += 10 + StrikeBonus(frameIndex);
            frameIndex++;
        }
        else if (IsSpare(frameIndex))
        {
            score += 10 + SpareBonus(frameIndex);
            frameIndex += 2;
        }
        else
        {
            score += SumOfBallsInFrame(frameIndex);
            frameIndex += 2;
        }
    }

    return score;
}

//============================== Access      ================================

////////////////////////////////   PRIVATE   ////////////////////////////////

//============================== Operations  ================================
bool Game::IsSpare(int frameIndex)
{
    return m_Rolls[frameIndex] + m_Rolls[frameIndex + 1] == 10;
}

bool Game::IsStrike(int frameIndex)
{
    return m_Rolls[frameIndex] == 10;
}

int Game::StrikeBonus(int frameIndex)
{
    return m_Rolls[frameIndex + 1] + m_Rolls[frameIndex + 2];
}

int Game::SpareBonus(int frameIndex)
{
    return m_Rolls[frameIndex + 2];
}

int Game::SumOfBallsInFrame(int frameIndex)
{
    return m_Rolls[frameIndex] + m_Rolls[frameIndex + 1];
}

