class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int i,j;
        if(s.size()!=t.size())
        {
            return false;
        }
        else
        {
            for(i=0;i<s.size();i++)
            {
                if(s[i]!=t[i])
                {
                    return false;
                }
            }
        }
        return true;
    }
};
