#include "car.h"
#include <cassert>
#include <cmath>
using namespace std;

int main() {

	const double E = 0.00000001;
	car c1;
	assert(c1.get_gas() == 0);
	assert(c1.get_odometer() == 0);
	c1.set_gas(10 + .01 + .01 + .01 + .01 + .01);
	assert(fabs(c1.get_gas() - 10.05) < E);

	c1.set_mpg(20);
	c1.drive(40); // 2 gallons consumed

	car c2("GM", "Oklahoma", 18009998888);
	c2.set_gas(20);
}