all: Fundamentals

Fundamentals: main.o FundamentalsCalc.o
	g++ FundamentalsCalc.o main.o -o Fundamentals

FundamentalsCalc.o: FundamentalsCalc.cpp
	g++ -c FundamentalsCalc.cpp

main.o: main.cpp
	g++ -c main.cpp

clean:
	rm *.o Fundamentals