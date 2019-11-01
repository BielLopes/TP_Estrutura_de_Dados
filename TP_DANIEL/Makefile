CC=g++

main.o: main.cpp listas.h RichSanchez.h
	${CC} -c main.cpp

RichSanchez.o: RichSanchez.cpp RichSanchez.h listas.h
	${CC} -c RichSanchez.cpp

listas.o: listas.h listas.cpp
	${CC} -c listas.cpp

all: main.o RichSanchez.o listas.o
	${CC} main.o listas.o RichSanchez.o -o exec

