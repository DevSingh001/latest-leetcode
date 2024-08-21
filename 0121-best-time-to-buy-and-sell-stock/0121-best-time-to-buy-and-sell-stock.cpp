class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0;  // Variable to store the maximum profit.
        int minPrice = INT_MAX;  // Initialize minPrice to the maximum possible integer value.
        
        // Traverse the array from the beginning to the end.
        for (int i = 0; i < prices.size(); i++) {
            // Update the minimum price if the current price is lower.
            if (prices[i] < minPrice) {
                minPrice = prices[i];
            }
            // Calculate the potential profit for the current day.
            int profit = prices[i] - minPrice;
            // Update the maximum profit if the current profit is higher.
            if (profit > ans) {
                ans = profit;
            }
        }
        return ans;
    }
};
