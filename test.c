#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}Node;
void add_node(Node **start,int value){
    Node *new_node=(Node*)malloc(sizeof(Node));
    new_node->data=value;
    new_node->next=NULL;
    if(*start==NULL){
        *start=new_node;
        return;
    }
    else{
        Node *current;
        current=*start;
        while(current->next!=NULL){
            current=current->next;
        }
        current->next=new_node;
        return;
    }
}

void linklist(){
    Node *head=(Node*)malloc(sizeof(Node));
    head->data=12;
    head->next=NULL;
    Node *node2=(Node*)malloc(sizeof(Node));
    node2->data=13;
    node2->next=NULL;
    head->next=node2;
    Node *node3=(Node*)malloc(sizeof(Node));
    node3->data=14;
    node3->next=NULL;
    node2->next=node3;
    Node *current=(Node*)malloc(sizeof(Node));
    current=head;
    while(current!=NULL){
        printf("%d,",current->data);
        current=current->next;
    }
    printf("\n");
    //printf("a is %d(ptr=%p).\n",head->data,head->next);
    //printf("memory is location of a is %p\n",&head);
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
void swapchar(char* a, char* b) {
    char t = *a;
    *a = *b;
    *b = t;
}
void reverseString(char* s, int sSize){
    if (s == NULL) {return;}
    int j = sSize - 1;
    for (int i = 0; i < sSize/2; i++) {
        swapchar( &s[i], &s[j] );
        j--;
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
    printf("*(ptr+2):%d\n",*(ptr+2));
    printf("*(ptr+3):%d\n",*(ptr+3));
    printf("*(ptr+4):%d\n",*(ptr+4));//指向int的指標移動4個int(16byte)
    printf("*ptr+10:%d\n",*ptr+10);//指標的值(0)+10=10
    printf("ptr+0:%p\n",ptr);
    printf("ptr+1:%p\n",ptr+1);
    printf("ptr+2:%p\n",ptr+2);
    printf("ptr+3:%p\n",ptr+3);
    printf("ptr+4:%p\n",ptr+4);
    printf("ptr+5:%p\n",ptr+5);
    printf("&a+0:%p\n",&a);//陣列的頭(&a[0])的位址
    printf("&a+1:%p\n",&a+1);//陣列的頭(&a[0])增加一個a陣列長度的位址
}

int main(){
    printf("This is c test!!\n");
    // char c[]="hello word";//len=10
    point();
}

