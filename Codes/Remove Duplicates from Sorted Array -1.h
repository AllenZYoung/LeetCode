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
    				nums[++index] = nums[i];//当两个元素不等，向前挪动
    			}
    		}
    		int ans = index + 1;
    		return ans;//即去重后的数组长度
    	}
	}
};