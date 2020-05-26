#include <iostream>

using namespace std;

bool checkYear(int x){
    return ( x%400 == 0 || ((x%100 != 0) && (x%4 == 0)));
}

int CheckDayOfmonth(int x, int y){

    int DayofMonth[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

    if (checkYear(x)) DayofMonth[2] = 29;
    return DayofMonth[y];
}

class Day{
private:
    long long day,month,year;
public:

    void nhap(){

        cin >> day >> month >> year;

        day = abs(day);
        month = abs(month);
        year = abs(year);

        month = (month) % 12; if (month == 0) {month = 12;}
        if (day > CheckDayOfmonth(year, month))
        {
            day = 1;
        }
    }

    void operator+(int x){
        day += x;
    }

    void operator-(int x){
        day -= x;
    }

    long long changeDay(){
        long long result = 0;

        for (int i = 0; i < year; i++){
            if (checkYear(i)){ result += 366;}
            else{result += 365;}
        }

        for (int i = 1; i < month; i++){
            result += CheckDayOfmonth(year, i);
        }

        return result + day;
    }

    void operator-(Day A){
        long long a = changeDay();
        long long b = A.changeDay();

        cout << abs(a-b);
    }
};

int main(){
    Day a,b;
    a.nhap();

    int n;
    do{
        cin >> n;
        switch(n){
            case 1:
                int x;
                cin >> x;
                a + x;
                break;
            case 2:
                int y;
                cin >> y;
                a - y;
                break;
            case 3:
                b.nhap();
                a-b;
                break;
        }
    }
    while( n != 3);
}
