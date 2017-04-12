PREFIX = src/
PREFIX1 = build/src/
PREFIX2 = build/test/
PREFIX3 = test/
CC = gcc -Wall -Werror
CC1 = gcc -I thirdparty src

prog: myprog clean

myprog: $(PREFIX1)main.o $(PREFIX1)deposit.o
	gcc $(PREFIX1)main.o $(PREFIX1)deposit.o -o bin/deposit-calc

$(PREFIX1)main.o: $(PREFIX)main.c
	$(CC) -c $(PREFIX)main.c -o $(PREFIX1)main.o

$(PREFIX1)deposit.o: $(PREFIX)deposit.c
	$(CC) -c $(PREFIX)deposit.c -o $(PREFIX1)deposit.o

test: mytest clean

mytest: $(PREFIX2)main.o $(PREFIX2)deposit_test.o
	gcc $(PREFIX2)main.o $(PREFIX2)deposit_test.o -o bin/deposit_test

$(PREFIX1)main.o: $(PREFIX3)main.c
	$(CC1) -c $(PREFIX3)main.c -o $(PREFIX2)main.o

$(PREFIX1)deposit.o: $(PREFIX3)deposit_test.c
	$(CC1) -c $(PREFIX3)deposit_test.c -o $(PREFIX2)deposit_test.o

.PHONY: all clean

clean:
	rm -f build/*.o