CC = g++
CFLAGS = -c -Wall

main: main.o Product.o
	$(CC) main.o Product.o -o main

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp 

Product.o: Product.cpp Product.hpp
	$(CC) $(CFLAGS) Product.cpp 

clean:
	rm *.o main
