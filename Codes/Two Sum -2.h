typedef struct Node
{
	int id,val;
}node;
bool cmp(const Node& n1,const Node& n2)
{
	return n1.val < n2.val;
	//define a compare function, sort the nodes by values from low to high 
}        

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    	int len = nums.size();
        Node nodes[len];
        for(int i = 0 ; i<len ; i++ )
        {
        	nodes[i].id = i+1;//the index starts from "1", not zero
        	nodes[i].val = nums[i];
        }
        sort(nodes,nodes+len,cmp);
        int ptr1 = 0,ptr2 = len-1;//set pointer to head and tail
        std::vector<int> ans;
        while(ptr1<ptr2)
        {
        	if(nodes[ptr1].val+nodes[ptr2].val == target)
        	{
        		if(nodes[ptr1].id>nodes[ptr2].id)
        			swap(nodes[ptr1].id,nodes[ptr2].id);
        		ans.push_back(nodes[ptr1].id);
        		ans.push_back(nodes[ptr2].id);//push the answers into ans
                return ans;
        	}
        	else if(nodes[ptr1].val+nodes[ptr2].val < target)
        		ptr1++;//move head pointer
        	else
        		ptr2--;//move end pointer
        }
    }
};

