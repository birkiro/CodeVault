/*! \company               $CompanyInfo:$
*   \version               $Revision:$
*   \checkindate           $Date:$
*   \file                  $RCSfile:$
***************************************************************************/
#include "StdAfx.h"
#include "Doctor.h"



////////////////////////////////   PUBLIC    ////////////////////////////////

//============================== Life Cycle   ================================

/*! Default constructor.
 *
 ****************************************************************************/
Doctor::Doctor(std::string name) : m_Name(name)
{

}


/*! Destructor.
 *
 ****************************************************************************/
Doctor::~Doctor()
{
}

//============================== Operators   ================================
std::ostream& operator<<(std::ostream &out, const Doctor &doc)
{
    unsigned int length = doc.m_Patients.size();
    if (length == 0)
    {
        out << doc.m_Name << " has no patients right now";
        return out;
    }

    out << doc.m_Name << " is seeing patients: ";
    for (unsigned int count = 0; count < length; ++count)
        out << doc.m_Patients[count]->GetName() << ' ';

    return out;
}
//============================== Operations  ================================
void Doctor::AddPatient(Patient* pat)
{
    // Circular association done through pointers. The patient knows who its doctors are, and the doctors also has a list of its patients.
    m_Patients.push_back(pat);
    pat->addDoctor(this);
}



//============================== Access      ================================

////////////////////////////////   PRIVATE   ////////////////////////////////

//============================== Operations  ================================
