CC=g++
CFLAGS=-Wall -Werror -ansi -pedantic
SRC=weathersummary.cpp Weather.cpp Node.cpp List.cpp Iter.cpp
OBJ=Weather.o Node.o List.o Iter.o
TARGET=weatherextract

weatherextract: $(SRC) $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

Weather.o: Weather.cpp
	$(CC) $(CFLAGS) -c -o Weather.o Weather.cpp

Node.o: Node.cpp Weather.o
	$(CC) $(CFLAGS) -c -o Node.o Node.cpp
	
List.o: List.cpp Node.o
	$(CC) $(CFLAGS) -c -o List.o List.cpp

Iter.o: Iter.cpp List.o
	$(CC) $(CFLAGS) -c -o Iter.o Iter.cpp
	
clean:
	rm $(TARGET) *.o
	
debug: $(SRC) $(OBJ)
	$(CC) $(CFLAGS) -o -g $(TARGET) $(SRC)