class Solution {
public:
    void sortColors(vector<int>& nums) {
        int red,white,blue;
        red = 0;
        white = 0;
        blue = 0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                red++;
            }
            else if(nums[i]==1)
            {
                white++;
            }
            else
            {
                blue++;
            }
        }
        int i=0;
        cout<<"[";
        while(i<red)
        {
            nums[i]=0;
            cout<<nums[i]<<",";
            i++;
        }
        i=0;
        while(i<white)
        {
            nums[i+red]=1;
            cout<<nums[i]<<",";
            i++;
        }
        i=0;
        while(i<(blue))
        {
            nums[i+red+white]=2;
            cout<<nums[i]<<",";
            i++;
        }
        cout<<"]";
    }
};
