#include <iostream>
#include <string>

using namespace std;

int alldayWork = 0;
int allProduct = 0;

class person{
protected:
    string name;
public:
    virtual void input();
    virtual void output();
    int type;
};

class worker1: public  person{
private:
    int moneyBasic;
    int numberProduct;
public:
    worker1(){
        person::type = 1;
    }
    void input();
    void output();
    int getProduct(){
        return numberProduct;
    }
};

class worker2: public person{
private:
    int dayWork;
public:
    worker2(){
        person::type = 2;
    }
    void input();
    void output();
    int getDay(){
        return dayWork;
    }
};

class worker3: public person{
public:
    worker3(){
        person::type = 3;
    }
    void input();
    void output();
};

class manage{
private:
    int n;
    person **Arr;
public:
    void input(){
        cin >> n;

        Arr = new person*[n];
        int test;

        for (int i = 0; i < n; i++){
            cin >> test;
            switch(test){
                case 1:
                    Arr[i] = new worker1();
                    Arr[i]->input();
                    break;
                case 2:
                    Arr[i] = new worker2();
                    Arr[i]->input();
                    break;
                case 3:
                    Arr[i] = new worker3();
                    Arr[i]->input();
                    break;
            }
        }
    }

    void output(){
        for (int i = 0; i < n; i++){
            Arr[i]->output();
        }
    }
};

void person::input(){
    cin >> name;
}

void person::output(){
    cout << name << ": ";
}

void worker1::input(){
    person::input();

    cin >> moneyBasic;
    cin >> numberProduct;

    allProduct += numberProduct;
}

void worker1::output(){
    person::output();

    cout << moneyBasic + numberProduct*5 << endl;
}

void worker2::input(){
    person::input();

    cin >> dayWork;

    alldayWork += dayWork;
}

void worker2::output(){
    person::output();

    cout << dayWork*100 << endl;
}

void worker3::input(){
    person::input();
}

void worker3::output(){
    person::output();

    cout << 100 + alldayWork*40 + allProduct*2 << endl;
}

int main(){
    manage a;
    a.input();
    a.output();

    return 0;
}
