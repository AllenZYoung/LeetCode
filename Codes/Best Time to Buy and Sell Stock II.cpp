class Solution {
public:
    int maxProfit(vector<int>& prices) {
      if (prices.size() == 0) return 0;
      int maxPro = 0;
      for (int i = 0; i < prices.size() - 1; i++) {
        if (prices[i+1] - prices[i] > 0)
          maxPro += prices[i+1] - prices[i];
      }
      return maxPro;
    }
};