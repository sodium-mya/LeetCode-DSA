class Solution {
public:
    bool isPalindrome(string s) {
        string p="";
        for (int i=0; i<s.length(); i++){
            if (isalnum(s[i])){
                p+=tolower(s[i]);
            }
        }
        int n=p.length();
        for (int j=0; j<n/2; j++){
            if (p[j]!=p[n-j-1]) return false;
        }
        return true;
    }
};