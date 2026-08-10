class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> mpp;
        unordered_set<int> s;
        int n = arr.size();
        for(int i = 0; i < n; i++)
        {
            mpp[arr[i]]++;
        }
        for(auto it : mpp){
            s.insert(it.second);
        }
        if(s.size() == mpp.size()) return true;
        return false;
    }
};