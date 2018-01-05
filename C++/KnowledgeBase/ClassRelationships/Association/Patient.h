/*! \company               $CompanyInfo:$
*   \version               $Revision:$
*   \checkindate           $Date:$
*   \file                  $RCSfile:$
***************************************************************************/
#pragma once
#pragma warning(disable: 4786)

// SYSTEM INCLUDES
//
#include <vector>
#include <string>

// PROJECT INCLUDES
//

// LOCAL INCLUDES
//
#include "Doctor.h"

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
class Patient
{
    friend class Doctor; // To access addDoctor method. TODO: Only make the method accessible and not the whole class.
public:
	/*! \name Life Cycle */
	//{@
	//! Default constructor.
	Patient(std::string name);
	//! Destructor.
	virtual ~Patient();
	//! Copy constructor.
    Patient(const Patient& rSource) = delete;
	//@}

    /*! \name Operators */
    //{@
    //! Assignment operator.
    Patient& operator = (const Patient& rRhs) = delete;

    // Output operator
    friend std::ostream& operator<<(std::ostream &out, const Patient &pat);
	//@}

	/*! \name Operations */
	//{@

	//@}

	/*! \name Access */
	//{@
    std::string GetName() const { return m_Name; }
	//@}

private:
    /*! \name Operations */
    //{@
    void addDoctor(Doctor *doc);
    //@}

private:
	/*! \name Attributes */
	//{@
    std::string m_Name;
    std::vector<Doctor*> m_Doctors;
	//@}
};
