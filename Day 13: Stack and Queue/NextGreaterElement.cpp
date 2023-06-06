class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map <int, int> map;
        stack <int> s;
        s.push(INT_MAX);
        int n = nums2.size()-1;
        for(int i=n;i>=0;i--)
        {
            int curr = nums2[i];
            if(curr)
            while(curr>=s.top())
            {
                s.pop();
            }
            if(s.top()==INT_MAX)
            {
                map[nums2[i]]=-1;
            }
            else
            {
                map[nums2[i]]=s.top();
            }
            s.push(curr);
        }
        vector <int> ans;
        for(auto i: nums1)
        {
            ans.push_back(map[i]);
        }
        return ans;
    }
};
