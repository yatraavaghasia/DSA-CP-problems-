class Solution {
public:
bool bfs(int node, int col, vector<int>& colors, vector<vector<int>>&graph){
    queue <int> q;
    q.push(node);
    colors[node]=0;
    while(!q.empty()){
        int n = q.front();
        q.pop();
        col=!col;
        for(auto& it:graph[n]){
            if(colors[it]==-1){
                q.push(it);
                colors[it]=1-colors[n];
            } else if(colors[it]==colors[n]){
                return false;
            }
        }
    }
    return true;
}
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector <int> colors(n,-1);
        for(int i=0;i<n;i++){
            if(colors[i]==-1){
                if(bfs(i,0,colors,graph)==false) return false;
            }
        }
        return true;
    }
};
