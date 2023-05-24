class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1.0;
        long long m;
        m = (long long)n;
        m = abs(m);
        while(m>0)
        {
            if(m%2==1)
            {
                ans = ans * x;
                m--;
            }
            else
            {
                x = x * x;
                m = m/2;
            }
        }
        if(n<0)
        {
            ans = (double)1.0/(double)ans;
        }
        return ans;
    }
};
