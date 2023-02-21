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
    for(int z=0;z<20;z++){
        xinsert(&xlist,z);
    }
    xtraverse(xlist);
    

    // showbinary(4);
    // showbinary(bitwiz(4,1,set));
}

