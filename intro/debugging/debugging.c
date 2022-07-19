#include <stdio.h>

 //inserting a semicolon in a preprocessor definition
 #define TEX 99; //includes the semicolon in definition

int main(){

    //logic errors - caught by the programmer

    //syntax errors - caught by the compiler 

    //memory corruption - dangling references. memory leaks (memory not being used)

    //performance/scalability - doesn't scale well with many users. not enough hardware to support requests.

    //lack of cohesion - code is doing too much. not focused. requires redesign

    //tight coupling - many dependencies 

    //debugging process:

    //understand the problem
    //reproduce the problem
    //simplify the bug / devide and conquer / isolate the source - comment out code.
    //find the origin of the program (maybe with a debugger)
    //solve the problem. may include redesign.
    //test

    //tools:

    //using print statements
    //debuggers - stop execution of your code at certain breakpoints
    //log files
    //monitoring software - run-time analysis of memory usage, network traffic, thread and object information
    //static analyzers - semantic checker. can detect uninitialized variables, memory leaks, unreachable code, deadlocks, or race conditions
    //test suites - automizes tests
    //debugging after crashes - analyze the call stack

    //preventing errors:

    //write high quality code
    //unit tests - finds errors in new code before it is delivered (Test Driven Development).
    //plan your code (pseudocode)
    //work in steps

    // - the call stack - 
    //shows a list of the function calls that lead to the error. the bottom of the stack is the first call. top of stack is last.
    int integer = 5;
    printf("I am debugging this file\n");
    printf("%d this will break here", integer);

    // - common c mistakes -

    int j = 1;

    if(j==0); //misplaced semicolon
        j=0;

    //confusing the = operator with the == operator
    int a = 3;
    if(a=2){
        printf("Your turn"); //will still run
    }

    //omitting prototype declarations


    //not including proper header files
    double answer = sqrt(a); //no math header...

    //confusing a char const with a char string
    char text;
    text = 'a'; // char 'a'
    text = "a"; //pointer to a char string "a"

    //using wrong bounds of an array
    int a[100], sum = 0;

    int i;
    for(i = 0; i <= 100; ++i){
        // sum += a[i]; // out of bounds at 100
    }
    //also remember to leave room for \0 in strings

    //confusing the -> operator with . when referencing structure members.
    //. is for structure vars
    //-> is for structure pointer vars

    //omitting ampersand before nonpointer variables in a scanf() call
    int number;
    scanf("%d", number); //will not take in input

    //using a pointer var before it is initialized
    char *char_pointer;
    *char_pointer = 'X'; //can only apply the indirection operator when pointer is pointing to smtg

    //omitting the break statement at the end of a switch case

    //missing parentheses or quotation mark in embedding

    // - common compiler errors and warnings - 

    // -Wall: notifies all cases where there are implicit decisions

    // - errors - a condition that prevents the creation of the final program. 

    // 'variable' undeclared 

    // undefined reference to '...' - appears when a function is envoked in the code that has not been defined. Both for header files and user defined functions.

    // conflicting types for '...' - two definitions of a function have been found. the prototype and function definition are different types.

    // may terminate abruptly (crash) when a run-time error is detected - use call stack

    // warnings - "special situations"in which an anomaly has been detected

    // implicit declaration of function '...' - when a function is useed but no previous info has been given

    // control reaches end of non-void function - forgot to return data in function

    // unused variable '...' - remove variables if they arent being used

    //look online / use stack overflow for others

    return 0;
}