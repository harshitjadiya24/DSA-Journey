class Solution {
public:
    int sum(int n)
    {
        int ans = 0;

        while(n > 0)
        {
            int a = n % 10;
            ans += a * a;
            n /= 10;
        }

        return ans;
    }

    bool isHappy(int n) {
        int slow = n;
        int fast = n;

        do
        {
            slow = sum(slow);
            fast = sum(sum(fast));
        }
        while(slow != fast);

        return slow == 1;
    }
};