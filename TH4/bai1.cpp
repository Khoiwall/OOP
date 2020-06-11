#include <iostream>
#include <string>

using namespace std;

class book{
protected:
    string name;
    string director;
public:
    virtual void input();
    virtual void output();
    int type;
};

class book1: public  book{
private:
    string Sub;
public:
    book1(){
        book::type = 1;
    }
    void input();
    void output();
};

class book2: public book{
private:
    string kind;
public:
    book2(){
        book::type = 2;
    }
    void input();
    void output();
};

class book3: public book{
private:
    string desk;
public:
    book3(){
        book::type = 3;
    }
    void input();
    void output();
};

class manage{
private:
    int n;
    book **arr;
public:
    void input(){
        cin >> n;
        arr = new book*[n];

        int test;
        for (int i = 0; i < n; i++){
            cin >> test;
            switch(test){
                case 1:
                    arr[i] = new book1();
                    arr[i]->input();
                    break;
                case 2:
                    arr[i] = new book2();
                    arr[i]->input();
                    break;
                case 3:
                    arr[i] = new book3();
                    arr[i]->input();
                    break;
            }
        }
    }

    void output(){
        for (int i = 0; i < n; i++){
            cout << i;
            arr[i]->output();
        }
    }
};

void book::input(){
    cin.ignore();
    cin >> name;
    cin >> director;
}

void book::output(){
    cout << " - " << name;
    cout << " - " << director;
}

void book1::input(){
    book::input();
    cin >> Sub;
}

void book1::output(){
    book::output();
    cout << " - " << Sub << endl;
}

void book2::input(){
    book::input();
    cin >> kind;
}

void book2::output(){
    book::output();
    cout << " - " << kind << endl;
}

void book3::input(){
    book::input();
    cin >> desk;
}

void book3::output(){
    book::output();
    cout << " - " << desk << endl;
}

int main(){
    manage a;
    a.input();
    a.output();

    return 0;
}

