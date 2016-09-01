#include <string>
#include <cctype>
#include <iostream>
using namespace std;

class Solution {
public:
    int myAtoi(string str) {
        int symbol = 0;
        string::const_iterator it = str.begin();
        while(it != str.end() && *it == ' '){
                it++;
        }
        
        if(*it == '+'){
            symbol = 1;
            it++;
        }else if(*it == '-'){
            symbol = -1;
            it++;
        }else if(isdigit(*it)){
            symbol = 1;
        }else{
            return 0;
        }
        
        if(!isdigit(*it)){
            return 0;
        }

        string::const_iterator it2(it);
        while((it2 != str.end()) && isdigit(*it2))
            it2++;
        string::size_type count = 0;
        int ret_val = 0;
        while(it != it2){
            if(symbol == 1 && 
                ((count > 10) ||
                 (ret_val > 214748364) ||
                 (ret_val == 214748364 && *it > '7')  ))
                return INT_MAX;
            if(symbol == -1 && 
                ((count > 10) ||
                 (ret_val > 214748364) ||
                 (ret_val == 214748364 && *it > '8')  ))
                return INT_MIN;
            ret_val = ret_val * 10 + (*it - '0');
            count++;
            it++;
        }
        return ret_val * symbol;
    }
};

int main(){
    string str;
    Solution solution;
    while(cin >> str){
        cout << solution.myAtoi(str) << endl;
    }
    return 0;
}
