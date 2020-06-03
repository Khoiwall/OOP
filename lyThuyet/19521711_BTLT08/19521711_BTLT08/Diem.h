#pragma once
#include <iostream>

using namespace std;
class Diem {
private:
	int x, y;
public:
	void nhap(){
		
		cin >> x >> y;
	
	}

	void xuat() {

		cout << "(" << x << "," << y << ")" << endl;
	
	}
};
