#include <stdio.h>
#include <stddef.h> //for NULL
#include <stdlib.h> //for dynamic memory allocation
#include <string.h>


float arrayAvg(int *array, const int n){
    float sum = .0;
    int * const arrayEnd = array + n;

    for(;array<arrayEnd;++array){
        sum+= *array;
    }

    return (sum/n);
}

//3 identical copy string functions

void copyString(char to[], char from[]){
    int i;
    for(int i = 0; from[i] != '\0'; ++i){
        to[i] = from[i];
    }
    to[i] = '\0';
}

void pcopyString(char * to, char * from){ 
    for(; *from != '\0'; ++from, ++to){
        *to = *from;
    }
    *to ='\0';
}

void pcopyStringOptimal(char * to, char * from){ 
    while(*from){ //the null character is equal to the value 0, so will jump out then
        *to++ = *from++;
    }
    *to = '\0';
}

//pass by value
void swap(int x, int y){ 
    int temp = x;
    x = y;
    y = temp;

    return;
}

//pass by reference
void pswap(int * x, int * y){
    int temp;

    temp = *x; //saves the value at address x
    *x = *y; //makes value at address x = value at address y
    *y = temp; //makes value at address y = temp

    return;
}

//returning pointers
char * revStr(char * str, const int n){
    char reverse[n+1];
    char * preverse = reverse;
    
    int i = n;
    while(*str){
        i--;
        reverse[i] = *str;
        str++;
    }

    printf("This val: %s", preverse);
    return &reverse;
}


int main(){

    // - pointer arithmetic -

    int list[10] = {1,2,3,4,5,6,7,8,9,10};
    
    int * const arrayEnd = list + 10; //sets arrayEnd to be length of array as an address

    for(int * plist = list; plist<arrayEnd; plist++){
        printf("\n%d",*(plist));//incrementing plist by 1 moves to the next index in array
    }

    printf("\nAverage of list: %f", arrayAvg(list, 10));

    //pointers/arrays example 1

    char multiple[] = "a string";
    char * p = multiple;

    for(int i =0; i<strlen(multiple); ++i){
        printf("\nmultiple[%d] = %c *(p+%d) = %c &multiple[%d] = %p p+%d = %p\n", i, multiple[i], i, *(p+i), i, &multiple[i], i, p+i);
    }

    //example 2

    long multLong[] = {15L, 25L, 35L, 45L};
    long *pl = multLong;

    for(int i =0; i<sizeof(multLong)/sizeof(multLong[0]); ++i){
        printf("\naddress p+%d(&multiple[%d]): %llu *(p+%d) value: %ld\n", i, i, (unsigned long long)(pl+i), i, *(pl+i));
    }
    
    printf("\nType long occupies: %d bytes\n",(int)sizeof(long));

    // - pointers and strings -
    //see copy string functions

    char str1[] = "Woah! This C stuff is pretty wacky!";
    char str2[500];

    pcopyStringOptimal(str2, str1);

    printf("%s\n", str2);

    // - pass by reference - 

    //pass by value - when a function copies the actual value of an argument into the parameter of the function
    int a = 100;
    int b = 200;

    printf("\nBefore swap, value of a: %d value of b: %d\n", a, b);

    swap(a,b);

    printf("After swap, value of a: %d value of b: %d\n", a, b); // changes were local. No change in these variables
    
    //pass by reference - copies the address of an argument into the formal parameter. This address is used to change the actual parameter in memory.
    printf("\nBefore swap, value of a: %d value of b: %d\n", a, b);

    pswap(&a, &b); //pass in address of a and b

    printf("After swap, value of a: %d value of b: %d\n", a, b); // changes were to data in memory. Results in swap.

    //returning pointers from functions
    char str[] = "Hello";

    revStr(str, 6);

    // - dynamic memory allocation -

    //malloc() - allocates memory through specifying bytes, and returns the address of the first byte of allocated memory
    int * pNumber = (int*)malloc(100); //requesting 100 bytes of memory. this will hold 25 int values (assuming int: 4 bytes each)

    int * pBetterNumber = (int*)malloc(25*sizeof(int)); //will hold 25 int values regardless of int size
    if(!pBetterNumber){//if malloc() fails, it will point to null.
        printf("Unable to allocate memory at pBetterNumber");
        return 0;
        //you can't allocate memory. exit the program. 
    }

    //free() - frees memory in the heap
    free(pNumber); //can pass in pointer of any type as arguement
    pNumber = NULL;

    //calloc() - allocates memory as a number of elements of a given size. initializes where all bytes are 0.
    int *pCallInt = (int*) calloc(75, sizeof(int)); //requesting 75 ints of memory. all the ints are initialized to 0.

    //realloc() - allows you to reuse/extend memory previously allocated using malloc() or calloc()
    pCallInt = (int*) realloc(pCallInt, 25); //adds 25 bytes to pCallInt

    free(pCallInt);
    free(pBetterNumber);
    pCallInt = NULL;
    pBetterNumber = NULL;

    return 0;
}