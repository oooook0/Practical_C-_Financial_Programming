#include "InvestmentInstrument.h"
#include "IntRateEngine.h"

#include <iostream>

int main()
{
	IntRateEngine<BondInstrument> engineA;
	IntRateEngine<MortgageInstrument> engineB;

	BondInstrument bond(40000,250);
	MortgageInstrument mortgage(250, 50000, 5000);
	engineA.setInstrument(bond);
	engineB.setInstrument(mortgage);

	std::cout << " bond annual int rate: " << engineA.getAnnualIntRate()*100 << "% "<< std::endl;
	std::cout << " mortgage annual int rate: " << engineB.getAnnualIntRate()*100 << "%"<< std::endl;
	return 0;
}