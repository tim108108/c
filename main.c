#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "linklist.h"
#include "stringedit.h"
#include "bitwise.h"

NODE *Xorop(NODE *x,NODE *y){
    return (NODE *)((unsigned long)(x) ^ (unsigned long)(y));
}

void xinsert(NODE **first,int itm){
    NODE *newnode;
    newnode=(NODE *)malloc(sizeof(NODE));
    newnode->data=itm;
    newnode->next=Xorop(*first,NULL);
    if(*first){
         (*first)->next=Xorop(newnode,Xorop((*first)->next,NULL));
    }
    *first=newnode;
}

void xtraverse(NODE *first){
    NODE *curr=first,*prev=NULL,*next;
    while (curr!=NULL)
    {
        printf("%d ",curr->data);
        next=Xorop(prev,curr->next);
        prev=curr;
        curr=next;
    }
    printf("error");
}

void fun_a(int num){
    printf("a%d\n",num);
}
void fun_b(int num){
    printf("b%d\n",num);
}

int main(){
    printf("This is c !!\n");
    char s[]="This is a Test.";
    string_reverse(s,15);
    printf("%s\n",s);
    uplowcase(s,sizeof(s)-1,true);
    printf("%s\n",s);

    int a[]={1,2,3,4,5,6};
    NODE *first;
    first=creatList(a,sizeof(a)/sizeof(a[0]));
    printList(first);
    insertNode(searchNode(first,3),0);
    printList(first);
    deleteNode(first,searchNode(first,3));
    printList(first);
    Qpush(first,12);
    printList(first);
    printList(Qpop(first));
    printList(first);
    freeList(first);
        
    /*function pointer*/ 
    void (*Fun_a)(int) = &fun_a;
    void (*Fun_b)(int) = &fun_b;
    Fun_a(12);
    Fun_b(13);

    typedef struct 
    {
        void (*point_a)();
        void (*point_b)();
    }oop;
    oop OOP;
    OOP.point_a=&fun_a;
    OOP.point_b=&fun_b;
    OOP.point_a(14);
    OOP.point_b(15);

    // showbinary(4);
    // showbinary(bitwiz(4,1,set));
}

