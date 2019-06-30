CC=gcc
CFLAGS=-I.
DEPS = message.h
OBJ = main.o message.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

main: main.c message.c
	$(CC) -o main.out main.c message.c $(CFLAGS)

.PHONY: clean

clean:
	rm -f *.o main.out

