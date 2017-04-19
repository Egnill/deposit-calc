CC := gcc
CFLAGS := -c -Wall -Werror
LFLAGS := -I thirdparty -I src -c 
EXE := bin/deposit-calc
EXE_TEST := bin/deposit-calc-test

all: $(EXE) $(EXE_TEST)

$(EXE): build/src/main.o build/src/deposit.o
		$(CC) build/src/main.o build/src/deposit.o -o $@

build/src/main.o: src/main.c src/deposit.h
		$(CC) $(CFLAGS) src/main.c -o $@   

build/src/deposit.o: src/deposit.c 
		$(CC) $(CFLAGS) src/deposit.c -o $@ 

$(EXE_TEST): build/test/deposit_test.o build/test/validation_test.o build/test/main.o build/src/deposit.o
		$(CC) build/test/deposit_test.o build/test/validation_test.o build/test/main.o build/src/deposit.o -o $@

build/test/deposit_test.o: test/deposit_test.c       
		$(CC) $(LFLAGS) test/deposit_test.c -o $@   

build/test/validation_test.o: test/validation_test.c   
		$(CC) $(LFLAGS) test/validation_test.c -o $@

build/test/main.o: test/main.c 
		$(CC) -I thirdparty -c test/main.c -o $@

.PHONY: all clean

clean:	
		rm -rf build/src/*.o
		rm -rf build/test/*.o
		rm -rf bin/*