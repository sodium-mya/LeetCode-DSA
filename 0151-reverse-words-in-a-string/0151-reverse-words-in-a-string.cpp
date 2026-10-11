class Solution {
public:
    string reverseWords(string s) {
    bool flag = false;
    int i=0;
    while (s[0]==' '){
        s.erase(0,1);
    }
    int n=s.size();
    while (s[n-1]==' '){
        s.erase(n-1,1);
        n--;
    }

    for (i=1; s[i]!='\0'; i++){
        if (!flag && s[i-1]==' ' && s[i]==' ') flag = true;
        else if (s[i]!=' ' && flag) flag=false;
        if (flag) {
            s.erase(i,1);
            i--;
        }
    }
    n=s.size();
    for (int j=0; j<n/2; j++){
        swap(s[j],s[n-j-1]);
    }
    int a=0;
    int b,c;
    n=s.size();
    for (int j=0; j<n+1; j++){
        if (s[j]==' ' || s[j]=='\0') {
            b=a;
            c=j-1;
            while (b<c){
                swap(s[b], s[c]);
                b++;
                c--;
            }
            a=j+1;
        }
    }
    return s;
    }
};