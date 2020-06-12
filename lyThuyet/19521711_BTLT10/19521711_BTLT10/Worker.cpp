#include "Worker.h"
#include <iostream>
#include <string>

using namespace std;
int allMoney = 0;
void Worker::input() {
	cin.ignore();
	cout << "nhap ho va ten: ";
	getline(cin, fullName);

	cout << "nhap ngay thang nam sinh: ";
	cin >> born;
	
	cout << "nhap luong co ban: ";
	cin >> money;
}

void Worker::output() {
	cout << "ho va ten: " << fullName << endl;
	cout << "ngay thang nam sinh: " << born << endl;
}

void Worker1::input() {
	Worker::input();

	cout << "nhap ngay lam viec: ";
	cin >> workDay;

	cout << "nhap tien tro cap: ";
	cin >> moneyHelp;

	allMoney += money + workDay * 200000 + moneyHelp;
}

void Worker1::output() {
	Worker::output();

	cout << "luong: " << money + workDay * 200000 + moneyHelp << endl;
}

void Worker2::input() {
	Worker::input();

	cout << "nhap so san pham: ";
	cin >> numberProduct;

	allMoney += money + numberProduct * 2000;
}

void Worker2::output() {
	Worker::output();

	cout << "luong: " << money + numberProduct * 2000 << endl;
}

void Worker3::input() {
	Worker::input();

	cout << "nhap he so chuc vu: ";
	cin >> a;

	cout << "nhap tien thuong: ";
	cin >> moneyRewar;

	allMoney += money * a + moneyRewar;
}

void Worker3::output() {
	Worker::output();

	cout << "luong: " << money * a + moneyRewar << endl;
}

void ouputAllMoney() {
	cout << "tong luon cong ty: " << allMoney << endl;
}