#include <iostream>
#include <cmath>
#include "DaThuc.h"

using namespace std;

// bac da thuc
void DaThuc::intputDT() {
	cout << "Nhap bac cua da thuc: ";
	cin >> n;

	//nhap he so truoc x cua da thuc
	for (int i = 0; i <= this->n; i++) {
		cin >> arr[i];
	}
}

// xuat da thuc
void DaThuc::outputDT() {
	for (int i = 0; i <= this->n; i++) {
		
		if (i == 0 && arr[i] != 0) {
			cout << arr[i];
		}

		else {
			
			if (arr[i] > 0) {
				cout << "+" << arr[i] << "x^" << i;
			}
			else if (arr[i] < 0) {
				cout << "-" << abs(arr[i]) << "x^" << i;
			}
			else (arr[i] == 0);
		}
	}
	cout << endl;
}

// + da thuc
DaThuc operator+(DaThuc A, DaThuc B) {
	DaThuc resuft;
	resuft.n;
	resuft.n = __max(A.n, B.n);

	for (int i = 0; i <= resuft.n; i++) {
		if (i > A.n) {
			resuft.arr[i] = B.arr[i];
		}

		if (i > B.n) {
			resuft.arr[i] = A.arr[i];
		}

		if (i <= B.n && i <= A.n) {
			resuft.arr[i] = B.arr[i] + A.arr[i];
		}
	}
	return resuft;
}


// - hai da thuc
DaThuc operator-(DaThuc A, DaThuc B) {
	DaThuc resuft;
	resuft.n = __max(A.n, B.n);

	for (int i = 0; i <= resuft.n; i++) {
		if (i > A.n) {
			resuft.arr[i] = B.arr[i];
		}

		if (i > B.n) {
			resuft.arr[i] = A.arr[i];
		}

		if (i <= B.n && i <= A.n) {
			resuft.arr[i] = A.arr[i] - B.arr[i];
		}
	}
	return resuft;
}

// phep khac
bool operator!=(DaThuc A, DaThuc B) {
	if (A.n < B.n || A.n > B.n) {
		return true;
	}
	else {

		for (int i = 0; i <= A.n; i++) {
			if (A.arr[i] - B.arr[i] > 0 || A.arr[i] - B.arr[i] < 0) {
				return true;
			}
		}
	}

	return false;
}

int DaThuc::getResult(int x) {

	int sum = 0;
	for (int i = 0; i <= n; i++) {
		sum += arr[i] * pow(x, i);
	}

	return sum;
}