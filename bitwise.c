#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int setbit(int a,int pos,bool b){
    if(b){
        return (a|(1<<pos));
    }
    return (a&~(1<<pos));
}

void showbinary(int a){
    int SIZE=8;
    int s[SIZE];
    for(int i=0;i<SIZE;i++){
        *(s+(SIZE-1)-i)=a%2; 
        a/=2;       
    }
    for(int i=0;i<SIZE;i++){
        printf("%d",s[i]);
    }
    printf("\n");
}