class Solution {
public:
    int hammingWeight(uint32_t n) {
      int count = 0;
      while (n) {
        count += n & 0x1;
        n >>= 1;
      }
      return count;
    }
};