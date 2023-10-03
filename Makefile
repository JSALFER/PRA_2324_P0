all: main

main: main.o BrazoRobotico.o
	g++ -o main main.o BrazoRobotico.o
	
main.o: main.cpp BrazoRobotico.h
	g++ -c main.cpp
	
BrazoRobotico.o: BrazoRobotico.cpp BrazoRobotico.h
	g++ -c BrazoRobotico.cpp
	
clean: 
	rm -f *.o main

test: all
	./main
