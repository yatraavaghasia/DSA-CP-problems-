#include<bits/stdc++.h>
class Solution {
public:
    int romanToInt(string s) {
        int i,count=0;
        unordered_map<char,int> map{
            {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}
        };
        for(i=0;i<s.size();i++)
        {
            if(map[s[i]]<map[s[i+1]])
            {
                count-=map[s[i]];
            }
            else
            {
            count+=map[s[i]];
            }
        }
        return count;
    }
};
