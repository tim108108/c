#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int setbit(int a,int pos,bool b){
    if(b){
        return (a|(1<<pos));
    }
    return (a&~(1<<pos));
}

char *dec2bin(int a){
    char s[];
    
}