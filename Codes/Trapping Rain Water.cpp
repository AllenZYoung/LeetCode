class Solution {
public:
    int trap(vector<int>& height) {
      int left = 0, right = height.size()-1;
      int res = 0;
      int MaxL = 0, MaxR = 0;
      while (left <= right) {
        if (height[left] <= height[right]) {
          if (height[left] >= MaxL) MaxL = height[left];
          else res += MaxL-height[left];
          left++;
        } else {
          if (height[right] >= MaxR) MaxR = height[right];
          else res += MaxR - height[right];
          right--;
        }
      }
      return res;
    }
};