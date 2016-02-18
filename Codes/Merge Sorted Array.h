// class Solution {
// public:
//   void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//   	int indexa = m-1, indexb = n-1, indexcur = m+n-1;
//   	while (indexa >= 0 && indexb >= 0) {
//   		nums1[indexcur--] = nums1[indexa] > nums2[indexb] ? nums1[indexa--] : nums2[indexb--];
//   	}  
//   	while (indexb >= 0)
//   		nums1[indexcur--] = nums2[indexb--];
//   }
// };
class Solution {
public:
  void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
  	int i1 = m-1, i2 = n-1, icur = m+n-1;
  	while (i2 >= 0) {
  		if (i1 < 0 || nums2[i2] > nums1[i1]) {
  			nums1[icur] = nums2[i2];
  			i2--;
  		} else {
  			nums1[icur] = nums1[i1];
  			i1--;
  		}
  		icur--;
  	}
  }
};
