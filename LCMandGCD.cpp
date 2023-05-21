class Solution {
  public:
    vector<long long> lcmAndGcd(long long A , long long B) {
        // code here
        long long gcd = __gcd(A,B);
        return {(A*B)/gcd, gcd };
        
    }
};
