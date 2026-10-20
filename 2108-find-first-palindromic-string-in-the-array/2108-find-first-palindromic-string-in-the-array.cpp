
class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(int i = 0; i < words.size(); i++)
        {
            int count = 0;
            int j = 0, k = words[i].size() - 1;

            while(j < k)
            {
                if(words[i][j] != words[i][k]) break;
                else 
                {
                    j++;
                    k--;
                    count++;
                }
            }

            if(count == (words[i].size() / 2))
                return words[i];
        }
        return "";
    }
};
