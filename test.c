#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}Node;

int main(){
    printf("hi a1\n");
    Node a;
    a.data=12;
    printf("a is %d(ptr=%p).\n",a.data,a.next);
    printf("memory is location of a is %p\n",&a);
}

