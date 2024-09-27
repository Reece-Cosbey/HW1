CC = g++
CFLAGS = -g -Wall -Wextra

default: Vector

Vector: Vector.o main.o
	$(CC) $(CFlags) -o Vector.o main.o

Vector.o: Vector.cpp Vector.h
	$(CC) $(CFlags) -o Vector.cpp

main.o: main.cpp Vector.h
	$(CC) $(CFlags) -o main.cpp

clean:
	$(RM) Vector *.o *~
