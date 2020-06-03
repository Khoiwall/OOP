#pragma once
#include <iostream>
using namespace std;
class SoPhuc {
private:
	int thuc, ao;
public:
	SoPhuc();
	int getThuc();
	int getAo();
	void setThuc(int a);
	void setAo(int b);
	//friend SoPhuc operator+(SoPhuc A, SoPhuc B);
	SoPhuc operator+(SoPhuc A);
	//friend SoPhuc operator-(SoPhuc A, SoPhuc B);
	SoPhuc operator-(SoPhuc A);
	SoPhuc operator*(SoPhuc A);
	SoPhuc operator/(SoPhuc A);

	friend ostream& operator << (ostream& os, SoPhuc s) {
		if (s.ao < 0) {
			os << s.thuc << s.ao << "i" << endl;
		}
		else if (s.ao > 0) {
			os << s.thuc << "+" << s.ao << "i" << endl;
		}
		else {
			os << s.thuc << endl;
		}

		return os;
	}
	friend istream& operator >> (istream& is, SoPhuc& s) {
		is >> s.thuc >> s.ao;

		return is;
	}
};