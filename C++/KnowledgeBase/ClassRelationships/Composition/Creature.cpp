/*! \company               $CompanyInfo:$
*   \version               $Revision:$
*   \checkindate           $Date:$
*   \file                  $RCSfile:$
***************************************************************************/
#include "StdAfx.h"
#include "Creature.h"


////////////////////////////////   PUBLIC    ////////////////////////////////

//============================== Life Cycle   ================================

/*! Default constructor.
 *
 ****************************************************************************/
Creature::Creature(const std::string& name, Point2D location) : m_Name(name) 
{ 
    m_Location = location; 
}

/*! Destructor.
 *
 ****************************************************************************/
Creature::~Creature()
{
}

//============================== Operators   ================================
std::ostream& operator<<(std::ostream& out, const Creature &creature)
{
    out << creature.m_Name << " is at " << creature.m_Location << '\n';
    return out;
}

//============================== Operations  ================================
void Creature::MoveTo(int x, int y)
{
    m_Location.SetPoint(x, y);
}


//============================== Access      ================================

////////////////////////////////   PRIVATE   ////////////////////////////////

//============================== Operations  ================================
