class Solution {
public:
    int maxArea(vector<int>& height) {
        int first = 0;
	    int end = height.size() - 1;
	    int result = INT_MIN;
	    while (first < end) 
	    {
	    	int width = end - first;
	    	int board = height[end]<height[first]?height[end]:height[first];
		    int area = board*width;
		    result = result>area?result:area;
		    if (height[first] <= height[end]) 
		    	first++;

	    	else
	    		end--;
	    }
	    return result;
	    }
};