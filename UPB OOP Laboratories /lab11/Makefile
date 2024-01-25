CC = g++
CFLAGS = -c -Wall

main: main.o Produs.o
	$(CC) main.o Produs.o -o main

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp 

Produs.o: Produs.cpp Produs.hpp
	$(CC) $(CFLAGS) Produs.cpp
	
clean:
	rm *.o main