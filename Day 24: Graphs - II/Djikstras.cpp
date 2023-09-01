//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        // Code here
        set <pair <int,int>> st;
        
        vector <int> dist (V,1e9);
        dist[S]=0;
        st.insert({0,S});
        
        while(!st.empty())
        {
            auto it = *(st.begin());
            int dis = it.first;
            int node = it.second;
            st.erase(it);
            for(auto x:adj[node])
            {
                int wt = x[1];
                int adj_node = x[0];
                
                int new_dist = wt+dis;
                
                if(new_dist<dist[adj_node]){
                    if(dist[adj_node]!=1e9) st.erase({dist[adj_node],adj_node});
                    dist[adj_node]=new_dist;
                    st.insert({dist[adj_node],adj_node});
                }
            }
        }
        return dist;
    }
};


//{ Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj[V];
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1,t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }
        int S;
        cin>>S;
        
        Solution obj;
    	vector<int> res = obj.dijkstra(V, adj, S);
    	
    	for(int i=0; i<V; i++)
    	    cout<<res[i]<<" ";
    	cout<<endl;
    }

    return 0;
}


// } Driver Code Ends
