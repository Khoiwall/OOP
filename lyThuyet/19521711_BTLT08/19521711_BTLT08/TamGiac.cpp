#include <iostream>
#include "DaGiac.h"
#include "Diem.h"

using namespace std;

void DaGiac::nhap(int x) {
	
	n = x;
	
	Arr = new Diem[n];

	for (int i = 0; i < n; i++) {
		Arr[i].nhap();
	}

}

void DaGiac::xuat(){
	
	for (int i = 0; i < n; i++) {
		Arr[i].xuat();
	}

}