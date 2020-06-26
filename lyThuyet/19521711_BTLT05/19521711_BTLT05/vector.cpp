#include "vector.h"
#include "matrix.h"
#include <iostream>

using namespace std;

void Vector::inputVector()
{
	cout << "Nhap so luong phan tu vector: ";
	cin >> n;
	cout << "Nhap element cua vector" << endl;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
}
void Vector::outputVector()
{
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

Vector::Vector(Vector& a) {
	n = a.n;
	for (int i = 0; i < n; i++) {
		arr[i] = a.arr[i];
	}
}
Vector::~Vector() {
	cout << "" << endl;
}
int Vector::getVector()
{
	int index;
	cout << "Nhap vi tri minh muon xem element: ";
	do {
		cin >> index;
		if (index >= n)
		{
			cout << "Vi tri index ban nhap lon hon n xin hay nhap lai!!" << endl;
		}
	} while (index >= n);
	return arr[index];
}
void Vector::setVector()
{
	int index, x;
	cout << "Nhap vi tri index cua ban can sua: ";
	do {
		cin >> index;
		if (index >= n)
		{
			cout << "Vi tri index ban nhap lon hon n xin hay nhap lai!!" << endl;
		}
	} while (index >= n);
	cout << "Nhap element ban can thay doi: ";
	cin >> x;
	arr[index] = x;
}

void Vector::Tong(Matrix A)
{
	if (A.n == 1)
	{
		if (n == A.m)
		{
			for (int i = 0; i < n; i++)
			{
				cout << arr[i] + A.Arr[0][i] << " ";
			}
			cout << endl;
		}
		else
		{
			cout << "khong the cong" << endl;
		}
	}
	else
	{
		cout << "khong the cong" << endl;
	}
}

void Vector::Nhan(Matrix A)
{
	if (n == A.n)
	{
		int i = 0, j = 0, k = 0;
		int s = 0;
		while (true)
		{
			s = s + arr[i] * A.Arr[j][k];
			i++;
			j++;
			if (i = n)
			{
				i = 0;
				j = 0;
				k++;
				cout << s << " ";
				s = 0;
			}
			if (k == A.m)
			{
				break;
			}
		}
		cout << endl;
	}
	else
	{
		cout << "khong nhan duoc" << endl;
	}
}