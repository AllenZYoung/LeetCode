class Solution {
public:
	int climbStairs(int n) {
		//just use the arithmetic formula for Fibonacci numbers
		const double s = sqrt(5);
		return floor((pow((1+s)/2, n+1) + pow((1-s)/2, n+1))/s + 0.5);
	}
};