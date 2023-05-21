class Solution {
public:
    bool checkPrime(int n)
    {
        int i=2;
        for(i=2;i<n;i++)
        {
            if(n%i==0)
            {
                return false;
            }
        }
        return true;
    }
    int countPrimes(int n) {
        int i,count=0;
        bool primes[n+1];
        memset(primes, true, sizeof(primes));
        for(i=2;i<sqrt(n);i++)
        {
            if(primes[i]==true)
            {
                for(int j=i*i;j<n;j+=i)
                {
                    primes[j]=false;
                }
            }
        }
        for(i=2;i<n;i++)
        {
            if(primes[i]==true)
            {
                count++;
            }
        }
        return count;
    }
};
