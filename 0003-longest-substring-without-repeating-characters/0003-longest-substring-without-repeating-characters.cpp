class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector <int> lastIndex(128,-1);
        int l=0, n=s.size(), maxlen=0;
        for (int r=0; r<n; r++){
            if (lastIndex[s[r]] >= l){
                l = lastIndex[s[r]] + 1;
            }
            lastIndex[s[r]] = r;
            maxlen = max (maxlen, r-l+1);
        }
        return maxlen;
    }
};