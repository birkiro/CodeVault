/*! \company               $CompanyInfo:$
*   \version               $Revision:$
*   \checkindate           $Date:$
*   \file                  $RCSfile:$
***************************************************************************/
#pragma once
#pragma warning(disable: 4786)

// SYSTEM INCLUDES
//
#include <ostream>

// PROJECT INCLUDES
//

// LOCAL INCLUDES
//

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
class Point2D
{
public:
	/*! \name Life Cycle */
	//{@
	//! Default constructor.
	Point2D() : m_X(0), m_Y(0) {}
    Point2D(int x, int y) : m_X(x), m_Y(y) {}
	//! Destructor.
	virtual ~Point2D() {}
	//! Copy constructor.
    Point2D(const Point2D& rSource) = default;
	//@}

    /*! \name Operators */
    //{@
    //! Assignment operator.
    Point2D& operator = (const Point2D& rRhs) = default;

    //! Output operator
    friend std::ostream& operator<<(std::ostream& out, const Point2D &point);
    
	//@}

	/*! \name Operations */
	//{@

	//@}

	/*! \name Access */
	//{@
    void SetPoint(int x, int y) { m_X = x; m_Y = y; }
	//@}

private:
	/*! \name Attributes */
	//{@
    int m_X;
    int m_Y;
	//@}
};
