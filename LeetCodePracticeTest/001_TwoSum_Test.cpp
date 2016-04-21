// Author:	Meng Fanze
// Date:	2016/4/20


/**********************************************************************************

*	Unit Test for 001_TwoSum.cpp

**********************************************************************************/

#include "stdafx.h"
#include "CppUnitTest.h"
#include <AllSolutions.h>
#include <string>

using namespace std;

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

			int nums[] = {2,7,3,15,17,22,6};
			vector<int> input;
			for each (int num in nums)
			{
				input.push_back(num);
			}
			
			vector<int> result = solution.twoSum(input, 21);

			stringstream ss;
			ss << result[0] << "," << result[1] << endl;

			Logger::WriteMessage(ss.str().c_str());
		}

	};
}