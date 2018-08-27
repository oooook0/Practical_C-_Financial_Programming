#include "FundamentalsCalc.h"

#include <iostream>

FundamentalsCalcualtor::FundamentalsCalcualtor(const std::string &ticker, double price, double dividend) :
m_ticker(ticker),
m_price(price),
m_dividend(dividend),
m_earningsEstimate(0),
m_numShares(0),
m_bookValue(0),
m_assets(0),
m_liabilitiesAndIntangibles(0),
m_epsGrowth(0),
m_netIncome(0),
m_shareholdersEquity(0)
{

}

FundamentalsCalcualtor::FundamentalsCalcualtor(const FundamentalsCalcualtor &v) :
m_ticker(v.m_ticker),
m_price(v.m_price),
m_dividend(v.m_dividend),
m_earningsEstimate(v.m_earningsEstimate),
m_numShares(v.m_numShares),
m_bookValue(v.m_bookValue),
m_assets(v.m_assets),
m_liabilitiesAndIntangibles(v.m_liabilitiesAndIntangibles),
m_epsGrowth(v.m_epsGrowth),
m_netIncome(v.m_netIncome),
m_shareholdersEquity(v.m_shareholdersEquity)
{

}


FundamentalsCalcualtor::~FundamentalsCalcualtor()
{

}

FundamentalsCalcualtor &FundamentalsCalcualtor::operator=(const FundamentalsCalcualtor &v) 
{
	if (this != &v)
	{
		m_ticker=v.m_ticker;
		m_price=v.m_price;
		m_dividend=v.m_dividend;
		m_earningsEstimate=v.m_earningsEstimate;
		m_numShares=v.m_numShares;
		m_bookValue=v.m_bookValue;
		m_assets=v.m_assets;
		m_liabilitiesAndIntangibles=v.m_liabilitiesAndIntangibles;
		m_epsGrowth=v.m_epsGrowth;
		m_netIncome=v.m_netIncome;
		m_shareholdersEquity=v.m_shareholdersEquity;
	}

	return *this;
}

void FundamentalsCalcualtor::setNumOfShares(int n)
{
	m_numShares = n;
}

void FundamentalsCalcualtor::setEarnings(double val)
{
	m_earnings = val;
}

void FundamentalsCalcualtor::setExpectedEarnings(double val)
{
	m_earningsEstimate = val;
}

void FundamentalsCalcualtor::setBookValue(double val)
{
	m_bookValue = val;
}

void FundamentalsCalcualtor::setAssets(double val)
{
	m_assets = val;
}

void FundamentalsCalcualtor::setLiabilitirsAndIntangibles(double val)
{
	m_liabilitiesAndIntangibles = val;
}

void FundamentalsCalcualtor::setEpsGrowth(double val)
{
	m_epsGrowth = val;
}

void FundamentalsCalcualtor::setNetIncome(double val)
{
	m_netIncome = val;
}

void FundamentalsCalcualtor::setShareHoldersEquity(double val)
{
	m_shareholdersEquity = val;
}



double FundamentalsCalcualtor::PE()
{
	return (m_price* m_numShares) / m_earnings;
}

double FundamentalsCalcualtor::forwardPE()
{
	return (m_price* m_numShares) / m_earningsEstimate;
}

double FundamentalsCalcualtor::returnOnEquity()
{
	return m_netIncome / m_shareholdersEquity;
}

double FundamentalsCalcualtor::getDividend()
{
	return m_dividend;
}

double FundamentalsCalcualtor::bookValue()
{
	return m_bookValue;
}

double FundamentalsCalcualtor::priceEarningToGrowth()
{
	return PE()/m_epsGrowth;
}

double FundamentalsCalcualtor::priceToBookRtio()
{
	return (m_price*m_numShares) /(m_assets - m_liabilitiesAndIntangibles);
}