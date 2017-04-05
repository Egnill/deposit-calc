PREFIX = src/
PREFIX1 = build/
CC = gcc -Wall -Werror

all: myprog clean

myprog: $(PREFIX1)main.o $(PREFIX1)deposit.o
	gcc $(PREFIX1)main.o $(PREFIX1)deposit.o -o bin/deposit-calc

$(PREFIX1)main.o: $(PREFIX)main.c
	$(CC) -c $(PREFIX)main.c -o $(PREFIX1)main.o

$(PREFIX1)deposit.o: $(PREFIX)deposit.c
	$(CC) -c $(PREFIX)deposit.c -o $(PREFIX1)deposit.o

.PHONY: all clean

clean:
	rm -f build/*.o