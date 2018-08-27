all: PV_calculator

PV_calculator: main.o CashFlowCalculator.o
	g++ CashFlowCalculator.o main.o -o PV_calculator

CashFlowCalculator.o: CashFlowCalculator.cpp
	g++ -c CashFlowCalculator.cpp

main.o: main.cpp
	g++ -c main.cpp

clean:
	rm *.o PV_calculator