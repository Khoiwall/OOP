#include <iostream>
#include <cmath>

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

        cout << hour << " " << minutes << " " << second;
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
    cin >> n;

    string str;

    while(n > 0){
        fflush(stdin);
        cin >> str;

        if (str == "++"){
            a + 1;
        }
        else if (str == "--"){
            a - 1;
        }
        else{
            if(str == "+"){
                int x;
                cin >> x;

                a + x;
            }
            else{
                int x;
                cin >> x;

                a - x;
            }
        }
        n--;
    }

    a.xuat();
    return 0;
}
