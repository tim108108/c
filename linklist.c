#include <stdio.h>
#include "linklist.h"

NODE *creatList(int *arr,int len){
    int i;
    NODE *first,*current,*previuos;
    for(i=0;i<len;i++){
        current=(NODE *) malloc(sizeof(NODE));
        current->data=arr[i];
        if(i==0){
            first=current;
        }
        else{
            previuos->next=current;
        }
        current->next=NULL;
        previuos=current;
    }
    return first;
}