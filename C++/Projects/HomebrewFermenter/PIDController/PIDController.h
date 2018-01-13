/*! \company               $CompanyInfo:$
*   \version               $Revision:$
*   \checkindate           $Date:$
*   \file                  $RCSfile:$
***************************************************************************/
#pragma once
#pragma warning(disable: 4786)

#ifndef _PIDController_h
#define _PIDController_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif


#endif



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

struct Gains
{
    double kp;
    double ki;
    double kd;
};

class PIDController
{
public:
	/*! \name Life Cycle */
	//{@
	//! Default constructor.
	PIDController(double* input, double* output, unsigned long sampleTime, double setpoint, double kp, double ki, double kd);
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
    void SetSetpoint(const double& setpoint) { m_Setpoint = setpoint; }
    void SetSampleTime(const unsigned long& sampleTime) { m_SampleTime = sampleTime; }
    bool Compute();

    void setState(bool enabled) {}
	//@}

	/*! \name Access */
	//{@

	//@}
private:
    /*! \name Operations */
    //{@
    void SetTimeVariables();
    double GetCurrentError();
    //@}
private:
	/*! \name Attributes */
	//{@

    double* m_pInput;
    double* m_pOutput;
    double m_Setpoint;
    unsigned long m_SampleTime;

    double m_Kp;
    double m_Ki;
    double m_Kd;
    
    double m_Dt;
    double m_ErrorSum;
    double m_ErrorDiff;

    unsigned long m_LastTime;
    double m_LastInput;
    double m_LastError;    
	//@}
};