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


// PROJECT INCLUDES
//

// LOCAL INCLUDES
//
#include "Patient.h"


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
class Patient; // Forward declaration

class Doctor
{
public:
	/*! \name Life Cycle */
	//{@
	//! Default constructor.
	Doctor(std::string name);
	//! Destructor.
	virtual ~Doctor();
	//! Copy constructor.
    Doctor(const Doctor& rSource) = delete;
	//@}

    /*! \name Operators */
    //{@
    //! Assignment operator.
    Doctor& operator = (const Doctor& rRhs) = delete;

    //! Output operator.
    friend std::ostream& operator<<(std::ostream &out, const Doctor &doc);
	//@}

	/*! \name Operations */
	//{@
    void AddPatient(Patient* pat);
    std::string GetName() const { return m_Name; }
	//@}

	/*! \name Access */
	//{@

	//@}

private:
	/*! \name Attributes */
	//{@
    std::string m_Name;
    std::vector<Patient*> m_Patients;
	//@}
};
