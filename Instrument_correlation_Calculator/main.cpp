#include "CorrelationCalculator.h"
#include "TimeSeries.h"

#include <iostream>

int main(int argc, const char * argv[])
{
	double price;

	TimeSeries tsa;
	TimeSeries tsb;
	for (;;)
	{
		std::cin>>price;
		if (price == -1)
		{
			break;
		}
		tsa.addValue(price);
		std::cin >> price;
		tsb.addValue(price);
	}

	CorrelationCalculator cCal(tsa, tsb);
	double correlation = cCal.correlation();

	std::cout << "correlation is "<< correlation <<std::endl;
	return 0;
}