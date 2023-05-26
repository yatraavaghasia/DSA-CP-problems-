#include <bits/stdc++.h>

int subarraysXor(vector<int> &arr, int x)
{
    //    Write your code here.
    int i,j,k;
    int n = arr.size();
    int xorr = 0;
    int count = 0;
    for(i=0;i<n;i++)
    {
        xorr = 0;
        for(j=i;j<n;j++)
        {
            xorr = xorr ^ arr[j];
            if(xorr==x)
            {
                count++;
            }
        }
    }
    return count;
}
