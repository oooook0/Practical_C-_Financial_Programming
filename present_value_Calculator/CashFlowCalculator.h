#ifndef __CashFlowCalculator__
#define __CashFlowCalculator__

#include <vector>

using namespace std;

class CashFlowCalculator{
public:
	CashFlowCalculator(double rate);
	CashFlowCalculator(const CashFlowCalculator &v);
	CashFlowCalculator &operator =(const CashFlowCalculator &v);
	virtual ~CashFlowCalculator();

	void addCashPayment(double value, int timePeriod);
	double presentvalue();
private:
	vector<double> m_cashPayments;
	vector<int> m_timePeriods;
	double m_rate;
	double presentvalue(double futureValue, int timePeriod);

};

#endif