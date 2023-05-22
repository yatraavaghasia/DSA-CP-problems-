class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        next_permutation(nums.begin(),nums.end());
        cout<<"[";
        for(int i=0;i<nums.size();i++)
        {
            if(i!=nums.size()-1)
            {
                cout<<nums[i]<<",";
            }
            else
            {
                cout<<nums[i]<<"]";
            }
        }
    }
};
