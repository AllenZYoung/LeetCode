class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
    	//using STL map
    	unordered_map<int,bool> m;
    	for(auto it : nums){
    		if(m.find(it) != m.end())
    			return true;
    		m[item] = true;
    	}
    	return false;
    }
};