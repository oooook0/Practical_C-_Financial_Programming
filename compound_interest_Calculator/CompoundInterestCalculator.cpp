#include "CompoundInterestCalculator.h"

#include <cmath>

CompoundInterestCalculator::CompoundInterestCalculator(double rate): m_rate(rate)
{

}

CompoundInterestCalculator::~CompoundInterestCalculator()
{

}

CompoundInterestCalculator::CompoundInterestCalculator(const CompoundInterestCalculator &v): m_rate(v.m_rate)
{

}

CompoundInterestCalculator &CompoundInterestCalculator::operator= (const CompoundInterestCalculator &v)
{
	if (this != &v)
	{
		this->m_rate = v.m_rate;
	}
	return *this;
}

double CompoundInterestCalculator::multiplePeriod(double value, int numPeriod)
{
	double f = value * pow((1+ m_rate), numPeriod);
	return f;
}

double CompoundInterestCalculator::continuousCompounding(double value, int numPeriod)
{
	double f = value * exp(m_rate*numPeriod);
	return f;
}
