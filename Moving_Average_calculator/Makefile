all: MA_calculator

MA_calculator: main.o MAcalculator.o
	g++ MAcalculator.o main.o -o MA_calculator

MAcalculator.o: MAcalculator.cpp
	g++ -c MAcalculator.cpp

main.o: main.cpp
	g++ -c main.cpp

clean:
	rm *.o MA_calculator