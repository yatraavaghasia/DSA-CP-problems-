class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i,j,k,n=nums.size();
        long long sum;
        vector <vector<int>> ans;
        for(i=0;i<n;i++)
        {
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            j=i+1;
            k=n-1;
            while(j<k)
            {
                sum=nums[i];
                sum+=nums[j];
                sum+=nums[k];
                if(sum==0)
                {
                    vector <int> temp = {nums[i],nums[j],nums[k]};
                    ans.push_back(temp);
                    j++;
                    k--;
                    while (j < k && nums[j] == nums[j - 1]) j++;
                    while (j < k && nums[k] == nums[k + 1]) k--;
                }  
                else if(sum>0)
                {
                    k--;
                }
                else
                {
                    j++;
                }
            }
        }
        return ans;
    }
};
