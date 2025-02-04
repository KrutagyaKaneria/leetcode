class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice = prices[0];
        int profit = 0;
        for(int i=0 ; i<prices.size(); i++){
            if(minprice > prices[i]){
                minprice = prices[i];
            }
            if((prices[i] - minprice) > profit){
                profit = prices[i] - minprice;
            }
        }
        return profit;
    }
};