class Solution {
public:
    double myPow(double x, int n) {
        if(n==0)
        {
            return 1;
        }
        else if(n > 0)
        {
            return x * myPow(x, n-1);
        }
        else
        {
            return  (1/x) * myPow(x, n+1);
        }
    }
};


//optimized
class Solution {
public:
    double myPow(double x, int n) {
        if(n == 0)
        {
            return 1;
        }
        long binform = n;
        if(n < 0)
        {
            x =1/x;
            binform = -binform;
        }
        double ans = 1;
        while(binform > 0)
        {
            if(binform%2==1)
            {
                ans *= x;
            }
            x *= x;
            binform /= 2;
        }
        return ans;
    }
};