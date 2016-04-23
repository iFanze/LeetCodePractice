// Source:	https://leetcode.com/problems/valid-palindrome/
// Author:	Meng Fanze
// Date:	2016/4/22

/**********************************************************************************

*	Given a string, determine if it is a palindrome, considering only alphanumeric
	characters and ignoring cases.

*	For example,
	"A man, a plan, a canal: Panama" is a palindrome.
	"race a car" is not a palindrome.

*	Note:

	Have you consider that the string might be empty? This is a good question to ask during an interview.

	For the purpose of this problem, we define empty string as valid palindrome.

**********************************************************************************/

#include "AllSolutions.h"

#include <map>
using namespace std;

bool ValidPalindrome::Solution::isAlphanumeric(char c) {
	return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9');
}

char ValidPalindrome::Solution::toUpperCase(char c) {
	if (c >= 'a' && c <= 'z')
		return c + ('A' - 'a');
	return c;
}

bool ValidPalindrome::Solution::isPalindrome(string s) {
	int length = s.length();

	if (s == "")
		return true;

	char* left = &s[0];
	char* right = &(s[length - 1]);


	while (left < right) {
		while (!isAlphanumeric(*(left))) left++;
		while (!isAlphanumeric(*(right))) right--;
		if (toUpperCase(*left) != toUpperCase(*right))
			return false;
		else {
			left++;
			right--;
		}
	}
	return true;
}