
class Solution {
public:
    int reverse(int x) {
        /*越是简单的题目越要注意细节。
        一般来说整数的处理问题要注意的有两点，一是符号，一是越界溢出问题*/
        long nReverse = 0;//弄个long纯粹是避免溢出
        while (x != 0) {//如果把数字当做字符串反转的话，对于末位为0的数字会比较麻烦，故不采取这种方案
            nReverse = nReverse * 10 + x % 10;//逐步取X的末位
            x /= 10;//把X截断，从最低位开始直到只剩下最高位
        }   
        if(nReverse>INT_MAX||nReverse<INT_MIN)
            return 0;//溢出返回0
                //assume that your function returns 0 when the reversed integer overflows.
        else
            return nReverse;
    }
};