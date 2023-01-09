#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}Node;

void linklist(){
    Node a;
    a.data=12;
    printf("a is %d(ptr=%p).\n",a.data,a.next);
    printf("memory is location of a is %p\n",&a);
}
void Q1(int *in, int size){
    int *ptr = in;
    for(int i=0;i<size;i++){
        if (*ptr == i){
            ptr++;
        }
        else{
            printf("%d\n",i);

        }
    }
    
}

void Q2(int *a,int size,int b){
    int *ptr=a;
    
    while(*ptr<b*100){
        ptr++;
    }
    
    for(int i=0;i<(b+1)*100;i++){
        if(*ptr==i){
            ptr++;
        }
        else{
            printf("%d\n",i);
        }
    }
}
int main(){
    printf("This is c test\n");
    //linklist();
    int a[]={1,3,5,7,9};
    //Q1(&a[0],10);
    Q2(&a[0],200,0);
}

