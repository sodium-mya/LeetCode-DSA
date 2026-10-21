class Solution {
public:
    string addStrings(string num1, string num2) {
        int n1=num1.size(), n2=num2.size();
        for (int i=0; i<n1/2; i++){
            swap (num1[i],num1[n1-1-i]);
        }
        for (int i=0; i<n2/2; i++){
            swap (num2[i],num2[n2-1-i]);
        }
        string ans = "";
        int i=0, carry=0, dig=0;
        while (i<min(n1,n2)){
            dig=num1[i]+num2[i]+carry - 96;
            if (dig<10) {
                ans+=char(dig + 48);
                carry = 0;
            }
            else {
                ans += dig - 10 + 48;
                carry = 1;
            }
            i++;
        }
        while (i<max(n1,n2)){
            if (n1>n2) dig=num1[i]+carry - 48;
            else dig=num2[i]+carry - 48;
            if (dig<10) {
                ans += dig + 48;
                carry = 0;
            }
            else {
                ans += dig - 10 + 48;
                carry = 1;
            }
            i++; 
        }
        if (carry != 0) {
            ans += carry + 48;
            i++;
        }
        for (int j=0; j<i/2; j++){
            swap (ans[j],ans[i-1-j]);
        }
        return ans;
    }
};