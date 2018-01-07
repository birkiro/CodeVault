/*! \company               $CompanyInfo:$
*   \version               $Revision:$
*   \checkindate           $Date:$
*   \file                  $RCSfile:$
***************************************************************************/
#pragma once
#include "Teacher.h"
#pragma warning(disable: 4786)

// SYSTEM INCLUDES
//

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
class Department
{
public:
	/*! \name Life Cycle */
	//{@
	//! Default constructor.
	Department(Teacher* teacher);
	//! Destructor.
	virtual ~Department();
	//! Copy constructor.
    Department(const Department& rSource) = delete;
	//@}

    /*! \name Operators */
    //{@
    //! Assignment operator.
    Department& operator = (const Department& rRhs) = delete;
	//@}

	/*! \name Operations */
	//{@

	//@}

	/*! \name Access */
	//{@
    std::string GetTeacherName() { return m_pTeacher->GetName(); }
	//@}

private:
	/*! \name Attributes */
	//{@
    Teacher* m_pTeacher;
	//@}
};
