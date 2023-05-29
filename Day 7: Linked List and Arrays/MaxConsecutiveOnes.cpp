class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int sum=0,max=0;
        for(int i=0;i<nums.size();i++)
        {
           if(nums[i]==1)
           {
               sum++;
               if(sum>max)
               {
                   max=sum;
               }
           }
           else if(nums[i]==0)
           {
               sum=0;
           }
        }
        return max;
    }
};
