class Solution {
public:
    char kthCharacter(int k) {
        string word = "a";
        while (k>word.size()){
            int m=word.size();
            for (int i=0; i<m; i++){
                if (char(word[i])!=122) word= word+ char(word[i]+1);
                else word = word + "a";
            }
        }
        return word[k-1];
    }
};