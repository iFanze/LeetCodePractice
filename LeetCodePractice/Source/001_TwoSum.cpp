// Source:	https://leetcode.com/problems/two-sum/
// Author:	Meng Fanze
// Date:	2016/4/20

/**********************************************************************************

*	Given an array of integers, return indices of the two numbers such that they
	add up to a specific target.

*	You may assume that each input would have exactly one solution.

*	UPDATE (2016/2/13):
	The return format had been changed to zero-based indices. Please read the above
	updated description carefully.

*	Given nums = [2, 7, 11, 15], target = 9,

*	Because nums[0] + nums[1] = 2 + 7 = 9,	return [0, 1].

**********************************************************************************/

#include "AllSolutions.h"

#include <map>
using namespace std;

vector<int> TwoSum::Solution::twoSum(vector<int>& nums, int target) {
	vector<int> result;
	map<int, int> numMap;

	for (vector<int>::iterator i = nums.begin(); i != nums.end(); i++) {
		if (numMap.count(target - *i) != 0)
		{
			if (i - nums.begin() > numMap[target - *i]) {
				result.push_back(numMap[target - *i]);
				result.push_back(i - nums.begin());
			}
			else {
				result.push_back(i - nums.begin());
				result.push_back(numMap[target - *i]);
			}
		}
		else {
			numMap[*i] = i - nums.begin();
		}
	}

	return result;
}