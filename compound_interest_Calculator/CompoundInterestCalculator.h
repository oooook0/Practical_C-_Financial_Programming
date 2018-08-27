#ifndef __FinancialC__CompoundIntRateCalculator__
#define __FinancialC__CompoundIntRateCalculator__

class CompoundInterestCalculator {

public:
	CompoundInterestCalculator(double rate);
	CompoundInterestCalculator(const CompoundInterestCalculator &v);
	CompoundInterestCalculator& operator=(const CompoundInterestCalculator &v);
	virtual ~CompoundInterestCalculator();

	double multiplePeriod(double value, int numPeriod);
	double continuousCompounding(double value, int numPeriod);

private:
	double m_rate;
};

#endif 