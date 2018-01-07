/*! \company               $CompanyInfo:$
*   \version               $Revision:$
*   \checkindate           $Date:$
*   \file                  $RCSfile:$
***************************************************************************/
#pragma once
#pragma warning(disable: 4786)

// SYSTEM INCLUDES
//
#include <string>

// PROJECT INCLUDES
//

// LOCAL INCLUDES
//
#include "Point2D.h"

// FORWARD REFERENCES
//

/*! <One line description>
 *
 * \ingroup <GroupName>
 *
 * <A longer description> 
 *
 * \see <Something>
 ****************************************************************************/
class Creature
{
public:
	/*! \name Life Cycle */
	//{@
	//! Default constructor.
    Creature(const std::string& name, Point2D location);
	//! Destructor.
	virtual ~Creature();
	//! Copy constructor.
    Creature(const Creature& rSource) = delete;
	//@}

    /*! \name Operators */
    //{@
    //! Assignment operator.
    Creature& operator = (const Creature& rRhs) = delete;
    
    friend std::ostream& operator<<(std::ostream& out, const Creature &creature);
	//@}

	/*! \name Operations */
	//{@
    void MoveTo(int x, int y);

	//@}

	/*! \name Access */
	//{@

	//@}

private:
	/*! \name Attributes */
	//{@
    std::string m_Name;
    Point2D m_Location;   // Composition: Creature is composed of a location point (and a name)
	//@}
};
