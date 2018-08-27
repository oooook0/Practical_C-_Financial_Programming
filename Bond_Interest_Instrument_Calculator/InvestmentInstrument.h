#ifndef __InvestmentInstrument__
#define __InvestmentInstrument__

#include <iostream>

class BondInstrument {
public:
	BondInstrument() {}
	BondInstrument(double principal, double monthlyPayment);
	virtual ~BondInstrument();
	BondInstrument(const BondInstrument &a);
	BondInstrument &operator=(const BondInstrument &a);

	double getMonthlyPayment();
	double getPrincipal();

private:
	double 
		m_monthlyPay, 
		m_principal;
};

class MortgageInstrument {
public:
	MortgageInstrument() {}
	MortgageInstrument(double MonthlyPay, double propertyValue, double downpayment);
	virtual ~MortgageInstrument();
	MortgageInstrument(const MortgageInstrument &a);
	MortgageInstrument &operator=(const MortgageInstrument &a);

	double getMonthlyPayment();
	double getPrincipal();

private:
	double 
		m_monthlyPay, 
		m_propertyValue, 
		m_downPayment;
};

#endif