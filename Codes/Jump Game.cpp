class Solution {
public:
    bool canJump(vector<int>& nums) {
      int n = nums.size();
      int maxIndex = 0;
        for (int i=0; i<n; i++) {
            if(i > maxIndex || maxIndex >= (n-1)) 
              break;
            maxIndex = max(maxIndex, i+ nums[i]);
        } 
        return maxIndex >= n-1;
    }
};