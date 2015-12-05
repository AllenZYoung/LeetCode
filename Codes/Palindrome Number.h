class Solution {
public:
    bool isPalindrome(int x) {
    int first,last;
    if(x<0)
    	return false;
    else
    {
    	int dig = 1;
    	while(x/dig>=10)
    	{
    		dig*=10;
    	}
    	while(x!=0)
    	{
    		first = x/dig;
    		last = x%10;
    		if(first!=last)
    		{
    			return false;
    			break;
    		}
    		x = (x%dig)/10;
    		dig/=100;
    	}
    	return true;
    }    
};