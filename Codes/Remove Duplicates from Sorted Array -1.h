class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    	if(nums.size()==0)
    		return 0;
    	else
    	{
    		int index = 0;
    		int len = nums.size();
    		for(int i = 0;i<len;i++)
    		{
    			if(nums[index] != nums[i])
    			{
    				nums[++index] = nums[i];//if two elements are not same, move it
    			}
    		}
    		int ans = index + 1;
    		return ans;//new length of array without duplicates
    	}
	}
};