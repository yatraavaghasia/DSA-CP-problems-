/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        // Your code here
        unordered_map <int,int> hash;
        int sum = 0, maxi = 0;
        for(int i=0;i<n;i++)
        {
            sum += A[i];
            if(sum!=0)
            {
                if(hash.find(sum)!=hash.end())
                {
                    maxi = max(maxi,i-hash[sum]);
                }
                else
                {
                    hash[sum]=i;
                }
            }
            else
            {
                maxi = i + 1;
            }
        }
        return maxi;
    }
};
