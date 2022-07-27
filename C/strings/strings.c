#include <stdio.h>
#include <stdbool.h> 

// - constant strings - 
#define TAXRATE 0.015 //no semicolon
#define CONST_STRING "This string will not change."

int main(){

    //strings in memory are arrays of ints, corresponding to the chars they represent.

    printf("This part will be printed\0This part will not"); //a string is always terminated by a null character (\0)

    // - defining a character string -
    char myString[7] = {'H','e','l','l','o','!'}; // can hold up to 19 characters and 1 for null.

    char betterString[] = {"Better :)"}; //Let the compiler do the work. 

    printf("\n\nMy string: %s\n\nBetter string: %s\n",myString, betterString); //Assumes that %s is a null-terminated string

    // - inputting string -
    char inputString[40];
    printf("\nPlease input your name: ");
    scanf("%s", inputString); // & is not needed for string or char
    printf("\nHello %s", inputString);
    
    // - constant declaration -
    const int MONTHS = 12; //lets you declare type. Allows for better control of where it can be used.

    //enums also work for creating symbolic constants

    const char standardMessage[] = "This message cannot be changed.";

    return 0;
}