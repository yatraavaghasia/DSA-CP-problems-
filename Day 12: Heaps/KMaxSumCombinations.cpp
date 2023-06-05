#include <bits/stdc++.h> 
vector<int> kMaxSumCombination(vector<int> &a, vector<int> &b, int n, int k){
	// Write your code here.
	priority_queue <int> pq;
	int sum=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			sum=a[i]+b[j];
			pq.push(sum);
		}
	}
	vector <int> ans;
	for(int i=1;i<=k;i++)
	{
		ans.push_back(pq.top());
		pq.pop();
	}
	return ans;
}
