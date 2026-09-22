class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0];
        int pro = 0;

        for(int price : prices){
            minPrice = min(minPrice , price);
            pro = max(pro , price - minPrice);
        }
        return pro;
    }
};
