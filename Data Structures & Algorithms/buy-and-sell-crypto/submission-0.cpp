class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int minPrize = prices[0];
        int maxProfit = 0;
        for(int i = 0; i < prices.size(); i++){
            if(prices[i] < minPrize)
                minPrize = prices[i];

            profit = prices[i] - minPrize;

            if(profit > maxProfit)
                maxProfit = profit;
        }
        return maxProfit;
    }
};
