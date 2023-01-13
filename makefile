
all:test.c
	gcc test.c -Wall -o test

clean:
	rm -rf test
