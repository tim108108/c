#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "linklist.h"
#include "stringedit.h"
#include "bitwise.h"

NODE *Xorop(NODE *x,NODE *y){
    return (NODE *)((unsigned long)(x) ^ (unsigned long)(y));
}

void xinsert(NODE **current,int itm){
    NODE *newnode;
    newnode=(NODE *)malloc(sizeof(NODE));
    newnode->data=itm;
    
    newnode->next=Xorop(*current,NULL);
    if(*current){
         (*current)->next=Xorop(newnode,Xorop((*current)->next,NULL));
    }
    *current=newnode;
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

    NODE *xlist;
    xinsert(&xlist,1);

    // showbinary(4);
    // showbinary(bitwiz(4,1,set));
}

