class Solution {
public:
    const int helper1 = 0x55555555;
    const int helper2 = 0x33333333;
    const int helper3 = 0x0F0F0F0F;
    const int helper4 = 0x00FF00FF;
    const int helper5 = 0x0000FFFF;
    int hammingWeight(uint32_t n) {
      n = (n & helper1) + (n >>  1 & helper1); // put count of each  2 bits into those  2 bits 
      n = (n & helper2) + (n >>  2 & helper2); // put count of each  4 bits into those  4 bits 
      n = (n & helper3) + (n >>  4 & helper3); // put count of each  8 bits into those  8 bits 
      n = (n & helper4) + (n >>  8 & helper4); // put count of each 16 bits into those 16 bits 
      n = (n & helper5) + (n >> 16 & helper5); // put count of each 32 bits into those 32 bits 
      return n;  
    }
};