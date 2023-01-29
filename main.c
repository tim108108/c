#include <stdio.h>
#include <stdbool.h>
#include "stringedit.h"

int main(){
    printf("This is c !!\n");
    char s[]="This is a Test.";
    string_reverse(s,15);
    point();
    uplowcase(s,sizeof(s)-1,true);
    printf("%s\n",s);
    printf("%s\n",s);
}