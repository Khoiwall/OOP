#pragma once
#include <iostream>
#include "Diem.h"

using namespace std;

class DaGiac {
protected:
	int n;
	Diem* Arr;
public:
	void nhap(int x);
	void xuat();
};

class TamGiac: public DaGiac{
};
