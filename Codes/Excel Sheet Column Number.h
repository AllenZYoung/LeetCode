class Solution {
public:
  int titleToNumber(string s) {
  	int num = 0;
  	for (int i = 0; i < s.size(); i++) {
  		num += (char)s[i] - 'A' + 1 + num*25;
  	}     
  	return num;
  }
};
