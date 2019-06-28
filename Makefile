CC=gcc
CFLAGS=-I.
OBJ = main.o message.o

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)

main: main.c message.c
	$(CC) -o main main.c message.c $(CFLAGS)

.PHONY: clean

clean:
	rm -f *.o main

