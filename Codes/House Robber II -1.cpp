class Solution {
public:
    int rob(vector<int>& nums) {
      int n = nums.size(), ans = 0;
      if (n == 0) {
      } else if (n == 1) {
        return nums[0];
      } else {
        ans = std::max(robber(nums,0,n-2),robber(nums,1,n-1));
      }
      return ans;
    }

    int robber(vector<int>& nums, int a, int b) {
      int n = nums.size(), pre = 0, cur = 0;
      for (int i = a; i <= b; i++) {
        int temp = std::max(pre+nums[i], cur);
        pre = cur;
        cur = temp;
      }
      return cur;
    }
};