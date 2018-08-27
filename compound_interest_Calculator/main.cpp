#include "CompoundInterestCalculator.h"
#include <iostream>

int main(int argc, const char* argv[])
{
	if (argc != 4)
	{
		std::cout << "usage: progName <interest rate> <present value> <num periods>" <<std::endl;
		return 1;
	}

	double rate = atof(argv[1]);
	double value = atof(argv[2]);
	int num_periods = atoi(argv[3]);

	CompoundInterestCalculator calculate(rate);
	double res = calculate.multiplePeriod(value, num_periods);
	double con = calculate.continuousCompounding(value, num_periods);
	std::cout << " future value for multiple period compounding is " << res << std::endl;
	std::cout << " future value for continuous compounding is " << con << std::endl;
	return 0;

}
