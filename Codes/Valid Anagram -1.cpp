class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) 
            return false;

        int n = s.length();
        int counts1[26] = {0};//store counts for every letter
        int counts2[26] = {0};
        for (int i = 0; i < n; i++) { 
            counts1[s[i] - 'a']++;
        }
        for (int i = 0; i < n; i++) {
            counts2[t[i] - 'a']++;
        }

        for (int i = 0; i < 26; i++)
            if (counts1[i] != counts2[i]) 
                return false;

        return true;
    }
};