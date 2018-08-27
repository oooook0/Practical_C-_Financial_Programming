#ifndef __BondCalculator__
#define __BondCalculator__
#include <string>

class BondCalculator {
public:
	BondCalculator(const std::string institution, int numPeriods, double principal, double couponValue);
	BondCalculator(const BondCalculator &v);
	BondCalculator &operator =(const BondCalculator &v);
	virtual ~BondCalculator();

	double interestRate();

private:
	std::string m_institution;
	double m_principal;
	double m_coupon;
	int m_numPeriods;
	
};

#endif