class Solution {
public:
    int maxProfit(vector<int>& prices) {
       
        int profit = 0, low_price = prices[0];

        for(int i=1;i<prices.size();i++){

                if(prices[i]<=low_price)
                    low_price = prices[i];
                else
                    profit = max(profit, prices[i]-low_price);
        }
        return profit;

    }
};
