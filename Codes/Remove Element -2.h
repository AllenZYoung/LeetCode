class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
    	//use std::remove,which returns a past-the-end iterator for the new end of the range.
    	auto end = remove(nums.begin(),nums.end(),val);
    	return distance(nums.begin(),end);
    	//distance returns "distance" from a iterator to another.
    }
};