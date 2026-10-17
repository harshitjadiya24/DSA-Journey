class Solution {
public:
    int check(int n, int t) {
        int defaultSum = n;
        int product = 1;
        int temp = n;

        while (temp > 0) {
            int r = temp % 10;
            temp /= 10;
            product *= r;
        }

        if (product % t == 0)
            return defaultSum;

        return check(defaultSum + 1, t);
    }

    int smallestNumber(int n, int t) {
        return check(n, t);
    }
};