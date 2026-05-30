class Solution {
   public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int low = 0, high = 0;
        int sum = 0;

        for (high = 0; high < prices.size(); high++) {
            sum = prices[high] - prices[low];
            while(sum < 0 && low < high) {
                low++;
            }
            profit = max(profit, sum);
        }
        return profit;
    }
};
