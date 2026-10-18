class Solution {
public:
    string intToRoman(int num) {
        string result="";
        int rem=1;
        while (num>=1000){
            num-=1000;
            result+="M";
        }
        if (num/100==4) result+="CD";
        else if (num/100==9) result+="CM";
        else if (num/100>=5) {
            result+="D";
            result.append((num/100-5),'C');
        }
        else if (num/100<5) result.append((num/100),'C');

        num=num%100;

        if (num/10==4) result+="XL";
        else if (num/10==9) result+="XC";
        else if (num/10>=5) {
            result+="L";
            result.append((num/10-5),'X');
        }
        else if (num/10<5) result.append((num/10),'X');

        num=num%10;

        if (num==4) result+="IV";
        else if (num==9) result+="IX";
        else if (num>=5) {
            result+="V";
            result.append((num-5),'I');
        }
        else if (num<5) result.append((num),'I');        

        return result;
    }
};