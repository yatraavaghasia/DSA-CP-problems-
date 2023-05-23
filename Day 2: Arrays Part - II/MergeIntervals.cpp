class Solution {
public:
    bool sortcol(const vector<int>& v1, const vector<int>& v2)
{
    return v1[0] < v2[0];
}
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int i,j,n;
        int start,end,endj;
        n = intervals.size();
        vector < vector <int> > ans;
        ans.push_back(intervals[0]);
        for(i=0;i<n;i++)
        {
            if(ans.empty()||intervals[i][0]>ans.back()[1])
            {
                ans.push_back(intervals[i]);
            }
            else
            {
                ans.back()[1] = max(ans.back()[1],intervals[i][1]);
            }
        }
        return ans;
    }
};
