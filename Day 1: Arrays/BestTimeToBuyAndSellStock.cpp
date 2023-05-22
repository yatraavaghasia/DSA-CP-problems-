class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = prices[0];
        int profit = 0;
        int i;
        for(i=0;i<prices.size();i++)
        {
            if(prices[i]<min)
            {
                min = prices[i];
            }
            else if(prices[i]-min>profit)
            {
                profit = prices[i]-min;
            }
        }
        return profit;
    }
};
