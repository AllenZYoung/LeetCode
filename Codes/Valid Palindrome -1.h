class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(), s.end(),s.begin(),::tolower);
        /*
        	函数原型：
        	transform(InputIt first1, InputIt last1, OutputIt d_first,
            		UnaryOperation unary_op );
            first1和last1给定了要转换的范围，d_first是destination的first,可以与
            first1或last1相同。

            Plain tolower is nice for ASCII string, but it will not lowercase a latin-1 or utf-8 string correctly. 

        */
        auto left = s.begin(),right = s.end();//auto类型
        //auto关键字适用于类型冗长复杂、变量使用范围专一时，使程序更清晰易读

        while(left<right)
        {
        	if(!isalnum(*left))//isalnum()判断是否为数字或字母
        		left++;
        	else if(!isalnum(*right))
        		right--;
        	else if(*left != *right)
        		return false;//一旦发现一个对称位置上的字符不同，则不是回文串
        	else
        		left++,right--;//向中间位置移动
        }
    return true;
   }
};