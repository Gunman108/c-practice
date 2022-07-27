#include <stdio.h>
#include <stddef.h> //for NULL
#include <stdlib.h> //for dynamic memory allocation
#include <string.h>
#include <stdbool.h>

// - Structures and Functions -

struct Family
{
    char name[20];
    int age;
    char father[20];
    char mother[20];
};

//structures as params
bool isSiblings(struct Family member1, struct Family member2){ //could be more wasteful. but works on a copy of the data.
    if(strcmp(member1.mother, member2.mother) == 0){
        return true;
    }else {
        return false;
    }
}

bool psibs(struct Family *pmember1, struct Family *pmember2){ //only passes address. works directly on data itself
    if(strcmp(pmember1->mother, pmember2->mother) == 0){
        return true;
    }else{
        return false;
    }
}

//returning structures
struct values
{
        int val1;
        int val2;
        int val3;
};

struct values * myValues(){

    struct values myVals = {1, 2, 3};
    struct values * returnpoint = &myVals;

    return returnpoint; //returns address of struct myVal
};

int main(){
    
    // - defining a structure -
    //a structure is like a datatype that you define.

    struct date
    {
        int month;
        int day;
        int year;
    }; //there is no memory allocation for this declaration

    // - declaring variable of structure type -

    struct date today;

    //accessing data in structure var
    today.month = 7;
    today.day = 21;
    today.year = 2022;

    if(today.month == 7){
        printf("The month is July\n");
    }
    printf("Today's date is %.2i/%i/%i\n", today.month, today.day, today.year);
    //structure members follow the same rules as ordinary variables do

    //alternate structure syntax
    struct student{
        int age;
        int id;
    } john; //defines student structure and declares a var john of type student

    // - initializing structures -

    struct date birthday = {6, 12, 2003};
    struct date purchaseDate = {8, 1}; //gives no initial value to purchaseDate.year
    struct date date1 = {.month = 12, .day = 10};

    purchaseDate = (struct date){9, 25, 2015}; //redefines structure data after definition and initialization.

    // - structures and arrays -

    struct date myDates[10]; //consists of 30 data elements

    myDates[1].month = 8;
    myDates[1].day = 8;
    myDates[1].year = 1986;

    struct date birthdays[5] ={
        {12, 10, 1975},
        {12, 30, 1980},
        {11, 15, 2005}
    };

    //structures with arrays in them
    struct month
    {
        int numberOfDays;
        char name[3];
    };

    struct month January = {31, {"Jan"}};

    printf("\n\nMonth 1: %s, %d", January.name, January.numberOfDays);

    // - nested structures -

    struct time
    {
        int hours;
        int minutes;
        int seconds;
    };

    struct dateTime
    {
        struct date sdate;
        struct time stime;
    };

    struct dateTime event = {
        {2, 1, 2015}, //init date
        {3, 30, 0} //init time
    };

    //accessing nested structures
    printf("\nEvent date and time:\nDate: %.2d/%.2d/%d\nTime: %.2d:%.2d:%.2d", 
    event.sdate.day, event.sdate.month, event.sdate.year, event.stime.hours, event.stime.minutes, event.stime.seconds);

    struct birthday
    {
        struct mon
        {
            int month;
            char name[3];
        } mon;

        int day;
        int year;
    };

    struct birthday myBD = {
        {5, "may"},
        14,
        2004
    };

    printf("\nMy birthday is: %s(%d) %dth, %d", myBD.mon.name, myBD.mon.month, myBD.day, myBD.year);

    // - structures and pointers -

    //pointers to structures
    struct date *pDate = NULL;
    pDate = &purchaseDate;

    (*pDate).day = 19; //dereference to get value. make sure to deref in parenthesis

    printf("\nDay of purchase: %d", (*pDate).day);

    //(->) operator is a shorthand for dereferencing structure pointers

    pDate->day = 20; //another way to dereference then get value
    printf("\nDay of purchase: %d", pDate->day);

    //structures containing pointes
    struct intPtrs
    {
        int *p1;
        int *p2;
    };

    int int1 = 10, int2 = 15;

    struct intPtrs pointers = {&int1, &int2};

    *pointers.p2 = 5;

    printf("\nOrdered pair: (%d,%d)", *pointers.p1, *pointers.p2);

    struct name
    {
        char first[30];
        char last[30];
    };

    struct pname
    {
        char * first;
        char * last;
    };

    
    struct name myName = {"Gunner", "Peterson"}; //strings are stored inside the structure. 40 bytes allocated.
    

    
    struct pname yourName; //strings are stored wherever the compiler stores str constants. 16 bytes allocated.
    yourName.first = malloc(strlen("Bozo") + 1);
    yourName.last = malloc(strlen("Clown") + 1);
    yourName.first = "Bozo";
    yourName.last = "Clown";
    //pointer structures can be used only with strings that have had space allocated for them elsewhere. (use malloc)

    printf("\nMy name is %s %s", myName.first, myName.last);
    printf("\nYour name is %s %s", yourName.first, yourName.last);


    return 0;
}