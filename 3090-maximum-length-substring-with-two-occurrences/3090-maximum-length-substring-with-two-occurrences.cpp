class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<char, int> mpp;
        int n = s.size();
        int i = 0;
        int j = 0;
        for(int k = 0; k < n; k++)
        {
            mpp[s[k]]++;
            while(mpp[s[k]] > 2)
            {
                mpp[s[i]]--;
                i++;
            }
            j = max(j, k - i + 1);
        }
        return j;
    }
};