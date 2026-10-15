class Solution {
public:
    double average(vector<int>& salary) {
        double sum = 0;
        sort(salary.begin(), salary.end());
        double i, count = 0;
        for(i = 1; i < salary.size() - 1; i++) {
            sum += salary[i]; count++;
        }
        return sum / count;
    }
};