class Solution {
public:
    string reverseString(string s) {
      int slen = s.size();
      if (slen <= 1) return s;
      string left = s.substr(0, slen/2);//substr() func can get the sub string
      string right = s.substr(slen/2, slen);
      return reverseString(right) + reverseString(left); // use plus to insert left after right
    }
};