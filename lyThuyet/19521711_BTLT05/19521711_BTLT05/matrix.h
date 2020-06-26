
#pragma once
#include <iostream>
using namespace std;
class Vector;
class Matrix {
private:
	int n, m;
	int** Arr;
public:
	Matrix() {
		n = 0;
		m = 0;
		Arr = NULL;
	}
	void inputMatrix();
	void outputMatrix();
	Matrix(Matrix& a);
	~Matrix();
	int getMatrix();
	void setMatrix();
	friend void sumVectorAndMatrix(Vector A, Matrix B);
	friend void multhyVectorAndMatrix(Vector A, Matrix B);
	friend class Vector;
};