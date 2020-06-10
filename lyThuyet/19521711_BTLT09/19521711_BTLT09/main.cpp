#include "Player.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
	int n;
	cin >> n;

	youngPlayer Arr[100];

	for (int i = 0; i < n; i++) {
		Arr[i].input();
	}

	int minhigh = 0;
	int index = 0;

	for (int i = 0; i < n; i++) {
		if (Arr[i].getAge() <= 10) {
			minhigh = Arr[i].getHigt();
			index = i;
		}
	}

	for (int i = 0; i < n; i++) {
		if (Arr[i].getAge() <= 10) {
			if (minhigh > Arr[i].getHigt()) {
				minhigh = Arr[i].getHigt();
				index = i;
			}
		}
	}

	cout << "hoc sinh lun nhat:" << endl;
	Arr[index].output();

	cout << "thong tin nguoi tieu nhieu nhat:" << endl;
	for (int i = 0; i < n; i++) {
		if (Arr[i].getAge() > 10) {
			Arr[i].output();
		}
	}

	return 0;
}