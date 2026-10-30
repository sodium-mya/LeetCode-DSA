class Solution {
public:
    vector<string> generateParenthesis(int n) {
        if (n==1) return {"()"};
        else if (n==0) return {""};
        //vector<string> prev = generateParenthesis(n-1);
        vector<string> ans;
        for (int i=0; i<n; i++){
            for (string x: generateParenthesis(i)){
                for (string y:generateParenthesis(n-i-1)){
                    ans.push_back('('+x+')'+y);
                }
            }
        }
        return ans;
    }
};