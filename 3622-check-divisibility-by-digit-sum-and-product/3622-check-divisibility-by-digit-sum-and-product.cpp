class Solution {
public:
    bool checkDivisibility(int n) {
        int original = n, ans;
        int r, sum = 0, product = 1;
        while(n > 0)
        {
            r = n % 10;
            n = n / 10;
            sum += r;
            product *= r;
        }
        ans = sum + product;
        if(original % ans == 0) return true;
        else return false;
    }
};