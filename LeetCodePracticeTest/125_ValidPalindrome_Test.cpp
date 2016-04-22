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
	TEST_CLASS(ValidPalindromeTest)
	{
	public:

		TEST_METHOD(testIsAlphanumeric)
		{

			ValidPalindrome::Solution solution;
			stringstream ss;
			ss <<
				"c : " << solution.isAlphanumeric('c') << endl <<
				"3 : " << solution.isAlphanumeric('3') << endl <<
				"A : " << solution.isAlphanumeric('A') << endl <<
				"  : " << solution.isAlphanumeric(' ') << endl <<
				", : " << solution.isAlphanumeric(',') << endl;

			Logger::WriteMessage(ss.str().c_str());
		}

		TEST_METHOD(testToUpperCase)
		{
			ValidPalindrome::Solution solution;
			stringstream ss;

			ss <<
				"c : " << solution.toUpperCase('c') << endl <<
				"D : " << solution.toUpperCase('D') << endl <<
				"2 : " << solution.toUpperCase('2') << endl;

			Logger::WriteMessage(ss.str().c_str());
		}


		TEST_METHOD(testIsPalindrome)
		{

			ValidPalindrome::Solution solution;
			stringstream ss;

			string s[] = {
				"A man, a plan, a canal: Panama",
				"race a car"
			};

			for each (string i in s)
			{
				ss << i << endl << solution.isPalindrome(i) << endl;
			}

			Logger::WriteMessage(ss.str().c_str());
		}


	};
}