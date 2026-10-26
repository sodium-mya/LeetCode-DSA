class Solution {
public:
    vector<int> grayCode(int n) {
        if (n==1) return {0,1};
        vector<int> prev= grayCode(n-1);
        int half = prev.size();
        vector<int> ans = prev;
        for (int i=half-1; i>=0; i--){
            ans.push_back(prev[i]+half);
        }
        return ans;
    }
};