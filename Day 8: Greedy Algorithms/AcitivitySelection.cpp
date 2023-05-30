//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        vector <pair <int,int>> times;
        for(int i=0;i<n;i++)
        {
            pair<int,int>pr;
            pr.first = end[i];
            pr.second = start[i];
            times.push_back(pr);
        }
        sort(times.begin(),times.end());
        int count=0,end1=0;
        count=1;
        end1=times[0].first;
        for(int i=0;i<n;i++)
        {
            if(times[i].second>end1)
            {
                count++;
                end1=times[i].first;
            }
        }
        return count;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends
