#include <iostream>

using namespace std;

class TheGate{
public:
    int type;
    virtual void input(){}
    virtual int output(){return 0;}
};

class TheGate1: public TheGate{
private:
    int product;
    int money;
public:
    TheGate1(){
        TheGate::type = 1;
    }
    void input(){
        cin >> money;
        cin >> product;
    }
    int output(){
        return money*product;
    }
};

class TheGate2: public TheGate{
private:
    int wisdom;
public:
    TheGate2(){
        TheGate::type = 2;
    }
    void input(){
        cin >> wisdom;
    }
    int output(){
        return wisdom;
    }
};

class TheGate3: public TheGate {
private:
    int strong;
public:
    TheGate3(){
        TheGate::type = 3;
    }
    void input(){
        cin >> strong;
    }
    int output(){
        return strong;
    }
};

void peacock(){
    TheGate **Arr;

    int n;
    cin >> n;

    Arr = new TheGate*[n];

    int *arr = new int[n];
    int test;
    for (int i = 0; i < n; i++){
        cin >> test;
        arr[i] = test;

        switch(test){
            case 1:
                Arr[i] = new TheGate1();
                Arr[i]->input();
                break;
            case 2:
                Arr[i] = new TheGate2();
                Arr[i]->input();
                break;
            case 3:
                Arr[i] = new TheGate3();
                Arr[i]->input();
                break;
        }
    }

    int current_Money, current_wisdom, current_strong;
    cin >> current_Money >> current_wisdom >> current_strong;
    int wrong = 0;

    for (int i = 0; i < n; i++){
        if (arr[i] == 1){
            if (current_Money >= Arr[i]->output()){
                current_Money -= Arr[i]->output();
            }
            else{
                wrong = 1;
                break;
            }
        }
        else if (arr[i] == 2){
            if (current_wisdom >= Arr[i]->output());
            else{
                wrong = 1;
                break;
            }
        }
        else{
            if (current_strong >= Arr[i]->output()){
                current_strong -= Arr[i]->output();
            }
            else{
                wrong = 1;
                break;
            }
        }
    }

    if (wrong == 0){
        cout << current_Money << " " << current_wisdom << " " << current_strong;
    }
    else{
        cout << -1;
    }
}

int main(){
    peacock();

    return 0;
}

