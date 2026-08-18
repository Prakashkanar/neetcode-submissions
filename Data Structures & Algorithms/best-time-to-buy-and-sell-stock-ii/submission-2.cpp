class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0, buy = 0, sell = 0;
        bool set = 0;
        for(int i = 0; i < prices.size(); i++){
            if(set == 0 && ( i == prices.size() - 1 || prices[i] < prices[i+1] )){
                buy = prices[i];
                set = 1;
            }
            
            if(( i == prices.size() - 1 || prices[i] >= prices[i+1]) && set == 1){
                sell = prices[i];
                // cout << sell << " " << buy << endl;
                profit += sell - buy;
                sell = buy = 0;
                set = 0;
            }
        }

        return profit;
    }
};