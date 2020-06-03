#include "listFraction.h"
#include <iostream>

using namespace std;
// nhập danh sách danh số
void listFraction::inputListFraction()
{
	cout << "Input n: ";
	cin >> n;
	cout << "Input list fraction" << endl;
	arr = new fraction[n];

	for (int i = 0; i < n; i++)
	{
		arr[i].inputFraction();
	}
}
// xuất danh suất phân số
void listFraction::outputListFraction()
{
	for (int i = 0; i < n; i++)
	{
		arr[i].outputFraction();
	}
}