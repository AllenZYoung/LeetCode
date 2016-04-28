class Solution {
public:
    int findMin(vector<int>& nums) {
      int head = 0, tail = nums.size()-1;
      while (head < tail) {
        if (nums[head] < nums[tail])
          return nums[head];
        int mid = (head + tail) / 2;
        if (nums[mid] >= nums[head]) {
          head = mid + 1;
        } else {
          tail = mid;
        }
      }

      return nums[head];
    }
};