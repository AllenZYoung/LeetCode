class Solution {
public:
	void moveZeroes(vector<int>& nums) {
		// vector<int>::iterator end = remove(nums.begin(), nums.end(), 0);
		// int j = 0, NumsOfZero = 0;
		// for (int i = 0; i < nums.size(); i++) {
		// 	if (nums[i] != 0) {
		// 		nums[j] = nums[i];
		// 		j++;
		// 	}
		// }

		// int EndIndex = nums.size() - 1;
		// int NumsOfZero = EndIndex - (distance(nums.begin(),end));
		// for (int i = nums.size() - NumsOfZero - 1; i < nums.size(); i++) {
		// 	nums[i] = 0;
		// }

		int j = 0;
		for (int i = 0; i < nums.size(); i++) {
			if (nums[i] != 0) {
				swap(nums[i], nums[j]);
				j++;
			}
		}
  }
};
