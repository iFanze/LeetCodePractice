// Author:	Meng Fanze
// Date:	2016/4/20


/**********************************************************************************

*	Unit Test for 001_TwoSum.cpp

**********************************************************************************/

#include "stdafx.h"
#include "CppUnitTest.h"
#include <AllSolutions.h>


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodePracticeTest
{		
	TEST_CLASS(TwoSumTest)
	{
	public:
		
		TEST_METHOD(testTwoSum)
		{
			// TODO: 在此输入测试代码
			TwoSum::Solution solution;
			vector<int> input;
			input.push_back(1);
			input.push_back(2);
			vector<int> result = solution.twoSum(input, 3);
			Logger::WriteMessage("Hello");
		}

	};
}