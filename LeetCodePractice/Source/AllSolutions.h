// Author:	Meng Fanze
// Date:	2016/4/20


/**********************************************************************************

*	Head file for all solutions.

**********************************************************************************/

#pragma once
#include<vector>
using namespace std;

// Title:	001_TwoSum
// Date:	2016/4/20
namespace TwoSum {
	class Solution {
	public:
		vector<int> twoSum(vector<int>& nums, int target);
	};
}

// Title:	125_ValidPalindrome
// Date:	2016/4/22
namespace ValidPalindrome {
	class Solution {
	public:
		bool isPalindrome(string s);
		bool isAlphanumeric(char c);
		char toUpperCase(char c);
	};
}