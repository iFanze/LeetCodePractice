// Author:	Meng Fanze
// Date:	2016/4/22


/**********************************************************************************

*	Unit Test for 125_ValidPalindrome.cpp

**********************************************************************************/

#include "stdafx.h"
#include "CppUnitTest.h"
#include <AllSolutions.h>
#include <string>

using namespace std;

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodePracticeTest
{
	TEST_CLASS(ImplementStrStrTest)
	{
	public:

		TEST_METHOD(testStrStr)
		{

			ImplementStrStr::Solution solution;

			string longStr[] = {"","","abc","abcdefg","ababcdedfab"};
			string shortStr[] = {"","a","def","cd","ab"};

			for (int i = 0; i < 5; i++)
			{
				stringstream ss;
				ss <<
					longStr[i] << " : " << shortStr[i] << " : " << solution.strStr(longStr[i], shortStr[i]) << endl;

				Logger::WriteMessage(ss.str().c_str());
			}

		}


	};
}