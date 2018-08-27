#ifndef __CorrelationCalculator__
#define __CorrelationCalculator__

class TimeSeries;

class CorrelationCalculator
{
public:
	CorrelationCalculator(TimeSeries &a, TimeSeries &b);
	virtual ~CorrelationCalculator();
	CorrelationCalculator(const CorrelationCalculator &);
	CorrelationCalculator &operator =(const CorrelationCalculator &);

	double correlation();

private:
	TimeSeries &m_tsA;
	TimeSeries &m_tsB;
};

#endif 