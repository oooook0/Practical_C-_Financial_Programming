all: Volatity

Volatity: main.o VolatilityCalculator.o
	g++ VolatilityCalculator.o main.o -o Volatity

VolatilityCalculator.o: VolatilityCalculator.cpp
	g++ -c VolatilityCalculator.cpp

main.o: main.cpp
	g++ -c main.cpp

clean:
	rm *.o Volatity