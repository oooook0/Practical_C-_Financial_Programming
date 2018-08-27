#ifndef __TimesSeries__
#define __TimesSeries__

#include <vector>

class TimeSeries
{
public:
	TimeSeries();
	TimeSeries(const TimeSeries &);
	TimeSeries &operator =(const TimeSeries &);
	virtual ~TimeSeries();

	void addValue(double val);
	double std();
	double mean();
	size_t size();
	double elem(int i);


private:
	std::vector<double> m_value;
};

#endif