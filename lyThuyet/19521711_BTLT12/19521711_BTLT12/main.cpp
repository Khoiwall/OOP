#include<iostream>
#include "PhanSo.h"
#include "ThienKiem.h"

using namespace std;

void ThienKiem() {
	int n;
	cout << "nhap so luong tuong va quai" << endl;
	cin >> n;

	figure** Arr;
	Arr = new figure * [n];

	int *tmpTest = new int[n];
	int* _tmpTest = new int[n];

	int test, _test;

	for (int i = 0; i < n; i++) {
		cout << "1: la tuong, 2: la quai" << endl;
		cin >> test;
		tmpTest[i] = test;

		switch (test) {
			case 1:
				_tmpTest[i] = 0;
				Arr[i] = new Hero();
				Arr[i]->input(test);
				cout << "----------" << endl;
				break;
			case 2:
				cout << "1: quai thuong, 2: quai lon" << endl;
				cin >> _test;
				_tmpTest[i] = test;
				switch (_test) {
					case 1:
						Arr[i] = new monterNomar();
						Arr[i]->input(test);
						cout << "----------" << endl;
						break;
					case 2:
						Arr[i] = new monterBoss();
						Arr[i]->input(test);
						cout << "----------" << endl;
						break;
				}
				break;
		}
	}

	int maxx = Arr[0]->output();
	int indexMax = 0;

	for (int i = 0; i < n; i++) {
		if (maxx < Arr[i]->output()) {
			maxx = Arr[i]->output();
			indexMax = i;
		}
	}

	cout << "Figure co xac thuong cao nhat: " << endl;
	
	if (tmpTest[indexMax] == 1) {
		cout << Arr[indexMax]->getFiveElement() << " phai " << Arr[indexMax]->getNameHero() << " ten nhan vat " << Arr[indexMax]->Name << " sat thuong " << Arr[indexMax]->output() << endl;
	}
	else{
		
		if (_tmpTest[indexMax] == 1) {
			cout << "quai thuong sat thuong " << Arr[indexMax]->output() << endl;
		}
		else {
			cout << "quai Lon sat thuong " << Arr[indexMax]->output() << endl;
		}
	}

	cout << "----------" << endl;

	int indexOne, indexTwo;
	cout << "nhap 2 vi tri ban muon danh nhau: luu y 2 vi tri phai be hon hoac bang so luong tuong va quai " << endl;
	cout << "vi tri thu nhat: ";
	cin >> indexOne;
	cout << "vi tri thu hai: ";
	cin >> indexTwo;
	
	cout << "----------" << endl;

	if (indexOne > n || indexTwo > n) {
		cout << "nhap sai ^.^ khong cho nhap lai dau" << endl;
	}
	else {
		if (Arr[indexOne]->numberFiveElement - Arr[indexTwo]->numberFiveElement == 1 || Arr[indexOne]->numberFiveElement - Arr[indexTwo]->numberFiveElement == -4) {
			cout << "sat thuong cua vi tri 1 gay ra cho vi tri 2 la " << Arr[indexOne]->output() << endl;
			cout << "sat thuong cua vi tri 2 gay ra cho vi tri 1 la " << Arr[indexTwo]->output()*0.1 + Arr[indexTwo]->output() << endl;
		}
		else if(Arr[indexOne]->numberFiveElement - Arr[indexTwo]->numberFiveElement == 1 || Arr[indexOne]->numberFiveElement - Arr[indexTwo]->numberFiveElement == 4){
			cout << "sat thuong cua vi tri 1 gay ra cho vi tri 2 la " << Arr[indexOne]->output()*0.1 + Arr[indexOne]->output() << endl;
			cout << "sat thuong cua vi tri 2 gay ra cho vi tri 1 la " << Arr[indexTwo]->output() << endl;
		}
		else if (Arr[indexOne]->numberFiveElement - Arr[indexTwo]->numberFiveElement == 2) {
			cout << "sat thuong cu vi tri 1 gay ra cho vi tri 2 la " << -Arr[indexOne]->output() * 0.2 + Arr[indexOne]->output() << endl;
			cout << "sat thuong cu vi tri 2 gay ra cho vi tri 1 la " << Arr[indexTwo]->output() * 0.2 + Arr[indexTwo]->output() << endl;
		}
		else if (Arr[indexOne]->numberFiveElement - Arr[indexTwo]->numberFiveElement == -2) {
			cout << "sat thuong cu vi tri 1 gay ra cho vi tri 2 la " << Arr[indexOne]->output() * 0.2 + Arr[indexOne]->output() << endl;
			cout << "sat thuong cu vi tri 2 gay ra cho vi tri 1 la " << -Arr[indexTwo]->output() * 0.2 + Arr[indexTwo]->output() << endl;
		}
		else if (Arr[indexOne]->numberFiveElement - Arr[indexTwo]->numberFiveElement == 3) {
			cout << "sat thuong cu vi tri 1 gay ra cho vi tri 2 la " << Arr[indexOne]->output() * 0.2 + Arr[indexOne]->output() << endl;
			cout << "sat thuong cu vi tri 2 gay ra cho vi tri 1 la " << -Arr[indexTwo]->output() * 0.2 + Arr[indexTwo]->output() << endl;
		}
		else if (Arr[indexOne]->numberFiveElement - Arr[indexTwo]->numberFiveElement == -3) {
			cout << "sat thuong cu vi tri 1 gay ra cho vi tri 2 la " << -Arr[indexOne]->output() * 0.2 + Arr[indexOne]->output() << endl;
			cout << "sat thuong cu vi tri 2 gay ra cho vi tri 1 la " << Arr[indexTwo]->output() * 0.2 + Arr[indexTwo]->output() << endl;
		}
	}
}

int main() {
	cout << "Cau 2:" << endl;
	PhanSo A, B;

	cin >> A >> B;

	cout << A + B << endl;
	cout << A - B << endl;

	cout << "cau 3:" << endl;
	ThienKiem();

	return 0;
}