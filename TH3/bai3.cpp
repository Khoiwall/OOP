#include <iostream>

using namespace std;

class DaThuc{
private:
    int n;
    int *Arr;
public:
    void input(){
        cin >> n;

        Arr = new int(n);
        for (int i = 0; i <= n; i++){
            cin >> Arr[i];
        }
    }

    void operator+(DaThuc A){
        if(n < A.n){
            for (int i = 0; i <= A.n; i++){
                Arr[i] += A.Arr[i];
            }
            n = A.n;
        }

        else{
            for(int i = 0; i <= n; i++){
                Arr[i] += A.Arr[i];
            }
        }

        for (int i = 0; i <= n; i++){
            if (Arr[i] != 0){
                if (i == 0){
                    cout << Arr[i] << "x^" << i;
                }
                else{
                    if (Arr[i] > 0){
                        cout << "+" << Arr[i] << "x^" << i;
                    }
                    else{
                        cout << Arr[i] << "x^" << i;
                    }
                }
            }
        }
    }

    void operator-(DaThuc A){
        if(n < A.n){
            for (int i = 0; i <= A.n; i++){
                Arr[i] -= A.Arr[i];
            }
            n = A.n;
        }

        else{
            for(int i = 0; i <= n; i++){
                Arr[i] -= A.Arr[i];
            }
        }

        for (int i = 0; i <= n; i++){
            if (Arr[i] != 0){
                if (i == 0){
                    cout << Arr[i] << "x^" << i;
                }
                else{
                    if (Arr[i] > 0){
                        cout << "+" << Arr[i] << "x^" << i;
                    }
                    else{
                        cout << Arr[i] << "x^" << i;
                    }
                }
            }
        }
    }

    void operator*(DaThuc A){
        int *BorrowArr = new int(n + A.n);

        for (int i = 0; i <= n; i++){
            for (int j = 0; j <= A.n; j++){
                BorrowArr[i+j] += Arr[i]*A.Arr[j];
            }
        }

        for (int i = 0; i <= n + A.n; i++){
            if (BorrowArr[i] != 0){
                if (i == 0){
                    cout << BorrowArr[i] << "x^" << i;
                }
                else{
                    if (Arr[i] > 0){
                        cout << "+" << BorrowArr[i] << "x^" << i;
                    }
                    else{
                        cout << BorrowArr[i] << "x^" << i;
                    }
                }
            }
        }
    }
};

int main(){

    DaThuc a,b;
    a.input();
    b.input();

    int test;
    cin >> test;


    if (test == 1){
        a+b;
    }

    if (test == 2){
        a-b;
    }

    if(test == 3){
        a*b;
    }

    return 0;
}
