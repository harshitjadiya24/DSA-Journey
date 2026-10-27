
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> ans;
        int num;

        for(int i = 0; i < operations.size(); i++)
        {
            if(operations[i] == "C") {
                ans.pop_back();
            }
            else if(operations[i] == "D") {
                num = ans.back() * 2;
                ans.push_back(num);
            }
            else if(operations[i] == "+") {
                ans.push_back(ans[ans.size() - 1] + ans[ans.size() - 2]);
            }
            else {
                ans.push_back(stoi(operations[i]));
            }
        }

        int sum = 0;
        for(int i = 0; i < ans.size(); i++)
            sum += ans[i];

        return sum;
    }
};
