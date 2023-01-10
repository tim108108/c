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

void prtary(){
    int a[5]={1,2,3,4,5};
    int *p1=a;
    int *p2=a;
    printf("{1,2,3,4,5}\n");
    printf("print:*(a++)=%d\n",*(p1++));
    printf("print:*(++a)=%d\n",*(++p2));
}

void swap(int *a,int *b){
    int tmp;
    tmp=*a;
    *a=*b;
    *b=tmp;
}

void QuickSort(int *data,int left,int right){
    if(left>=right){return ;}

    int i, j, pivot;
    i = left+1;
    j = right;
    pivot = data[left];
    while(i!=j){
        while(data[i]<pivot && i<j){
            i++; 
        }
        while(data[j]>pivot && i<j){
            j--;
        }
        if(i>j){break;}
        if (i<j){
            swap(&data[i],&data[j]);
        }
    }
    swap(&data[left],&data[j]); 
    QuickSort(data, left, j - 1);
    QuickSort(data, j + 1, right);
}

int main(){
    printf("This is c test\n");
    //linklist();
    int a[5]={1,4,3,2,5};
    //Q1(&a[0],10);
    //Q2(&a[0],200,0);
    //prtary();
    QuickSort(a,0,5);
    for(int i=0;i<5;i++){
        printf("%d\n",a[i]);
    }
}

