#include <bits/stdc++.h> 
vector<int> mergeKSortedArrays(vector<vector<int>>&kArrays, int k)
{
    // Write your code here. 
    vector <int> ans;
    priority_queue <int> pq;
    int n;
    for(int i=0;i<(k);i++)
    {
        for(int j=0;j<kArrays[i].size();j++)
        {
            ans.push_back(kArrays[i][j]);
        }
    }
    sort(ans.begin(),ans.end());
    return ans;
}
