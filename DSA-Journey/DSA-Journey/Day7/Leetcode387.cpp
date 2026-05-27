#include<iostream>
using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        int n = s.size();

        for(int i = 0; i < n; i++)
        {
            int count = 0;

            for(int j = 0; j < n; j++)
            {
                if(s[i] == s[j])
                {
                    count++;
                }
            }

            if(count == 1)
            {
                return i;
            }
        }

        return -1;
    }
};


// optimized 

class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> freq(26, 0);

        for(char ch : s)
        {
            freq[ch - 'a']++;
        }

        for(int i = 0; i < s.size(); i++)
        {
            if(freq[s[i] - 'a'] == 1)
            {
                return i;
            }
        }

        return -1;
    }
};