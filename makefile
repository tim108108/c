
main:main.c test.o linklist.o
	gcc main.c test.o linklist.o -Wall -o main.out 

test.o:test.c linklist.h stringedit.h
	gcc -Wall -c test.c 

linklist.o:linklist.h
	gcc linklist.c -Wall -c

clean:
	rm *.o main.out
