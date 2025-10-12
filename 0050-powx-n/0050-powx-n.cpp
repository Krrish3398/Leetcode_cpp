class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1;
        long BF = n;
        if(n < 0)
        {
            x = 1/x;
            BF = -BF;
        }

        while(BF > 0)
        {
             if(BF % 2 == 1)
             {
                ans  = ans * x;
             }
            x = x * x;
            BF = BF /2;
        }
        return ans;
    }
};