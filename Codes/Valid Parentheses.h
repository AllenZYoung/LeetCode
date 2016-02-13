class Solution {
public:
  bool isValid(string s) {
    string left = "([{";
    string right = ")]}";
    stack<char> stk;
    for (int i = 0; i < s.size(); i++) {
      if (left.find(s[i]) != string::npos) {
        stk.push(s[i]);
      } else {
        if (stk.empty() || stk.top() != left[right.find(s[i])])
          return false;
        else
          stk.pop();
      }
    }    
    return stk.empty();
  }
};
