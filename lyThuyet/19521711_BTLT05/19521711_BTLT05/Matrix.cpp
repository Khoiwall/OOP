#include "matrix.h"
#include <iostream>
using namespace std;

void Matrix::inputMatrix()
{
	cout << "Nhap so dong: ";
	cin >> n;
	cout << "Nhap so cot: ";
	cin >> m;
	Arr = new int* [n];
	for (int i = 0; i < n; i++)
	{
		Arr[i] = new int[m];
		for (int j = 0; j < m; j++)
		{
			cin >> Arr[i][j];
		}
	}
}

void Matrix::outputMatrix()
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << Arr[i][j] << " ";
		}
		cout << endl;
	}
}

Matrix::Matrix(Matrix& a)
{
	n = a.n;
	m = a.m;
	Arr = new int* [n];
	for (int i = 0; i < n; i++)
	{
		Arr[i] = new int[m];
		for (int j = 0; j < m; j++)
		{
			Arr[i][j] = a.Arr[i][j];
		}
	}
}

Matrix::~Matrix() {
	cout << "" << endl;
}

int Matrix::getMatrix() {
	int indexN, indexM;
	cout << "Nhap index dong ban muon tim" << endl;
	cout << "Nhap index cot ban muon tim" << endl;
	do {
		cin >> indexN >> indexM;
		if (indexN > n || indexM > m)
		{
			cout << "nhap sai!! nhap lai" << endl;
		}
	} while (indexN > n || indexM > m);
	return Arr[indexN][indexM];
}

void Matrix::setMatrix() {
	cout << "Nhap vi tri index dong cot ma ban muon sua: ";
	int indexN, indexM;
	do {
		cin >> indexN >> indexM;
		if (indexM > m || indexN > n) {
			cout << "ban da nhap sai 1 trong 2 vi tri!! Nhap lai";
		}
	} while (indexM > m || indexN > n);
	int x;
	cout << "Nhap element de thay the: ";
	cin >> x;
	Arr[indexN][indexM] = x;
}