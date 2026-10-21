class Solution {
public:
    int maxPower(string s) {
        int max_pow=0, pow=1;
        if (s.size()==1) return 1;
        for (int i=1; s[i]!='\0'; i++){
            if (s[i]==s[i-1]) pow++;
            else {
                if (pow>max_pow) max_pow = pow;
                pow = 1;
            }
        }
        if (pow>max_pow) max_pow = pow;
        return max_pow;
    }
};