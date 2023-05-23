#include <bits/stdc++.h> 
long long getInversions(long long *arr, int n){
    // Write your code here.
    int i,j;
    long long count =0;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                count++;
            }
        }
    }
    return count;
}
