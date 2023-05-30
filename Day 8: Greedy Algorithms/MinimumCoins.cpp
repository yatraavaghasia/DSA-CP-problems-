//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	bool static compare(int a,int b)
	{
	    return a<b;
	}
	int minCoins(int coins[], int M, int V) 
	{ 
	    // Your code goes here
	    int mini=INT_MAX;
	    sort(coins,coins+M,compare);
	    int count=0;
	    for(int i=M-1;i>=0;i--)
	    {
	        for(int j=M-1;j>=0;j--)
	        {
    	       while(V>=coins[j])
    	        {
    	            count++;
    	            V-=coins[j];
    	           // cout<<V<<endl;
    	        }
	        }
	        if(count<mini)
    	        {
    	            mini=count;
    	        }
	    }
	    return mini;
	} 
	  
};

//{ Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int v, m;
        cin >> v >> m;

        int coins[m];
        for(int i = 0; i < m; i++)
        	cin >> coins[i];

      
	    Solution ob;
	    cout << ob.minCoins(coins, m, v) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends
