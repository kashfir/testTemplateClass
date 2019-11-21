CC=g++
CFLAGS= -c -Wall -std=c++11

all: main

main: main.o Log.o List.o
	$(CC) $(POSIXFLAG) main.cpp Log.o List.o -o main

main.o: main.cpp
	$(CC) $(CFLAGS) $(POSIXFLAG) main.cpp

Log.o: Log.cpp
	$(CC) $(CFLAGS) Log.cpp

List.o: List.cpp
	$(CC) $(CFLAGS) List.cpp

clean:
	rm -rf *o main
