CC = g++
CFLAGS = -c -Wall

main: main.o zona1.o zona2.o zona3.o
	$(CC) main.o zona1.o zona2.o zona3.o -o main

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp 

zona1.o: zona1.cpp zona1.hpp
	$(CC) $(CFLAGS) zona1.cpp 

zona2.o: zona2.cpp zona2.hpp
	$(CC) $(CFLAGS) zona2.cpp 

zona3.o: zona3.cpp zona3.hpp
	$(CC) $(CFLAGS) zona3.cpp 

clean:
	rm *.o main