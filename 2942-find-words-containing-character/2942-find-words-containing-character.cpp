class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        set<int> ans;
        vector<int> ans1;
        for(int i = 0; i < words.size(); i++)
        {
            for(int j = 0; j < words[i].size(); j++)
            {
                if(words[i][j] == x) ans.insert(i);
            }
        }
        for(int x : ans) ans1.push_back(x);
        return ans1;
    }
};