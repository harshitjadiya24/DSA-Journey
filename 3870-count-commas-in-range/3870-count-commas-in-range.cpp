class Solution {
public:
    int countCommas(int n) {
        int count = 0, comma = 0;
        int original = n;
        int a;
        while(n > 0)
        {
            a = n % 10;
            count++;
            n = n / 10;
        }
        if(count >= 4){
            for(int i = 1000; i <= original; i++)
            {
                comma++;
            }
            return comma;
        }else return 0;
    }
};