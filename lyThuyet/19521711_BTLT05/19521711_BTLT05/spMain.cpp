#include "matrix.h"
#include "vector.h"
#include <iostream>

using namespace std;
void sumVectorAndMatrix(Vector A, Matrix B)
{
	if (B.n == 1)
	{
		if (A.n == B.m)
		{
			for (int i = 0; i < A.n; i++)
			{
				cout << A.arr[i] + B.Arr[0][i] << " ";
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

void multhyVectorAndMatrix(Vector A, Matrix B)
{
	if (A.n == B.n)
	{
		int i = 0, j = 0, k = 0;
		int s = 0;
		while (true)
		{
			s = s + A.arr[i] * B.Arr[j][k];
			i++;
			j++;
			if (i = A.n)
			{
				i = 0;
				j = 0;
				k++;
				cout << s << " ";
				s = 0;
			}
			if (k == B.m)
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

void home()
{
	Vector A;
	cout << "Nhap vector" << endl;
	A.inputVector();
	cout << "Xuat vector" << endl;
	A.outputVector();
	cout << "Copy vector" << endl;
	Vector B(A);
	B.outputVector();
	cout << "Xoa vector" << endl;
	cout << "Xem vector do xoa chua" << endl;
	B.~Vector();
	cout << "Get mot element cua vector" << endl;
	cout << A.getVector() << endl;
	cout << "Set mot element cua vector" << endl;
	A.setVector();
	cout << "Xuat vector khi set" << endl;
	A.outputVector();
	cout << "---------" << endl;
	cout << "Nhap Matrix" << endl;
	Matrix C;
	C.inputMatrix();
	cout << "Xuat Matrix" << endl;
	C.outputMatrix();
	cout << "Copyt Matrix" << endl;
	Matrix D(C);
	D.outputMatrix();
	cout << "Xoa mot Matrix" << endl;
	cout << "Xem Matrix da xoa chua" << endl;
	D.~Matrix();
	cout << "Get mot Element cua Matrix" << endl;
	cout << D.getMatrix() << endl;
	cout << "Set lai mot Element cua Matrix" << endl;
	D.setMatrix();
	D.outputMatrix();
	cout << "---------" << endl;
	cout << "Cong Vector va Matrix ham ban" << endl;
	sumVectorAndMatrix(A, C);
	cout << "Nhan Vector va Matrix ham ban" << endl;
	multhyVectorAndMatrix(A, C);
	cout << "Cong Vector va Matrix lop ban" << endl;
	A.Tong(C);
	cout << "Nhan Vector va Matrix lop ban" << endl;
	A.Nhan(C);
}