#include <bits/stdc++.h> 
bool isPossible(vector <int>& a, int n, int cows, int minDist)
{
	int countCows=1;
	int lastCowPlaced=a[0];
	for(int i=0;i<n;i++)
	{
		if(a[i]-lastCowPlaced>=minDist)
		{
			countCows++;
			lastCowPlaced=a[i];
		}
	}
	if(countCows>=cows) return true;
	return false;
}
int chessTournament(vector<int> positions , int n ,  int c){
	// Write your code here
	sort(positions.begin(),positions.end());
	int cows=c;
	int low=1;
	int middle;
	int high=positions[n-1]-positions[0];
	while(low<=high)
	{
		middle=(low+high)>>1;
		if(isPossible(positions,n,cows,middle))
		{
			low=middle+1;
		}
		else
		{
			high=middle-1;
		}
	}
	return high;
}
