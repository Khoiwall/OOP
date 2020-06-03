#pragma once
// lớp phân số +-
class fraction
{
private:
	int numerator, denominator;
public:
	void inputFraction();
	void outputFraction();
	void sumFraction(fraction a);
	void notSumFraction(fraction a);
	void multiplyFraction(fraction a);
	void shareFraction(fraction a);
};