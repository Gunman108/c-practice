#include <stdio.h>
#include <stdbool.h> 
#include <string.h> //Strings lib must be imported for these functions
#include <ctype.h> //for string analysis functions
#include <stdlib.h> //declares functions to convert a string to a numerical value

int len(char str[]){
    int count = 0;
    while(str[count]){
        count++;
    }
    return count;
}

void concat(const char str1[], const char str2[]){
    int resultlength = len(str1) + len(str2);
    char result[resultlength];
    int count = 0;
    int totalCount = 0;
    while(str1[count]){
        result[totalCount] = str1[count];
        ++count;
        ++totalCount;
    }
    count = 0;
    while(str2[count]){
        result[totalCount] = str2[count];
        ++count;
        ++totalCount;
    }
    printf("\nConcat String: %s", result);
}

bool isEqual(char str1[], char str2[]){
    if(len(str1) != len(str2)){
        return false;
    } else{
        int i = 0;
        while(str1[i]){
            if(str1[i] != str2[i]){
                return false;
            }
            ++i;
        }
        return true;
    }
}

int main(){
    //char arrays challenge
    char str[] = "HelloWorld";
    char str2[] = "HelloWorld";

    printf("Length: %d", len(str));

    concat(str, str2);

    printf("\nIs equal? %d", isEqual(str, str2));

    //string functions challenge

    //reverse order string
    char input[100];
    printf("\n\nEnter string to reverse (not more than 100 chars): ");
    scanf("%s", input);
    char newString[100];

    int j = 0;
    printf("\nReversed String: ");
    for(int i = (strlen(input)-1); i>=0; --i){
        newString[j] = input[i];
        printf("%c",input[i]);
        ++j;
    }

    //bubble sort string
    int stringNum;

    printf("\n\nInput number of strings: ");
    scanf("%d", &stringNum);

    char inp_str[100];

    char strarray[stringNum][20];

    for(int i = 0; i < stringNum; i++){
        scanf("%s",inp_str);
        strcpy(strarray[i], inp_str);
    }

    char temp[100] = "";
    for(int j = 0; j < 3; j++){
        for(int i = 0; i < stringNum-1; i++){
            if(strcmp(strarray[i], strarray[i+1]) > 0){
                strcpy(temp, strarray[i+1]);
                printf("%s", strarray[i+1]);
                strcpy(strarray[i+1], strarray[i]);
                strcpy(strarray[i], temp);
            }
        }
    }
    
    
    printf("\n\nList of strings: ");
    for(int i = 0; i < stringNum; i++){
        printf("\n\n%s",strarray[i]) ;
    }

    return 0;
}