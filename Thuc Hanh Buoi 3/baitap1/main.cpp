#include<bits/stdc++.h>

using namespace std;

class PhanSo{
private:
    int tu,mau;
public:
    friend ostream& operator << (ostream &os, PhanSo A){
        if (A.tu > 0 && A.mau > 0 || A.tu < 0 && A.mau < 0){
            os << A.tu << "/" << A.mau;
        }
        else{
            os << -abs(A.tu) << "/" << abs(A.mau);
        }

        return os;
    }

    friend istream& operator >> (istream &is, PhanSo &A){
        is >> A.tu >> A.mau;

        return is;
    }

    friend PhanSo operator+(PhanSo A, PhanSo B){
        PhanSo Sum;
        if (B.mau != A.mau){
            Sum.tu = A.tu*B.mau + A.mau*B.tu;
            Sum.mau = A.mau*B.mau;
        }
        else{
            Sum.tu = A.tu + B.tu;
            Sum.mau = A.mau;
        }

        return Sum;
    }

    friend PhanSo operator-(PhanSo A, PhanSo B){
        PhanSo notSum;
        if (B.mau != A.mau){
            notSum.tu = A.tu*B.mau - A.mau*B.tu;
            notSum.mau = A.mau*B.mau;
        }
        else{
            notSum.tu = A.tu - B.tu;
            notSum.mau = A.mau;
        }

        return notSum;
    }
};


int main(){
    PhanSo A,B;

    cin >> A >> B;

    cout << A + B << endl;
    cout << A - B;

    return 0;
}
