class Solution {
public:
    int compress(vector<char>& chars) {
        int count=1, i=1;
        int n=chars.size();
        while (i<n){
            if (chars[i-1] == chars[i]) {
                count++;
                chars.erase(chars.begin()+i);
                n--;
                i--;
            }
            else {
                if (count != 1) {
                    int digit=0;
                    while (count > 0){
                        chars.insert(chars.begin() + i, count%10 + 48);
                        count/=10;
                        n++;
                        i++;
                        digit++;
                    }
                    int l=i-digit, r=i-1;
                    while (l<r){
                        swap(chars[l],chars[r]);
                        l++;
                        r--;
                    }
                count = 1;
                }
            }
            i++;
        }
        
        if (count!=1) {
            int digit=0;
            while (count > 0){
                chars.insert(chars.begin() + n, count%10 + 48);
                count/=10;
                n++;
                i++;
                digit++;
            }
            int l=i-digit, r=i-1;
            while (l<r){
                swap(chars[l],chars[r]);
                l++;
                r--;
            }
        }
        
        return n; 
    }
};