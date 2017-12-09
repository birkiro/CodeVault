#include "stdafx.h"
#include "CppUnitTest.h"

#include "PrimeFactors.h"
#include <vector>
#include <list>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;
namespace ThePrimeFactorsUT
{		
	TEST_CLASS(PrimeFactorsUT)
	{
	public:
		
		TEST_METHOD(Initialization)
		{
            std::vector<int> testList = TestList();
            std::vector<int> generatedList = PrimeFactors::Generate();

            
		}

    private:
        std::vector<int> TestList() 
        {
            std::vector<int> listOfPrimes;



            return listOfPrimes;
        }
	};
}