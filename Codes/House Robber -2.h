class Solution {//O(n) time, O(1) space
public:
  int rob(vector<int>& nums) {
    int n = nums.size(), odd = 0, even = 0;
    for (int i = 0; i < n; i++) {
      if (i % 2 == 0) {
        even = max(odd, even+nums[i]);
      } else {
        odd = max(even, odd+nums[i]);
      }
    }
  return max(odd, even);
  }
};
