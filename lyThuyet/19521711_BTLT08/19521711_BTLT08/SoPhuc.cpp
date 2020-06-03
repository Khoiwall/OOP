#include "SoPhuc.h"
#include <iostream>

using namespace std;

void PhanAo::nhap() {
	
	thuc = 0;
	cin >> ao;

}

void PhanAo::xuat() {
	
	if (ao == 0) {
		cout << 0;
	}
	else {
		cout << ao << "i";
	}

}

void PhanAo::operator+(PhanAo A)
{
	ao += A.ao;
}
