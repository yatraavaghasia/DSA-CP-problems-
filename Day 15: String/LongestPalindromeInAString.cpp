class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        bool table[n][n];
        memset(table, 0, sizeof(table));
        int start = 0;
        int maxlength = 1;
        for(int i=0;i<n;i++)
        {
            table[i][i]=true;
            if(i<n-1)
            {
                if(s[i]==s[i+1])
                {
                    table[i][i+1]=true;
                    start = i;
                    maxlength = 2;
                }
            }
        }
        for(int k=3;k<=n;k++)
        {
            for(int i=0;i<n-k+1;i++)
            {
                int j = i+k-1;
                if(table[i+1][j-1] && s[i]==s[j])
                {
                    table[i][j]=true;
                    if(k>maxlength)
                    {
                        start=i;
                        maxlength=k;
                    }
                }
            }
        }
        string ans = s.substr(start,maxlength);
        // cout<<maxlength<<endl;
        return ans;
    }
};
