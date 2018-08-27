#include "TimeSeries.h"
#include <cmath>
#include <iostream>

TimeSeries::TimeSeries() : m_value()
{

}

TimeSeries::~TimeSeries()
{

}

TimeSeries::TimeSeries(const TimeSeries &ts) : m_value(ts.m_value)
{

}

TimeSeries &TimeSeries::operator = (const TimeSeries &ts)
{
	if (this != &ts)
	{
		m_value = ts.m_value;
	}
	return *this;
}

void TimeSeries::addValue(double val)
{
	m_value.push_back(val);
}

double TimeSeries::mean()
{
	double sum = 0;
	for (int i =0; i <m_value.size(); ++i)
	{
		sum += m_value[i];
	}
	return sum/m_value.size();
}

double TimeSeries::std()
{
	double m = mean();
	double sum = 0;
	for (int i =0; i < m_value.size(); ++i)
	{
		sum += pow(m_value[i] -m,2);
	}
	return sqrt(sum/(m_value.size()-1));
}

size_t TimeSeries::size()
{
	return m_value.size();
}

double TimeSeries::elem(int pos)
{
	return m_value[pos];
}

