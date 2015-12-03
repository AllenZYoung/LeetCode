typedef struct Node
{
	int id,val;
}node;
bool cmp(const Node& n1,const Node& n2)
{
	return n1.val < n2.val;
	//定义的比较函数，按照节点值（也就是输入数组值）从小到大排列
}
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    	int len = nums.size();
        Node nodes[len];
        for(int i = 0 ; i<len ; i++ )
        {
        	nodes[i].id = i+1;//不是从0开始，而是从1开始的索引。
        	nodes[i].val = nums[i];
        }
        sort(nodes,nodes+len,cmp);
        int ptr1 = 0,ptr2 = len-1;//设置头尾指针
        std::vector<int> ans;
        while(ptr1<ptr2)
        {
        	if(nodes[ptr1].val+nodes[ptr2].val == target)
        	{
        		if(nodes[ptr1].id>nodes[ptr2].id)
        			swap(nodes[ptr1].id,nodes[ptr2].id);
        		ans.push_back(nodes[ptr1].id);
        		ans.push_back(nodes[ptr2].id);//将答案放进ans
                return ans;
        	}
        	else if(nodes[ptr1].val+nodes[ptr2].val < target)
        		ptr1++;//向后移动头指针
        	else
        		ptr2--;//向前移动尾指针
        }
    }
};

