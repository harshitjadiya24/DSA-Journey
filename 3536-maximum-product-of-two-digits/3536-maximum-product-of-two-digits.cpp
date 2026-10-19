class Solution {
public:
    int maxProduct(int n) {
        vector<int> ans;
        int r;
        while(n > 0)
        {
            r = n % 10;
            n = n / 10;
            ans.push_back(r);
        }
        sort(ans.begin(), ans.end());
        return ans[ans.size() - 1] * ans[ans.size() - 2];
    }
};