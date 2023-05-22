//User function Template for C++
class Solution
{
public:
    int factorial(int n)
{
    // single line to find factorial
    return (n==1 || n==0) ? 1: n * factorial(n - 1); 
}
    vector<long long> factorialNumbers(long long N)
    {
        // Write Your Code here
        vector <long long> ans;
        long long x;
        x=2;
        long long fact = 1;
        while(fact<=N)
        {
            ans.push_back(fact);
            fact = fact * x;
            x++;
        }
        return ans;
    }
};
