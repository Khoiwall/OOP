#include <iostream>
#include "SoPhuc.h"
#include "DaGiac.h"

using namespace std;

void cauMot() {

	cout << "nhap so ao" << endl;
	PhanAo A, B;
	A.nhap();
	B.nhap();

	A + B;

	A.xuat();

}

void cauHai() {

	cout << "nhap tam giac" << endl;
	TamGiac A;

	A.nhap(3);

	A.xuat();

}

int main() {

	cauMot();
	cout << endl << "-----------------------------" << endl;
	cauHai();

	return 0;
}