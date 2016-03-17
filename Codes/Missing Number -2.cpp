class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int left = 0, right = nums.size(), mid;
        while (left < right) {
          mid = (left + right) /2;
          if (nums[mid] > mid) 
            right = mid;
          else 
            left = mid + 1;
        }
        return mid;
    }
};