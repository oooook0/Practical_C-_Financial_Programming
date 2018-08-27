all: IRR_calculator

IRR_calculator: BondCalculator.o
	g++ BondCalculator.o -o IRR_calculator

BondCalculator.o: BondCalculator.cpp
	g++ -c BondCalculator.cpp
clean:
	rm *.o IRR_calculator