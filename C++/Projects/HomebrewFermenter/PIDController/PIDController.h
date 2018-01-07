/*
 Name:		PIDController.h
 Created:	07-Jan-18 20:34:04
 Author:	birkiro
 Editor:	http://www.visualmicro.com
*/

#ifndef _PIDController_h
#define _PIDController_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif


#endif

/*! \company               $CompanyInfo:$
*   \version               $Revision:$
*   \checkindate           $Date:$
*   \file                  $RCSfile:$
***************************************************************************/
#pragma once
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
class PIDController
{
public:
	/*! \name Life Cycle */
	//{@
	//! Default constructor.
	PIDController();
	//! Destructor.
	virtual ~PIDController();
	//! Copy constructor.
    PIDController(const PIDController& rSource) = delete;
	//@}

    /*! \name Operators */
    //{@
    //! Assignment operator.
    PIDController& operator = (const PIDController& rRhs) = delete;
	//@}

	/*! \name Operations */
	//{@

	//@}

	/*! \name Access */
	//{@

	//@}

private:
	/*! \name Attributes */
	//{@

	//@}
};