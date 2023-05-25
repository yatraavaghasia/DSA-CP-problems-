class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int,int> map;
        int i,j;
        int reqValue,num;
        for(i=0;i<nums.size();i++)
        {
            num = nums[i];
            reqValue = target - num;
            if(map.find(reqValue)!=map.end())
            {
                auto k = map.find(reqValue);
                j = k->second;
                return {i,j};
            }
            map[num]=i;
        }
        return {};
    }
};
