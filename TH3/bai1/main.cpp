#include <iostream>

using namespace std;

class Clock{
private:
    int second,minutes,hour;
public:
    void nhap(){
        cin >> hour >> minutes >> second;

        second = abs(second);  minutes = abs(minutes); hour = abs(hour);

        if (hour > 24) hour %= 24;
        if (minutes > 60) minutes %= 60;

        second += hour * 3600 + minutes * 60;
    }
    void xuat(){
        hour = second/3600;
        second %= 3600;

        minutes = second/60;
        second %= 60;

        hour %= 24;

        cout << hour << "h " << minutes << "p " << second << "s";
    }

    void operator+(int x){
        second += x;
    }

    void operator-(int x){
        second -= x;
    }
};

int main(){
    Clock a;
    a.nhap();

    int n;
    do{
        cin >> n;
        switch(n){
            case 1:
                a + 1;
                break;
            case 2:
                a - 1;
                break;
            case 3:
                int x;
                cin >> x;
                a + x;
                break;
            case 4:
                int y;
                cin >> y;
                a - y;
                break;
        }
    }
    while( n != -1);
    a.xuat();
}
