all: compound_calculator

compound_calculator: main.o CompoundInterestCalculator.o
	g++ CompoundInterestCalculator.o main.o -o compound_calculator

CompoundInterestCalculator.o: CompoundInterestCalculator.cpp
	g++ -c CompoundInterestCalculator.cpp

main.o: main.cpp
	g++ -c main.cpp

clean:
	rm *.o compound_calculator