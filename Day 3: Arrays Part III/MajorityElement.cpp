class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0, element;
        for(int i=0;i<nums.size();i++)
        {
            if(count==0)
            {
                element = nums[i];
                count=1;
            }
            else if(element == nums[i])
            {
                count++;
            }
            else if(nums[i]!=element)
            {
                count--;
            }
        }
        return element;
    }
};
