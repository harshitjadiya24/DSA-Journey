class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0, length = 0, n = s.size();
        unordered_map<char, int> mpp;
        for(int i = 0; i < n; i++)
        {
            mpp[s[i]]++;
            while(mpp[s[i]] > 1)
            {
                mpp[s[l]]--;
                l++;
            }
            length = max(length, i - l + 1);
        }
        return length;
    }
};