class Solution {
public:
void helper(vector <int>& nums, vector <int>& ds, vector <vector<int>>&ans)
{
    if(nums.size()==0)
    {
        ans.push_back(ds);
        return;
    }
    for(int i=0;i<nums.size();i++)
    {
        ds.push_back(nums[i]);
        vector <int> num;
        num=nums;
        num.erase(num.begin()+i);
        helper(num,ds,ans);
        ds.pop_back();
    }
    return;
}
    vector<vector<int>> permute(vector<int>& nums) {
        vector <vector<int>> ans;
        vector <int> ds;
        helper(nums,ds,ans);
        return ans;
    }
};
