class Solution {
public:
    string dayOfTheWeek(int day, int month, int year) {
        int k=5;
        int y1=1971;
        int m1=1;
        int months[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
        while (y1<year){
            k+= (y1%4==0) ? 2 : 1; 
            y1++;
        }

        while (m1<month){
            if (m1==2) k+= (year%4==0) ? 29 : 28;
            else k+= months[m1];
            m1++;
        }
        k=k+day-1;
        if (year==2100){
            if (month>2) k--;
        }
        string weekdays[7]= {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
        return weekdays[k%7];

    }
};