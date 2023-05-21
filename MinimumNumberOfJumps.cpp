// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
        // Your code here
        if(n<=1)
        {
            return 0;
        }
        if(arr[0]==0)
        {
            return -1;
        }
        int maxreach = arr[0];
        int steps = arr[0];
        int jumps = 1;
        for(int i=1;i<n;i++)
        {
            if(i==n-1)
            {
                return jumps;
            }
            maxreach = max(maxreach, i+ arr[i]);
            steps--;
            if(steps == 0)
            {
                jumps++;
                if(i>=maxreach)
                {
                    return -1;
                }
                steps = maxreach - i;
            }
        }
        return -1;
    }
};
