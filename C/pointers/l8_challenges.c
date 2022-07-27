#include <stdio.h>
#include <stddef.h> //for NULL
#include <stdlib.h> //for dynamic memory allocation

int len(char * const str){
    char * pinit = str;
    while(*pinit){
        pinit++;
    }
    int len =  (int)(pinit - str);
    return len;
}

void sqrnum(int * i){
    *i *= *i;
    return;
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

    //pointers as params (mimic pass by reference)
    int i = 4;
    printf("\n\nThe square root of %d is ", i);
    sqrnum(&i);
    printf("%d.", i);

    //dynamic memory challenge
    char *pstring = NULL;
    int input;

    printf("\n\nEnter the number of characters: ");
    scanf("%d", &input); //if inputted number is too small for number of chars, this will cause a buffer overflow but not error
    pstring = (char *) malloc(input * sizeof(char));
    if(pstring != NULL){
        printf("\nEnter your string: ");
        scanf(" ");
        gets(pstring);
        printf("Your string: %s", pstring);
        
    }
    free(pstring);

    return 0;
}