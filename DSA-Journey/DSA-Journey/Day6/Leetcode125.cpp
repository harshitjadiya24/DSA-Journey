#include<iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        string result = "";
        for(char ch : s)
        {
            ch = tolower(ch);
            if(isalnum(ch))
            {
                result += ch;
            }
        }
        int n = result.size();
        int start = 0;
        int end = n - 1;
        while(start <= end)
        {
            if(result[start] != result[end])
            {
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};