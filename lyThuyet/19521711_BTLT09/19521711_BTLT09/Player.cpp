#include "Player.h"
#include <iostream>
#include <string>

using namespace std;


void youngPlayer::input(){
	cin.ignore();
	cout << "nhap ten: ";
	cin >> name;
	cout << "nhap tuoi: ";
	cin >> age;

	if (age < 10) {
		cin.ignore();
		cout << "nhap chieu cao (cm): ";
		cin >> high;

		cout << "nhap truong hoc vd(A, B, C,...,Z): ";
		cin >> school;
	}
	else {
		cin.ignore();
		cout << "nhap cmnd: ";
		cin >> codeNumber;
	}
}

int youngPlayer::getHigt() {
	return high;
}

int youngPlayer::getAge() {
	return age;
}

void youngPlayer::output() {
	cout << name << endl;
	cout << age << endl;
	if (age <= 10) {
		cout << high << endl;
		cout << school << endl;
	}
	else {
		cout << codeNumber << endl;
	}
}