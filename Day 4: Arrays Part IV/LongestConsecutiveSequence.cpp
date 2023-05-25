class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set <int> hash;
        for(int i=0;i<nums.size();i++)
        {
            hash.insert(nums[i]);
        }
        int longestStreak = 0;
        for(int i=0;i<nums.size();i++)
        {
            if(!hash.count(nums[i]-1))
            {
                int current = nums[i];
                int currentStreak = 1;
                while(hash.count(current+1))
                {
                    current+=1;
                    currentStreak+=1;
                }
                            longestStreak = max(longestStreak,currentStreak);
            }
        }
        return longestStreak;
    }
};
