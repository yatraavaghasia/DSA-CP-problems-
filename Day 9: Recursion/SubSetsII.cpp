class Solution {
public:
    void subsetHelper(int index, vector <int>&nums, int n, vector <int>&ds, vector <vector<int>>&ans)
    {
        ans.push_back(ds);
        for(int i=index;i<n;i++)
        {
            if(i!=index && nums[i]==nums[i-1]) continue;
            ds.push_back(nums[i]);
            subsetHelper(i+1,nums,n,ds,ans);
            ds.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        vector <vector <int>> ans;
        vector <int> ds;
        subsetHelper(0,nums,n,ds,ans);
        return ans;
    }
};
