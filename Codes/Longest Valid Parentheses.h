class Solution {
public:
  int longestValidParentheses(string s) {
    stack<int> stk;
    int last = -1, MaxLen = 0;
    for (int i = 0; i < s.size(); i++) {
      if (s[i] == '(') {
        stk.push(i);
      } else if (s[i] == ')') {
        if (!stk.empty()) {// stk not empty
          stk.pop();
          if (stk.empty()) {// here we get a valid queue
            MaxLen = max(i - last, MaxLen);
          } else {// 
            MaxLen = max(i-stk.top(), MaxLen);
          }
        } else {// stk is empty 
          last = i;
        }
      }
    }
    return MaxLen;  
  }
};
