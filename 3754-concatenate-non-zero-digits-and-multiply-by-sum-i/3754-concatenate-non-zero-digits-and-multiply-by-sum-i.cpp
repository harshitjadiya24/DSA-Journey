class Solution {
public:
    long long sumAndMultiply(int n) {
        long long x = 0;
        long long sum = 0;
        long long multiplier = 1;
        
        while (n > 0) {
            int digit = n % 10;
            n /= 10;
            
            if (digit != 0) {
                // Place the digit in its correct original positional order
                x = x + (digit * multiplier);
                multiplier *= 10;
                sum += digit;
            }
        }
        
        return x * sum;
    }
};