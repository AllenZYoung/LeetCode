class Solution {
public:
    int removeElement(vector<int>& nums, int val){
    	int len = nums.size();
    	int ptr = 0;
    	int newLen = 0;
    	for(int i = 0;i<len;i++)
    	{
    		if(nums[i]!=val)
    		{
    			nums[ptr++]=nums[i];
    		}
    	}
    	newLen = ptr;
    	return newLen;
    }
};