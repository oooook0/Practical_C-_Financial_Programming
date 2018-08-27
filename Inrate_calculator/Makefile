all: calculator

calculator: main.o IntRateCalculator.o
	g++ IntRateCalculator.o main.o -o calculator

IntRateCalculator.o: IntRateCalculator.cpp
	g++ -c IntRateCalculator.cpp

main.o: main.cpp
	g++ -c main.cpp

clean:
	rm *.o calculator