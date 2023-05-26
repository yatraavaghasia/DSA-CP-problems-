class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map <char,int> hash;
        int left = 0, right = 0;
        int len = 0;
        int n = s.size();
        while(right<n)
        {
            if(hash.find(s[right])!=hash.end())
            {
                auto j = hash.find(s[right]);
                int k = j->second;
                left = max(left,k+1);
            }
            hash[s[right]]=right;
            len = max(len, right-left+1);
            right++;
        }
        return len;
    }
};
