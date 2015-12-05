class Solution {
public:
    int climbStairs(int n) {
    	int a = 1,b = 2,c = 0; 
    	if(n==1)
    		return 1;
    	else if(n==2)
    		return 2;
    	else
    	{
    		//you can set an array for loops, but it's too large
    		int i;
    		for (i = 3; i<=n; ++i)
    		{
    			c = a+b;
    			a = b;
    			b = c;	
    		}
    		return c;
    	}
        
    }
};