#include <stdio.h>
#include <stddef.h> //for NULL
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

    return 0;
}