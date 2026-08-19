class Solution {
public:
    int numberOfSubstrings(string s) {
        int cnt[3] = {0, 0, 0};
        int left = 0;
        int ans = 0;

        for (int right = 0; right < s.size(); right++) {
            
            // Add current character to the window
            cnt[s[right] - 'a']++;

            // Shrink the window from the left as long as it contains all a, b, and c
            while (cnt[0] > 0 && cnt[1] > 0 && cnt[2] > 0) {
                cnt[s[left] - 'a']--;
                left++;
            }
            
            // All starting positions from 0 to (left - 1) are valid when ending at 'right'.
            // The number of such positions is exactly 'left'.
            ans += left;
        }

        return ans;
    }
};