#include "Wheel.h"
#include <iostream>
#include <string>

using namespace std;
// nhập 1 bánh xe này mỗi bánh mỗi loại khác nhau ^.^
void wheel::inputWhell()
{
	cout << "Input name wheel: ";
	cin >> nameWhell;
	cout << "Input year product wheel: ";
	cin >> yearProduct;
	cout << "Input price wheel(USD or VND): ";
	cin >> price;
}
// xuất bánh xe
void wheel::outputWhell()
{
	cout << nameWhell << endl;
	cout << yearProduct << endl;
	cout << price << endl;
}