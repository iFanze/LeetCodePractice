// Source:	https://leetcode.com/problems/implement-strstr/
// Author:	Meng Fanze
// Date:	2016/4/23

/**********************************************************************************

*	Implement strStr().

*	Returns the index of the first occurrence of needle in haystack, or -1 if
	needle is not part of haystack.

**********************************************************************************/

#include "AllSolutions.h"

#include <map>
using namespace std;

int ImplementStrStr::Solution::strStr(string haystack, string needle)
{
	int longLength = haystack.length();
	int shortLength = needle.length();

	if (shortLength == 0) return 0;
	if (longLength == 0 || longLength < shortLength) return -1;

	for (int i = 0; i <= longLength - shortLength; i++) {
		bool found = true;
		for (int j = 0; j < shortLength; j++) {
			if (haystack[i + j] != needle[j])
			{
				found = false;
				continue;
			}
		}
		if (found)
		{
			return i;
		}
	}
	return -1;
}