#include <iostream>
#include "calculation.h"
#include "listFraction.h"
#include "car.h"

using namespace std;

int main()
{
	cout << "Require a" << endl;
	fraction a, b, c;
	a.inputFraction();
	b.inputFraction();
	
	cout << "Sum: ";
	c = a;
	c.sumFraction(b);
	c.outputFraction();

	cout << "Not Sum: ";
	c = a;
	c.notSumFraction(b);
	c.outputFraction();

	cout << "Multiply: ";
	c = a;
	c.multiplyFraction(b);
	c.outputFraction();

	cout << "Share: ";
	c = a;
	c.shareFraction(b);
	c.outputFraction();
	//---------------
	cout << "Require b" << endl;

	listFraction d;
	d.inputListFraction();

	cout << "Output list fraction" << endl;
	d.outputListFraction();
	// -----------
	cout << "Require c" << endl;

	car e;
	cout << "Intput Cars" << endl;
	e.inputCars();
	cout << "----------Output cars----------" << endl;
	e.outputCars();
	return 0;
}