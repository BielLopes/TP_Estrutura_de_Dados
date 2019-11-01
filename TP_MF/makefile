output: main.o listafrascos.o
	g++ main.o listafrascos.o -o output
main.o: main.cpp
	g++ -c main.cpp
listafrascos.o: listafrascos.cpp listafrascos.h
	g++ -c listafrascos.cpp
clean:
	rm *.o output