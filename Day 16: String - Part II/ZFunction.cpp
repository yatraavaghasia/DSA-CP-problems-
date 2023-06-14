class Solution {
public:
vector <int> z_func(string s)
{
    int n = s.length();
    int L,R,k;
    L = R = 0;
    vector <int> z(n);
    for(int i=1;i<n;i++)
    {
        if(R<i)
        {
            L=R=i;
            while(R<n && s[R-L]==s[R])
            {
                R++;
            }
            z[i]=R-L;
            R--;
        }
        else
        {
            k = i-L;
            if(z[k]<R-i+1)
            {
                z[i]=z[k];
            }
            else
            {
                L=i;
                while(R<n && s[R-L]==s[R])
                {
                    R++;
                }
                z[i]=R-L;
                R--;
            }
        }
    }
    return z;
}
    int strStr(string haystack, string needle) {
        string s = needle + "$" + haystack;
        int l = s.length();
        vector <int> z = z_func(s);
        for(int i=0;i<l;i++)
        {
            if(z[i]==needle.length())
            {
                return i-needle.length()-1;
            }
        }
        return -1;
    }
};
