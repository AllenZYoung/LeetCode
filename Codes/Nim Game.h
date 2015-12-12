class Solution {
public:
    bool canWinNim(int n) {
    	//look at here!
    	//https://www.cs.umd.edu/~gordon/ysp/nim.pdf
    	if(n%4==0)
    		return false;
    	else
    		return true;      
    }
};