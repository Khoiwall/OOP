#pragma once
#include <iostream>
class Matrix;
using namespace std;
class Vector {
private:
	int n;
	int arr[1000];
public:
	Vector() {
		n = 0;
		arr[n] = 0;
	}
	void inputVector();
	void outputVector();
	Vector(Vector& a);
	~Vector();
	int getVector();
	void setVector();
	friend void sumVectorAndMatrix(Vector A, Matrix B);
	friend void multhyVectorAndMatrix(Vector A, Matrix B);
	friend class Matrix;
	void Tong(Matrix A);
	void Nhan(Matrix A);
};
