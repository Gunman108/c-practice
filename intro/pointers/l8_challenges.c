#include <stdio.h>
#include <stddef.h> //for NULL

int len(char * const str){
    char * pinit = str;
    while(*pinit){
        pinit++;
    }
    int len =  (int)(pinit - str);
    return len;
}

int main(){
    //pointer basics
    int number = 5;
    int * pnumber = NULL;

    pnumber = &number;
    printf("\nAddress of pointer: %p\nValue of pointer: %p\nWhat pointer is pointing to: %d",(void*)&pnumber, pnumber, *pnumber);

    //counting chars
    char str[] = "Gunner is the best";
    char * pstr = str;

   printf("\nSize of string \"%s\" is %d",str,len(pstr));


    return 0;
}