all: Correlation

Correlation: main.o CorrelationCalculator.o TimeSeries.o
	g++ CorrelationCalculator.o TimeSeries.o main.o -o Correlation

TimesSeries.o: TimeSeries.cpp
	g++ -c TimeSeries.cpp

CorrelationCalculator.o: CorrelationCalculator.cpp
	g++ -c CorrelationCalculator.cpp


main.o: main.cpp
	g++ -c main.cpp

clean:
	rm *.o Correlation