class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int max = prices[n-1];
        int profit = 0;
        for(int i=n-1;i>=0;i--){
            if(max<=prices[i]){
                max = prices[i];
            }
            int curr = max-prices[i];
            if(curr>=profit){
                profit =curr;
            }
        }
        return profit;
    }
};
