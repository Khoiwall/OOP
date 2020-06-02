#include <bits/stdc++.h>

using namespace std;


class Worker{
public:
    int moneyBasic;
    int numberProduct;
};

class Manage{
public:
    int workDay;
};

class Person:public Worker, public Manage{
public:
    string name;
    int n,k;

    int *temp;
    Person *Arr;

    int allDayWork = 0, allProduct = 0;

    void input(){
        cin >> n;

        Arr = new Person[n];
        temp = new int[n];

        for (int i = 0; i  < n; i++){
            cin >> k;
            if (k == 1){
                temp[i] = k;
                cin >> Arr[i].name >> Arr[i].moneyBasic >> Arr[i].numberProduct;
                allProduct += Arr[i].numberProduct;
            }
            else if (k == 2){
                temp[i] = k;
                cin >> Arr[i].name >> Arr[i].workDay;
                allDayWork += Arr[i].workDay;
            }
            else{
                temp[i] = k;
                cin >> Arr[i].name;
            }
        }
    }

    void output(){
        for (int i = 0; i < n; i++){
            if (temp[i] == 1){
                cout << Arr[i].name << ": " << Arr[i].moneyBasic + Arr[i].numberProduct*5 << endl;
            }
            else if (temp[i] == 2){
                cout << Arr[i].name << ": " << Arr[i].workDay*100 << endl;
            }
            else{
                cout << Arr[i].name << ": " << 100 + allDayWork*40 + allProduct*2 << endl;
            }
        }
    }
};


int main(){
    Person A;

    A.input();
    A.output();

    return 0;
}

