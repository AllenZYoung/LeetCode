
class Solution {
public:
    string addBinary(string a, string b) {
    	string ans = "";//initialize the ans string
    	const int len = a.length()>b.length() ? a.length() : b.length();
    	//len is the longer one
    	reverse(a.begin(),a.end());
    	reverse(b.begin(),b.end());
    	int flag = 0;//carry flag
    	for (int i = 0; i < len; ++i)
    	{
    		int ai = i<a.length()?a[i]-'0':0;
    		int bi = i<b.length()?b[i]-'0':0;
    		int val = (ai+bi+flag)%2;
    		flag = 	(ai+bi+flag)/2;//looks like an "overflow"
    		ans.insert(ans.begin(),(char)(val+'0'));
    		//val can be only 0 or 1
    	}
    	if(flag==1)
    	{
    		ans.insert(ans.begin(),'1');
    	}
    	return ans;
        
    }
};