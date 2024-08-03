class Solution {
public:
bool dfs(int node, int col, vector<int>& colors, vector<vector<int>>&graph){
    colors[node]=col;
    for(auto& it:graph[node]){
        if(colors[it]==-1){
            if(dfs(it,!col,colors,graph)==false) return false;
        } else if(colors[it]==col){
            return false;
        }
    }
    return true;
}
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector <int> colors(n,-1);
        for(int i=0;i<n;i++){
            if(colors[i]==-1){
                if(dfs(i,0,colors,graph)==false) return false;
            }
        }
        return true;
    }
};
