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
class Teacher
{
public:
	/*! \name Life Cycle */
	//{@
	//! Default constructor.
    Teacher(std::string name);
	//! Destructor.
	virtual ~Teacher();
	//! Copy constructor.
    Teacher(const Teacher& rSource) = delete;
	//@}

    /*! \name Operators */
    //{@
    //! Assignment operator.
    Teacher& operator = (const Teacher& rRhs) = delete;
	//@}

	/*! \name Operations */
	//{@

	//@}

	/*! \name Access */
	//{@
    std::string GetName() const { return m_Name; }
	//@}

private:
	/*! \name Attributes */
	//{@
    std::string m_Name;
	//@}
};
