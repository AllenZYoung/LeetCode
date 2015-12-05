class Solution {
public:
    int singleNumber(vector<int>& nums) {
    	int ans = nums[0];
/*    	for(auto it = ++nums.begin();it!=nums.end();it++)
    	{
    		ans = ans ^ (*it);//if you'd like to use iterator...
    	}
    	return ans;*/
    	for(int i = 1;i<nums.size();i++)
    	{
    		ans = ans ^ nums[i];
    	}
    	return ans;
    }
};