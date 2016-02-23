class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int i = 0, MaxSum = 0x80000000, ThisSum = 0;
        for (; i < nums.size(); i++) {
            ThisSum += nums[i];
            if (ThisSum > MaxSum)
                MaxSum = ThisSum;
            if (ThisSum < 0)
                ThisSum = 0;
        }
    return MaxSum; 
    }
};
