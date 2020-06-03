#include <iostream>
#include "DaThuc.h";
#include "SoPhuc.h";

using namespace std;

void SP() {
	SoPhuc A, B, C;

	cout << "Nhap so phuc thuc 1" << endl;
	A.inputSoPhuc();
	cout << "Nhap so phuc thu 2" << endl;
	B.inputSoPhuc();

	cout << "Xuat 2 so phuc" << endl;
	A.outputSoPhuc();
	B.outputSoPhuc();

	cout << "Cong hai so phuc" << endl;
	C = A + B;
	cout << "Xuat so phuc vua cong" << endl;
	C.outputSoPhuc();

	cout << "Tru hai so phuc" << endl;
	C = A - B;
	cout << "Xuat so phuc vua tru" << endl;
	C.outputSoPhuc();

	cout << "Xuat phan thuc va ao cua 1 so phuc" << endl;
	cout << "Phan thuc cua A: " << A.getThuc() << endl;
	cout << "Phan ao cua A: " << B.getAo() << endl;

	cout << "Sua phan thuc va ao cua 1 so phuc " << endl;
	B.setThuc(7);
	B.setAo(8);
	cout << "So phuc B vua duoc thay doi" << endl;
	B.outputSoPhuc();

	cout << "--------------------------------" << endl;
}

void DaT() {
	DaThuc A, B, C;

	cout << "Nhap da thuc 1" << endl;
	A.intputDT();
	cout << "Nhap da thuc 2" << endl;
	B.intputDT();

	cout << "xuat da thuc" << endl;
	A.outputDT();
	B.outputDT();

	cout << "Cong 2 da thuc" << endl;
	C = A + B;
	cout << "Xuat 2 da thuc vua cong" << endl;
	C.outputDT();
	cout << "Tinh gia tri da thuc vua cong: " << C.getResult(5) <<  endl;


	cout << "Tru 2 da thuc" << endl;
	C = A - B;
	cout << "Xuat 2 da thuc vua tru" << endl;
	C.outputDT();
	cout << "Tinh gia tri da thuc vua tru: " << C.getResult(5) << endl;

	cout << "So sanh hai da thuc" << endl;
	if (A != B) {
		cout << "Hai da thuc khac nhau" << endl;
	}
	else {
		cout << "Hai da thuc bang nha" << endl;
	}
}