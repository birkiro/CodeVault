/*! \company               $CompanyInfo:$
*   \version               $Revision:$
*   \checkindate           $Date:$
*   \file                  $RCSfile:$
***************************************************************************/
//#include "StdAfx.h"
#include "PIDController.h"


////////////////////////////////   PUBLIC    ////////////////////////////////

//============================== Life Cycle   ================================

/*! Default constructor.
 *
 ****************************************************************************/
PIDController::PIDController(double* input, double* output, unsigned long sampleTime, double setpoint, double kp, double ki, double kd)
    : m_pInput(input)
    , m_pOutput(output)
    , m_Setpoint(setpoint)
    , m_SampleTime(sampleTime)
    , m_Kp(kp)
    , m_Ki(ki)
    , m_Kd(kd)
    , m_ErrorSum(0)
    , m_ErrorDiff(0)
    , m_LastTime(0)
    , m_LastInput(0)
    , m_LastError(0)
{ 
}

/*! Destructor.
 *
 ****************************************************************************/
PIDController::~PIDController()
{
    delete m_pInput;
    delete m_pOutput;
}

//============================== Operators   ================================

//============================== Operations  ================================
bool PIDController::Compute()
{
    unsigned long timeNow = millis();
    m_Dt = (double)(timeNow - m_LastTime);
    
    if (m_Dt < m_SampleTime) return false;

    double error = (double)(m_Setpoint - (*m_pInput));  // P
    m_ErrorSum += (error * m_Dt);                       // I
    m_ErrorDiff = (error - m_LastError) / m_Dt;         // D

    *m_pOutput = (m_Kp * error) + (m_Ki * m_ErrorSum) + (m_Kd * m_ErrorDiff);

    m_LastError = error;
    m_LastTime = timeNow;

    return true;
}


//============================== Access      ================================

////////////////////////////////   PRIVATE   ////////////////////////////////

//============================== Operations  ================================
void PIDController::SetTimeVariables()
{     
    m_Dt = (double)(millis() - m_LastTime);
}

double PIDController::GetCurrentError()
{
    return m_Setpoint - (*m_pInput);
}


