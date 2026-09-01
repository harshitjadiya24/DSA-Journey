class Solution {
public:
    int addDigits(int num) {
        int sum;
        while(num % 10 != num)
        {
            int r = num % 10;
            num = num / 10;
            sum = r + num;
            num = sum;
        }
        return sum;
    }
};