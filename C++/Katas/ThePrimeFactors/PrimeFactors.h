/*! \company               $CompanyInfo:$
*   \version               $Revision:$
*   \checkindate           $Date:$
*   \file                  $RCSfile:$
***************************************************************************/
#pragma once
#pragma warning(disable: 4786)

// SYSTEM INCLUDES
//
#include <list>
#include <vector>

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
class PrimeFactors
{
public:
	/*! \name Operations */
	//{@
    static std::vector<int> Generate();
	//@}

	/*! \name Access */
	//{@

	//@}

private:
    /*! \name Life Cycle */
    //{@
    //! Default constructor.
    PrimeFactors();
    //! Destructor.
    virtual ~PrimeFactors();

private:
	/*! \name Attributes */
	//{@

	//@}
};
