#include "AllSolutions.h"

using namespace std;

void ReverseWordsInAString::Solution::reverseWords(string & s)
{
	int length = s.length();
	char* p = &(s[0]) + length - 1;
	stringstream ss;
	while (p >= &(s[0]))
	{
		char *wordEnd;
		while (p >= &(s[0]) && *p == ' ')
		{
			p--;
		}
		if (p < &(s[0]) || (p == &(s[0]) && *p == ' '))
			break;
		wordEnd = p;
		while (p >= &(s[0]) && *p != ' ')
		{
			p--;
		}
		char *t = p + 1;
		while (t <= wordEnd)
		{
			ss << *t;
			t++;
		}
		ss << " ";
	}
	s = ss.str();

	s = s.substr(0, s.length() - 1);
}