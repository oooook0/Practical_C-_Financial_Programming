#ifndef __VolatilityCalculator__
#define __VolatilityCalculator__

#include <vector>

class VolatilityCalculator
{
public:
	VolatilityCalculator();
	virtual ~VolatilityCalculator();
	VolatilityCalculator(const VolatilityCalculator &);
	VolatilityCalculator &operator=(const VolatilityCalculator &);

	void addPrice(double price);
	double rangeVolatility();
	double std();
	double mean();
	double avgDailyRange();

private:

	std::vector<double> m_prices;
};

#endif