all: myprog
PREFIX = src/
PREFIX1 = build/

myprog: $(PREFIX1)main.o $(PREFIX1)deposit.o
	gcc $(PREFIX1)main.o $(PREFIX1)deposit.o -o bin/deposit-calc

$(PREFIX1)main.o: $(PREFIX)main.c
	gcc -Wall -Werror -c $(PREFIX)main.c -o $(PREFIX1)main.o
	#gcc -E $(PREFIX)main.c -o $(PREFIX1)main.i
	#gcc -S $(PREFIX1)main.i -o $(PREFIX1)main.s
	#gcc -c $(PREFIX1)main.s -o $(PREFIX1)main.o

$(PREFIX1)deposit.o: $(PREFIX)deposit.c
	gcc -Wall -Werror -c $(PREFIX)deposit.c -o $(PREFIX1)deposit.o
	#gcc -E $(PREFIX)deposit.c -o $(PREFIX1)deposit.i
	#gcc -S $(PREFIX1)deposit.i -o $(PREFIX1)deposit.s
	#gcc -c $(PREFIX1)deposit.s -o $(PREFIX1)deposit.o
clean:
	rm -f build/*.o
	rm -f build/*.i
	rm -f build/*.s