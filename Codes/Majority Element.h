class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candi = 0, votes = 0;
        for (int i = 0; i < nums.size(); ++i)
        {
        	if(votes == 0){
        		candi = nums[i];
        		votes++;
        	}
        	else if(nums[i]==candi)
        	{
        		votes++;
        	}
        	else
        		votes--;
        }
        return candi;
}

};