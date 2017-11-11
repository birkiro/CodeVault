/*! \company               $CompanyInfo:$
*   \version               $Revision:$
*   \checkindate           $Date:$
*   \file                  $RCSfile:$
***************************************************************************/
#pragma once
#pragma warning(disable: 4786)

#define MAX_NO_OF_ROLLS 21

// SYSTEM INCLUDES
//

// PROJECT INCLUDES
//

// LOCAL INCLUDES
//

// FORWARD REFERENCES
//

/*! Game Class
 *
 * \ingroup TheBowlingGame
 *
 ****************************************************************************/
class Game
{
public:
	/*! \name Life Cycle */
	//{@
	//! Default constructor.
	Game();
	//! Destructor.
	virtual ~Game();
	//! Copy constructor.
    Game(const Game& rSource) = delete;
	//@}

    /*! \name Operators */
    //{@
    //! Assignment operator.
    Game& operator = (const Game& rRhs) = delete;
	//@}

	/*! \name Operations */
	//{@
    void Roll(int pins);
    int GetScore();


    //@}

	/*! \name Access */
	//{@

	//@}
private:
    /*! \name Operations */
    //{@
    bool IsSpare(int frameIndex);

    bool IsStrike(int frameIndex);
    int StrikeBonus(int frameIndex);
    int SpareBonus(int frameIndex);
    int SumOfBallsInFrame(int frameIndex);
    //@}

private:
	/*! \name Attributes */
	//{@
    int m_Score;
    int m_Rolls[MAX_NO_OF_ROLLS];
    int m_CurrentRoll;
	//@}
};
