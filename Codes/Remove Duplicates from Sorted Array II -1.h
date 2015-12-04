class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    	if(nums.size()<=2)
    		return nums.size();
    	else
    	{
    		int index = 2,flag = 0;
    		int len = nums.size();
    		for(int i = 2;i<len;i++)
    		{
    			if(nums[index-2] != nums[i])
    			{
    				nums[index++] = nums[i];//当两个元素不等，向前挪动
    			}
    		}
    		return index;//即去重后的数组长度
    	}
	}
};