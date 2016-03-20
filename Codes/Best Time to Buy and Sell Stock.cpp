class Solution {
public:
    int maxProfit(vector<int>& prices) {
      if (prices.size() == 0) return 0;
      int maxPro = 0x80000000;
      int minPri = INT_MAX;
      for (int i = 0; i < prices.size(); i++) {
        minPri = minPri < prices[i] ? minPri : prices[i];
        maxPro = (prices[i] - minPri) > maxPro ? (prices[i] - minPri) : maxPro;
      }
      return maxPro;
    }
};