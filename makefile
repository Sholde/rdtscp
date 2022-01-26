CC=gcc
CFLAGS=-Wall -Wextra
OFLAGS=-O2 -march=native -mtune=native
DFLAGS=-g
LFLAGS=

TARGET=main

.PHONY: all clean

all: $(TARGET)

$(TARGET): main.o rdtscp.o
	$(CC) $(LFLAGS) $^ -o $@

%.o: %.c
	$(CC) -c $(CFLAGS) $(OFLAGS) $(DFLAGS) $< -o $@

main.c: rdtscp.c rdtscp.h

rdtscp.c: rdtscp.h

clean:
	rm -Rf *~ *.o $(TARGET)
