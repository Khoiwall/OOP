#include "calculation.h"
#include <iostream>

using namespace std;

int UCLN(int a, int b) {
    int m = a % b;
    if (a == 0) { return b; }
    while (m != 0) {
        a = b;
        b = m;
        m = a % b;
    }
    return b;
}

void fraction::inputFraction()
{
	cin >> numerator;
	do
	{
		cin >> denominator;
	} while (denominator == 0);
}

void fraction::outputFraction() {
    int uc = UCLN(numerator, denominator);
    int tu = numerator / uc;
    int mau = denominator / uc;
    if ( tu >= 0 && mau < 0) {
        cout << -tu << "/" << -mau << endl;
    }
    else if ( tu < 0 && mau < 0) {
        cout << -tu << "/" << -mau << endl;
    }
    else {
        cout << tu << "/" << mau << endl;
    }
}

void fraction::sumFraction(fraction a)
{
    numerator = numerator * a.denominator + denominator * a.numerator;
    denominator = denominator * a.denominator;
}

void fraction::notSumFraction(fraction a)
{
    numerator = numerator * a.denominator - denominator * a.numerator;
    denominator = denominator * a.denominator;
}

void fraction::multiplyFraction(fraction a)
{
    numerator = numerator * a.numerator;
    denominator = denominator * a.denominator;
}

void fraction::shareFraction(fraction a)
{
    numerator = numerator * a.denominator;
    denominator = denominator * a.numerator;
}