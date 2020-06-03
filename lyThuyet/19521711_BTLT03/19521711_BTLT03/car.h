#include <string>
#include "Wheel.h"
using namespace std;

class car
{
private:
	string nameCar;
	string yearProduct;
	string priceCar;
	wheel* Arr;
public:
	void inputCars();
	void outputCars();
};