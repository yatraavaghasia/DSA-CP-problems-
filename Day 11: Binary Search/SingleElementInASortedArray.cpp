class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low=0;
        int high=nums.size()-2;
        int mid;
        while(low<=high)
        {
            mid=(low+high)/2;
            if(mid%2==0)
            {
                if(nums[mid+1]!=nums[mid])
                {
                    high=mid-1;
                }
                else
                {
                    low=mid+1;
                }
            }
            else
            {
                if(nums[mid+1]==nums[mid])
                {
                    high=mid-1;
                }
                else
                {
                    low=mid+1;
                }
            }
        }
        return nums[low];
    }
};
