/*! \company               $CompanyInfo:$
*   \version               $Revision:$
*   \checkindate           $Date:$
*   \file                  $RCSfile:$
***************************************************************************/
#include "StdAfx.h"
#include "Patient.h"


////////////////////////////////   PUBLIC    ////////////////////////////////

//============================== Life Cycle   ================================

/*! Default constructor.
 *
 ****************************************************************************/
Patient::Patient(std::string name) : m_Name(name)
{
}

/*! Destructor.
 *
 ****************************************************************************/
Patient::~Patient()
{
}

//============================== Operators   ================================
std::ostream& operator<<(std::ostream& rOut, const Patient& rPatient)
{
    unsigned int length = rPatient.m_Doctors.size();
    if (length == 0)
    {
        rOut << rPatient.GetName() << " has no doctors right now";
        return rOut;
    }

    rOut << rPatient.m_Name << " is seeing doctors: ";
    for (unsigned int count = 0; count < length; ++count)
        rOut << rPatient.m_Doctors[count]->GetName() << ' ';

    return rOut;
}
//============================== Operations  ================================

//============================== Access      ================================

////////////////////////////////   PRIVATE   ////////////////////////////////

//============================== Operations  ================================
void Patient::addDoctor(Doctor *doc)
{
    m_Doctors.push_back(doc);
}

