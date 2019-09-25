#pragma once
#include "company.h"

class car {
private:
	double mpg;
	double gas;
	int odometer;
	company make;
	int sn;
	static int sn_gen;
public:
	car();
	car(string, string, long);
	void set_mpg(double);
	void set_gas(double);
	double get_gas() const;
	int get_odometer() const;
	void drive(int);
};