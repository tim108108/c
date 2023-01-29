
main:main.c test.o 
	gcc main.c test.o -Wall -o main.out

test.o:test.c linklist.h stringedit.h
	gcc test.c -Wall -c

linklist.o:linklist.h
	gcc linklist.c -Wall -c

clean:
	rm *.o main.out
