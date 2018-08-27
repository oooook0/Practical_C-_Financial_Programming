#include "MAcalculator.h"
#include <iostream>

MAcalculator::MAcalculator(int period): m_numPeriods(period)
{

}

MAcalculator::~MAcalculator()
{

}

MAcalculator::MAcalculator(const MAcalculator &v): m_numPeriods(v.m_numPeriods)
{

}

MAcalculator &MAcalculator::operator=(const MAcalculator &v)
{
	if (this != &v)
	{
		m_numPeriods = v.m_numPeriods;
		m_prices = v.m_prices;
	}
	return *this;
}

std::vector<double> MAcalculator::calculateMA()
{
	std::vector<double> v;
	double sum = 0;
	for (int i =0; i < m_prices.size(); ++i)
	{
		sum += m_prices[i];
		if (i >= m_numPeriods)
		{
			v.push_back(sum / m_numPeriods);
			sum -= m_prices[i- m_numPeriods];
		}
	}
	return v;
}

std::vector<double> MAcalculator::calculateEMA()
{
	std::vector<double> ema;
	double sum = 0;
	double mutiplier =2.0 / (m_numPeriods + 1);
	for (int i =0; i< m_prices.size(); ++i)
	{
		sum += m_prices[i];
		if (i== m_numPeriods)
		{
			ema.push_back(sum/ m_numPeriods);
			sum -= m_prices[i - m_numPeriods];
		}
		else if (i > m_numPeriods)
		{
			double val = (1 - mutiplier)* ema.back() + mutiplier* m_prices[i];
			ema.push_back(val);
		}
	}
	return ema;
	
}

void MAcalculator::addPriceQuote(double close)
{
	m_prices.push_back(close);
}
