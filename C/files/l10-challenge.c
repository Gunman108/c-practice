#include <stdio.h>
#include <stddef.h> //for NULL
#include <stdlib.h> //for dynamic memory allocation
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

int main(){
    
    //number of lines in file challenge

    FILE * fp = NULL;
    fp = fopen("challenge1.txt", "r");
    int c;
    int counter = 1;

    while((c = fgetc(fp))!= EOF){
        if(c == '\n'){
            counter++;
        }
    }

    printf("\nFile challenge1.txt has %d lines\n", counter);

    fclose(fp);
    fp = NULL;

    //convert chars to uppercase challenge

    FILE * fp1, * fp2;
    fp1 = fopen("challenge2.txt", "r");
    fp2 = fopen("temp.txt", "w+");

    char ch1, ch2;
    char tempchar, newchar;

    while((ch1 = fgetc(fp1)) != EOF){
        newchar = toupper(ch1);
        fputc(newchar, fp2);
    }

    fclose(fp1);
    remove("challenge2.txt");

    fclose(fp2);
    rename("temp.txt", "challenge2.txt");

    fp1 = fopen("challenge2.txt", "r");
    while((ch1= fgetc(fp1)) != EOF){
        printf("%c", ch1);
    }

    fp1 = NULL;
    fp2 = NULL;

    //file in reverse order challenge

    FILE * fpr;
    fpos_t pos;
    int i = 0;
    int cnt = 0;

    fpr = fopen("challenge3.txt", "r");

    fseek(fpr, 0, SEEK_END);

    cnt = ftell(fpr);

    while(i < cnt){
        i++;
        fseek(fpr, -i, SEEK_END); //a negative moves back that many spaces
        printf("%c", fgetc(fpr));
    }

    fclose(fpr);
    fpr = NULL;

    return 0;  
}