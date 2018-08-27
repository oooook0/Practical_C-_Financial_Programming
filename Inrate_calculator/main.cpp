#include "IntRateCalculator.h"
#include <iostream>

int main(int argc, const char * argv[])
{
	if (argc != 3)
	{
		std::cout << "usage: ProgName <interest rate> <value>" << std::endl;
		return 1;
	}

	double rate= atof(argv[1]);
	double value = atof(argv[2]);

	IntRateCalculator cal(rate);
	double res = cal.singlePeriod(value);
	std::cout << "the result is "<< res << std::endl;
	return 0;
}