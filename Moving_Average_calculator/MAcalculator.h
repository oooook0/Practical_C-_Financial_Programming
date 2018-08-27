#ifndef __MAcalculator__
#define __MAcalculator__

#include <vector>

class MAcalculator {

public:
	MAcalculator(int period);
	MAcalculator(const MAcalculator &v);
	MAcalculator &operator=(const MAcalculator &v);
	virtual ~MAcalculator();

	void addPriceQuote(double close);
	std::vector<double> calculateMA();
	std::vector<double> calculateEMA();

private:
	
	int m_numPeriods;
	std::vector<double> m_prices;
	
};

#endif