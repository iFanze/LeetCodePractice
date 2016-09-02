#include <iostream>
#include <string>
#include <map>

using namespace std;

class Solution{
public:
    int lengthOfLongestSubstring(string s){
        map<string::value_type, string::size_type> charMap;
        string::const_iterator it = s.begin(), it2(it);
        int max = 0;
        while(it2 != s.end()){
            if(charMap.find(*it2) != charMap.end()){
                if(charMap[*it2] >= it - s.begin()){
                    max = ((it2 - it) > max ? (it2 - it) : max);
                    it = s.begin() + charMap[*it2] + 1;
                    charMap[*it2] = it2 - s.begin();
                    it2++;
                }else{
                    charMap[*it2] = it2 - s.begin();
                    it2++;
                }
            }else{
                charMap[*it2] = it2 - s.begin();
                it2++;
            }
        }
        max = ((it2 - it) > max ? (it2 - it) : max);
        return max;
    }
};

int main(){
    string str;
    cin >> str;
    Solution solution;
    cout << solution.lengthOfLongestSubstring(str) << endl;
}
