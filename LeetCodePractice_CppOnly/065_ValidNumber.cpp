#include <iostream>
#include <string>

using namespace std;

class Solution{
public:
    void passDigit(string::iterator& it, string& s){
        while(it != s.end() && isdigit(*it))
            it++;
    }

    bool isNumber(string s){
        string::iterator it = s.begin();
        while(it != s.end() && *it == ' '){
            it++;
        }
        if(*it == '+' || *it == '-') it++;
        if(isdigit(*it)){
            passDigit(it, s);
            if(*it == '.'){
                it++;               
                passDigit(it, s);
            } 
        }else if(*it == '.'){
            it++;
            if(!isdigit(*it))
                return false;
            passDigit(it, s);
        }else{
            return false;
        }
        if(tolower(*it) == 'e'){
            it++;
            if(*it == '+' || *it == '-') it++;
            if(!isdigit(*it))
                return false;
            passDigit(it, s);
        }
        while(it != s.end() && *it == ' '){
            it++;
        }
        if(it != s.end())
            return false;
        return true;
    }
};

int main(){
    string str;
    Solution solution;
    while(cin >> str)
        cout << solution.isNumber(str) << endl;
    return 0;
}
