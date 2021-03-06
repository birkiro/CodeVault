/*! \company               $CompanyInfo:$
*   \version               $Revision:$
*   \checkindate           $Date:$
*   \file                  $RCSfile:$
***************************************************************************/
#include "StdAfx.h"
#include <string>

#include "Point2D.h"

////////////////////////////////   PUBLIC    ////////////////////////////////


//============================== Operators   ================================
std::ostream& operator<<(std::ostream& out, const Point2D &point)
{
    out << "(" << point.m_X << ", " << point.m_Y << ")";
    return out;
}

//============================== Operations  ================================

//============================== Access      ================================

////////////////////////////////   PRIVATE   ////////////////////////////////

//============================== Operations  ================================
