class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> ans1;
        for(int i = 0; i < words.size(); i++)
        {
            for(int j = 0; j < words[i].size(); j++)
            {
                if(words[i][j] == x) 
                {
                    ans1.push_back(i);
                    break;
                }
            }
        }
        return ans1;
    }
};