#include<typeinfo>
int NthRoot(int n, int m) {
  // Write your code here.
  double low = 1;
    double high = m;
    double eps = 1e-7; 
    int y;
    while((high - low) > eps) {
        double mid = (low + high) / 2.0; 
        if(pow(mid, n) < m) {
            low = mid;
        } else {
          high = mid;
        }
    }
    int trunc = (int)(low+1);
    double ans = trunc - (low+1);
    if (ans==0)
    return low+1;
    else
    return -1;
}
