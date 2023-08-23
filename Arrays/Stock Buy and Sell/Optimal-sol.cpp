class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price = prices[0];
        int maxProfit = 0;
        for(int i=1; i<prices.size(); i++){
            maxProfit = max(maxProfit, prices[i]-min_price);
            min_price = min(min_price, prices[i]);
        }
        return maxProfit;
    }
};
