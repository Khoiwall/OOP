#include <iostream>
#include "Worker.h"
#include <string>

using namespace std;
Worker** Arr;
int n;

void inputWorker() {
	cout << "nhap so nhan vien: ";
	cin >> n;

	Arr = new Worker * [n];
	int test;

	for (int i = 0; i < n; i++) {
		cout << "nhap loai nhan vien: ";
		cin >> test;

		switch (test) {
			case 1:
				Arr[i] = new Worker1();
				Arr[i]->input();
				break;
			case 2:	
				Arr[i] = new Worker2();
				Arr[i]->input();
				break;
			case 3:
				Arr[i] = new Worker3();
				Arr[i]->input();
				break;
		}
	}

}

void outputWorker() {
	for (int i = 0; i < n; i++) {
		Arr[i]->output();
	}
}

void findWorker() {
	string findFullName;
	cout << "nhap ho ten can tim: ";
	cin.ignore();
	getline(cin, findFullName);

	for (int i = 0; i < n; i++) {
		if (findFullName == Arr[i]->fullName) {
			Arr[i]->output();
			break;
		}
	}
}
void ouputAllMoney();

int main() {
	inputWorker();
	outputWorker();

	ouputAllMoney();
	findWorker();
	return 0;
}