#include <stdio.h>
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

int main(){
    printf("This is c test\n");
    //linklist();
    int a[5]={1,4,3,2,5};
    //Q1(&a[0],10);
    //Q2(&a[0],200,0);
    //prtary();
    //QuickSort(a,0,5);
}

