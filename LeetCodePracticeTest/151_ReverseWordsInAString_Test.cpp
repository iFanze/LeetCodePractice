// Author:	Meng Fanze
// Date:	2016/4/23


/**********************************************************************************

*	Unit Test for 151_ReverseWordsInAString.cpp

**********************************************************************************/

#include "stdafx.h"
#include "CppUnitTest.h"
#include <AllSolutions.h>
#include <string>

using namespace std;

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodePracticeTest
{
	TEST_CLASS(ReverseWordsInAStringTest)
	{
	public:

		TEST_METHOD(testReverseWords)
		{

			ReverseWordsInAString::Solution solution;
			string strs[] = {
				"",
				" ",
				"a",
				"  a   ",
				"ab",
				"q a",
				"abcd efghi jklm",
				"  ab cd ef gh  ",
				"  ab   cd    ef  "
			};
			for each (string str in strs)
			{
				stringstream ss;
				ss << str << " : ";
				solution.reverseWords(str);
				ss << str ;
				Logger::WriteMessage(ss.str().c_str());
			}

		}


	};
}