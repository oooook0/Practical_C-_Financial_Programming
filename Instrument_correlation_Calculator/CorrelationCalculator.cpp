#include "CorrelationCalculator.h"

#include "TimeSeries.h"
#include <iostream>

CorrelationCalculator::CorrelationCalculator(TimeSeries &a, TimeSeries &b) : m_tsA(a), m_tsB(b)
{

}

CorrelationCalculator::~CorrelationCalculator()
{

}

CorrelationCalculator &CorrelationCalculator::operator=(const CorrelationCalculator &v)
{
	if (this != &v)
	{
		m_tsA = v.m_tsA;
		m_tsB = v.m_tsB;
	}
	return *this;

}

CorrelationCalculator::CorrelationCalculator(const CorrelationCalculator &v) : m_tsA(v.m_tsA), m_tsB(v.m_tsB)
{

}

double CorrelationCalculator::correlation()
{
	double sum =0;
	double meanA = m_tsA.mean();
	double meanB = m_tsB.mean();

	if (m_tsA.size() != m_tsB.size())
	{
		std::cout << "error: number of obervation is different" << std::endl;
		return -1;
	}

	for (int i = 0; i <m_tsA.size(); ++i)
	{
		sum += (m_tsA.elem(i) - meanA)*(m_tsB.elem(i) -meanB);
	}

	double stdA = m_tsA.std();
	double stdB = m_tsB.std();
	sum /= (stdA*stdB);
	return sum / (m_tsB.size() -1);
}

