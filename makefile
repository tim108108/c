
main:main.c stringedit.o linklist.o
	gcc main.c stringedit.o linklist.o -Wall -o main.out 

stringedit.o:stringedit.h
	gcc stringedit.c -Wall -c 

linklist.o:linklist.h
	gcc linklist.c -Wall -c

clean:
	rm *.o main.out
