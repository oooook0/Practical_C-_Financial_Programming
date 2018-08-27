#include "VolatilityCalculator.h"
#include <iostream>

int main(int argc, const char * argv[])
{
	double price;

	VolatilityCalculator vc;
	for (;;)
	{
		std::cin >> price;
		if (price == -1)
		{
			break;
		}
		vc.addPrice(price);
	}
	std::cout << "range volatility is " << vc.rangeVolatility() << std::endl;
	std::cout << "average daily range is " << vc.avgDailyRange() << std::endl;
	std::cout << "standard deviation is " << vc.std() << std::endl;
	return 0;
}