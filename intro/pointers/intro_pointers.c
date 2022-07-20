#include <stdio.h>
#include <stddef.h> //for NULL

int main(){

    // - declaring a pointer -

    int number = 99;
    int * pint; //can only point to an int

    //programmers use the space between * in declaration and omit it when dereferencing a variable
    //pointer is saved internally as an unsigned int, but you can't do the same things that you do with ints

    int *pnull = NULL; //NULL is equivalent of zero for a pointer

    printf("%p", pnull); //format specifier for pointers

    int * pnumber = &number; //contains the address of the variable number

    double value, *pVal, fnum; //only pVal is a pointer
    int *p, q; //only p is a pointer

    // - accessing pointers -

    int num = 15;
    int * pnum = &number;
    int result = 0;

    result = *pnum + 5; //evaluates the value stored at the container. becomes 15+5. result is 20.

    int count = 10, x;
    int * pcount;
    pcount = &count; //assigning to pointer on different line
    x = *pcount; //dereference

    printf("\n\nCount = %i, x = %i\n", count, x); //will both be 10
    printf("pcount: %p, address of pcount: %p\n", pcount, (void*)&pcount); //the & operator references the address that the pnumber variable occupies (the address of the address of the int)
    printf("Size of pcount: %d\n",(int)sizeof(pcount)); //the size of the address of pcount

    // - using pointers -

    //changing the values pointers are pointing to
    long num1 = 0L;
    long num2 = 0L;
    long * plong = NULL;

    plong = &num1;
    *plong = 2L;
    ++num2;
    num2 += *plong;

    plong = &num2;
    ++*plong;

    printf("\n\nnum1 = %ld num2 = %ld *plong = %ld *plong + num2 = %ld\n", num1, num2, *plong, (*plong + num2));

    //pointers with scanf()

    int input = 0;
    int * pinput=&input;

    printf("Input an integer: ");
    scanf(" %d", pinput); //ampersand is not needed since pinput is already a pointer

    printf("You entered %d.\n", input);
    printf("Or %d", *pinput);

    //checking for nulls

    //DO NOT dereference an uninitialized pointer

    // int * pt;
    // *pt = 5; could place 5 anywhere in program storage

    //always assign a memeory location when initializing a pointer. if no location, assign to NULL
    int * ptest = 0; //also assigns to null

    if(!ptest){ //checks for null

    }

    //constants and pointers
    
    //defining a pointer TO a constant
    long constLong = 99999L;
    long const2 = 77777L;
    const long *pconstLong = &constLong; //the value pointed to by pconstLong is constant. 

    //*pconstLong = 888L; throws an error
    constLong = 888L; //OK - only pointer value is constant
    pconstLong = &const2; //OK - only value pointed to is constant. not pointer itself.

    //defining a constant pointer
    int int1 = 43;
    int int2 = 19;
    int * const pconstInt = &int1; //pointer itself is constant

    //pconstInt = &int2; throws an error. 
    *pconstInt += int2; //OK - value pointed to is not constant
    int1 = 10; //OK - variable is not constant

    //defining a constant pointer TO a constant
    const int * const pconst_constInt = &int2;
    //pconst_constInt = &int2; throws an error - pointer is constant
    //*pconst_constInt = 2; throws an error - value pointed to is constant
    int2 = 2;//OK - variable is not constant

    //void pointers

    int i = 10;
    float f = 1.5;
    char c = 'k';

    void *pvoid;

    pvoid = &i;
    printf("\nValue of i = %d\n", *(int *)pvoid);//must declare type int at dereference
    pvoid = &f;
    printf("\nValue of f = %f\n", *(float *)pvoid);//must declare type float at dereference
    pvoid = &c;
    printf("\nValue of c = %c\n", *(char *)pvoid);//must declare type char at dereference

    //pointers and arrays

    int values[100] = {3,2,1};

    int *valuesPtr; //you do not designate pointer type as "pointer to array"

    valuesPtr = values; //valuesPtr now points to first element in arrayarrays are pointers internally. the & operator is thus not used.

    valuesPtr = &values[0]; //this is equivalent to line 129.

    return 0;
}