#include "CashFlowCalculator.h"
#include <iostream>

int main(int argc, const char * argv[])
{
	if (argc != 2)
	{
		std::cout << "usge: progName <interest name>" << std::endl;
		return 1;
	}

	double rate = atof(argv[1]);
	CashFlowCalculator cfc(rate);
	do {
		int period;
		std::cin >>period;
		if (period ==-1)
		{
			break;
		}

		double value;
		std::cin >> value;
		cfc.addCashPayment(value, period);
	} while(1);

	double result = cfc.presentvalue();
	std::cout << "the present value is " << result << std::endl;
	return 0;
}