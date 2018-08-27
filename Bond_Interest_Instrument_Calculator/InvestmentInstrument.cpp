#include "InvestmentInstrument.h"

BondInstrument::BondInstrument(double principal, double monthlyPayment) :
m_principal(principal),
m_monthlyPay(monthlyPayment)
{

}

BondInstrument::~BondInstrument()
{

}

BondInstrument::BondInstrument(const BondInstrument &a) :
m_monthlyPay(a.m_monthlyPay),
m_principal(a.m_principal)
{

}

BondInstrument &BondInstrument::operator =(const BondInstrument &a)
{
	if(this != &a)
	{
		this->m_principal = a.m_principal;
		this->m_monthlyPay = a.m_monthlyPay;
	}
	return *this;
}

double BondInstrument::getMonthlyPayment()
{
	return m_monthlyPay;
}

double BondInstrument::getPrincipal()
{
	return m_principal;
}

MortgageInstrument::MortgageInstrument(double monthlyPay, double propertyValue, double downpayment) :
m_monthlyPay(monthlyPay), m_propertyValue(propertyValue), m_downPayment(downpayment)
{

}

MortgageInstrument::MortgageInstrument(const MortgageInstrument &a) :
m_monthlyPay(a.m_monthlyPay), m_propertyValue(a.m_propertyValue), m_downPayment(a.m_downPayment)
{

}

MortgageInstrument::~MortgageInstrument()
{

}


MortgageInstrument &MortgageInstrument::operator =(const MortgageInstrument &a)
{
	if (this != &a)
	{
		this->m_monthlyPay=a.m_monthlyPay;
		this->m_propertyValue=a.m_propertyValue;
		this->m_downPayment = a.m_downPayment;
	}

	return *this;
}

double MortgageInstrument::getMonthlyPayment()
{
	return m_monthlyPay;
}

double MortgageInstrument::getPrincipal()
{
	return m_propertyValue - m_downPayment;
}