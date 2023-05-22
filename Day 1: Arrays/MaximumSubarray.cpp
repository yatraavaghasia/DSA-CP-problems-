class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        if(n==1)
        {
            return nums[0];
        }
        int m;
        m = n/2;
        int left_sum, right_sum;
        vector <int> left, right;
        for(int i=0;i<m;i++)
        {
            left.push_back(nums[i]);
        }
        for(int i=m;i<n;i++)
        {
            right.push_back(nums[i]);
        }
        left_sum = maxSubArray(left);
        right_sum = maxSubArray(right);

        int max_left, sum=0;
        max_left = INT_MIN;
        for(int i=m-1;i>=0;i--)
        {
            sum+=nums[i];
            if(sum>max_left)
            {
                max_left = sum;
            }
        }
        int max_right = INT_MIN;
        sum = 0;
        for(int j=m;j<n;j++)
        {
            sum+=nums[j];
            if(sum>max_right)
            {
                max_right = sum;
            }
        }
        int cross_sum;
        cross_sum = max_left + max_right;
        return max(cross_sum,(max(left_sum,right_sum)));
    }
};
