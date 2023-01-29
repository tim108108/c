#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#include "linklist.h"

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

int Partition(int *arr, int front, int end){
    int pivot = arr[end];
    int i = front -1;
    for (int j = front; j < end; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    i++;
    swap(&arr[i], &arr[end]);
    return i;
}
void QuickSort(int *arr, int front, int end){
    if (front < end) {
        int pivot = Partition(arr, front, end);
        QuickSort(arr, front, pivot - 1);
        QuickSort(arr, pivot + 1, end);
    }
}

int binsearch(int *arr,int key,int n){
    int left=0,right=n;
    while(left<=right){
        int mid=(left+right)/2;
        if(arr[mid]>key){
            right=mid-1;
        }
        else if(arr[mid]<key){
            left=mid+1;
        }
        else{
            return mid;
        }
    }
    return -1;
}

#define SETBIT(a,pos) (a|=(1<<pos))
#define CLRBIT(a,pos) (a&=~(1<<pos))
#define TOGBIT(a,pos) (a^=(1<<pos))
#define TESBIT(a,pos) (a&(1<<pos)) 

int setbit(int a,int pos,bool b){
    if(b){
        return (a|(1<<pos));
    }
    return (a&~(1<<pos));
}

void string_reverse(char *ptr,int len){
    int i=0,j=len-1;
    while(i<j){
    *(ptr+i)^=*(ptr+j);
    *(ptr+j)^=*(ptr+i);
    *(ptr+i)^=*(ptr+j);
    i++;
    j--;
    }
}

void point(){
    int a[]={0,2,4,6,8};
    int *ptr=a;
    printf("*(ptr+0):%d\n",*ptr);
    printf("*(ptr+1):%d\n",*(ptr+1));
    // printf("*(ptr+2):%d\n",*(ptr+2));
    // printf("*(ptr+3):%d\n",*(ptr+3));
    printf("*(ptr+4):%d\n",*(ptr+4));//指向int的指標移動4個int(16byte)
    printf("*ptr+10:%d\n",*ptr+10);//指標的值(0)+10=10
    printf("ptr+0:%p\n",ptr);
    printf("ptr+1:%p\n",ptr+1);
    // printf("ptr+2:%p\n",ptr+2);
    // printf("ptr+3:%p\n",ptr+3);
    printf("ptr+4:%p\n",ptr+4);
    printf("ptr+5:%p\n",ptr+5);
    printf("&a+0     :%p\n",&a);//陣列的頭(&a[0])的位址
    printf("&a+1     :%p\n",&a+1);//陣列的頭(&a[0])增加一個a陣列長度的位址
    printf("&(a[0])+1:%p\n",&(a[0])+1);//陣列
    printf("&(a)+1   :%p\n",&(a)+1);
}

double leibniz(int n){
    double l=0;
    for(int k=1;k<=n;k++){
        l=l+pow(-1.0,k-1)/(2*k-1);
    }
    return 4*l;
}

void uplowcase(char *ptr,int len,bool up){
    if(up){
        for(int i=0;i<len;i++){
            if(*(ptr+i)<65||*(ptr+i)>122)continue;
            *(ptr+i)&=~(1<<5);
        }
    }
    else{
        for(int i=0;i<len;i++){
            *(ptr+i)|=(1<<5);
        }
    }
}

int main(){
    printf("This is c !!\n");
    char s[]="This is a Test.";
    // string_reverse(s,15);
    uplowcase(s,sizeof(s)-1,true);
    printf("%s\n",s);
    uplowcase(s,sizeof(s)-1,false);
    printf("%s\n",s);
    printf("\n");
}

