#pragma once

class SoPhuc{
protected:
	int thuc, ao;
};

class PhanAo: public SoPhuc {
public:
	void nhap();
	void xuat();
	void operator+(PhanAo A);
};