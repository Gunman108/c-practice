#include <stdio.h>
#include <stdbool.h> 
#include <string.h> //Strings lib must be imported for these functions
#include <ctype.h> //for string analysis functions
#include <stdlib.h> //declares functions to convert a string to a numerical value

int main(){

    //strlen() - getting the length of a string
    char myString[] = "Hello World";

    int len = strlen(myString);

    printf("The length of this string is: %d chars\n", len);

    for(int i = 0; i<strlen(myString); i++){
        printf("\n%c",myString[i]);
    }

    //copying one character string to another
    char src[50], dest[50];

    strcpy(src, "This is source");
    strcpy(dest, "This is destination");
    printf("\n\nSource: %s\nDest: %s\n\n",src,dest);

    //strncpy() takes a third arguement: the maximum number of chars to copy

    char newsrc[40], newdest[12];

    memset(dest,'\0', sizeof(dest)); //sets the size of data in destination
    strcpy(src, "Hello how are you doing");
    strncpy(dest, src, 10); //only copies the first ten characters of source into dest

    printf("\nSource: %s\nDest: %s\n\n", src, dest);

    //strcat() - combining two character strings together (concatenation)
    char ogString[] = "My String";
    char input[80];

    printf("\nEnter string to be concatenated: ");
    scanf("%s", input);

    strcat(input, myString);//changes input to be a combination of input + myString

    printf("\n\nThe new string is: %s", input);

    //strncat() takes a third element: number of chars to concatinate from the second element
    char firstString[] = "This String is a string that will be the one that has only 20 chars taken from it";
    char newinput[80];

    printf("\nEnter string to be concatenated (only first 20 chars): ");
    scanf("%s", newinput);

    strncat(newinput, firstString, 20);//newinput += only the first 20 chars taken from firstString. 

    printf("\n\nNew Concat: %s\n\n", newinput);

    //strcmp - determining if two character strings are equal
    printf("strcmp(\"A\", \"A\") is ");
    printf("%d\n", strcmp("A", "A"));

    printf("strcmp(\"A\", \"B\") is ");
    printf("%d\n", strcmp("A", "B"));

    printf("strcmp(\"B\", \"A\") is ");
    printf("%d\n", strcmp("B", "A"));

    printf("strcmp(\"C\", \"A\") is ");
    printf("%d\n", strcmp("C", "A"));

    printf("strcmp(\"Z\", \"c\") is ");
    printf("%d\n", strcmp("Z", "c"));

    printf("strcmp(\"apples\", \"apple\") is ");
    printf("%d\n", strcmp("apples", "apple"));

    printf("strcmp(\"apple\", \"apples\") is ");
    printf("%d\n", strcmp("apple", "apples"));


    char inputOne[80];
    char inputTwo[80];

    printf("\n\nEnter first string: ");
    scanf("%s", inputOne);

    printf("\nEnter second string: ");
    scanf("%s", inputTwo);

    if(strcmp(inputOne, inputTwo) > 0){
        printf("\n\nString one is longer than string two.");
    }else if(strcmp(inputOne, inputTwo) == 0){
        printf("\n\nThese are the same string.");
    }else{
        printf("\n\nString two is longer than string one.");
    }

    //strncmp() allows you to decide how many characters you are checking for

    if(strncmp("astronomy","astro",5) == 0){
        printf("\n\nFound: astronomy"); //going to display - the first 5 chars are equal
    }
    if(strncmp("astounding","astro",5) == 0){
        printf("\n\nFound: astounding"); //not going to display - the first 5 chars are not equal
    }

    // - Searching Strings -

    //strchr() - searches the string for a char, and returns a pointer to that char in the string. If not found, returns a null

    char str[] = "The quick brown fox"; //string to be searched
    char ch = 'q'; //char we are looking for
    char *pGot_char = NULL; //pointer initialized to null

    pGot_char = strchr(str, ch); //stores address where ch is found

    //strstr() - searches the string for a substring, and returns a pointer to that substring in the string. No match returns null.
    char phrase[] = "Every dog has his day";
    char word[] = "dog";
    char *pWord_found = NULL;

    pWord_found = strstr(phrase, word); //case sensitive


    //strtok() - Tokenizing Strings -
    //a token is a sequence of chars within a string bound by a delimiter (space, comma, period, etc)
    char untokenized[80] = "Hello how are you -my name is-Gunner-When dash appears-I break into a new line";
    const char tok[2] = "-";
    char *token;

    token = strtok(untokenized, tok); //get the first token

    //walk through other tokens
    while (token != NULL){
        printf("\n%s", token);//prints through each instance of token

        token = strtok(NULL, tok);
    }

    // - Analyzing Strings - 
    //islower(), isupper(), isalpha(), isdigit()...

    char buf[100];
    int nLetters = 0;
    int nNumbers = 0;
    int nPunct = 0;

    printf("\n\nEnter a string: ");
    scanf("%s", &buf);

    for(int i = 0; i<strlen(buf); i++){
        if(isalpha(buf[i])){
            ++nLetters;
        } else if(isdigit(buf[i])){
            ++nNumbers;
        } else if(ispunct(buf[i])){
            ++nPunct;
        }
    }
    printf("\nLetters: %d\nNumbers: %d\nPunctuation: %d", nLetters,nNumbers,nPunct);

    // printf("\n\nislower(a): %d", islower("a"));
    // printf("\nisupper(a): %d", isupper("a"));
    // printf("\nisalpha(a): %d", isalpha("a"));
    // printf("\nisalnum(a): %d", isalnum("a"));
    // printf("\nisdigit(0): %d", isdigit("0"));
    // printf("\nisspace(0): %d", isdigit("\n"));
    // printf("\nisprint( ): %d", isprint(" "));
    // printf("\nisgraph( ): %d", isgraph(" "));
    // printf("\nispunct(.): %d", ispunct("."));

    // - string conversion -

    //toupper()
    for(int i = 0; (buf[i] = (char)toupper(buf[i])) != '\0'; ++i);
    printf("\nUppercase output: %s", buf);

    //tolower()
    for(int i = 0; (buf[i] = (char)tolower(buf[i])) != '\0'; ++i);
    printf("\nLowercase output: %s", buf);

    // - strings to numbers - 

    char double_str[] = "98.342";
    char int_str[] = "9";

    double dval = atof(double_str); // converts string to double
    int ival = atoi(int_str); // converts string to int
    long lval = atol(double_str);
    long long llval = atoll(double_str);


    return 0;
}