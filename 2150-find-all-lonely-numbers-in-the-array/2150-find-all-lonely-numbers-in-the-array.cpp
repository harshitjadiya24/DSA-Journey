class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        unordered_map<int, int> mpp;
        vector<int> arr;

        for (int x : nums) {
            mpp[x]++;
        }

        for (auto it : mpp) {
            int x = it.first;

            if (it.second == 1 &&
                mpp.find(x - 1) == mpp.end() &&
                mpp.find(x + 1) == mpp.end()) {
                
                arr.push_back(x);
            }
        }

        return arr;
    }
};