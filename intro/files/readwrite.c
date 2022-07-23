#include <stdio.h> //allows you to access external data

#include <stddef.h> //for NULL
#include <stdlib.h> //for dynamic memory allocation
#include <string.h>
#include <stdbool.h>

int main(){
    
    //fopen() - accessing files
    //  file = fopen(filename, "w"); //open filename to write it

    char write[] = "w";
    char append[] = "a";
    char read[] = "r";

    char overwrite[] = "w+"; //truncates the file to 0 if it exists. opens if not
    char read_write[] = "a+"; //appends to the end of file if exists. opens if not
    char update[] = "r+"; //opens for update

    // - Opening Write Mode -
    FILE * pfile = NULL;
    char * filename = "myfile.text";
    pfile = fopen(filename, "w"); //opens "myfile.txt" to write it

    if(pfile == NULL){//if a file cannot be opened returns null
        printf("Failed to open %s\n", filename);
    }

    // - Opening  Append Mode - 
    pfile = fopen(filename, "a"); //new file will be created if file does not exist

    // - Opening  Read Mode - 
    pfile = fopen(filename, "r"); //will return null if no file exists

    // - Opening  Renaming a file -
    if(rename(filename, "renamed.txt")){
        printf("Failed to rename file");
    }else{
        printf("File renamed successfully");
    }

    // - Closing a file -
    fclose(pfile);
    pfile = NULL;

    // - Deleting a file -
    remove("renamed.txt"); //file cannot be open when you try to delete it
    //double check with operations that delete files. very hazardous operation

    // - Reading from a file -
    char * readfile = "readfile.txt";
    pfile = fopen(readfile, "r");

    if(pfile == NULL){
        perror("Error in opening file");
        return(-1);
    }

    //reading chars from a file
    int c;
    while((c = fgetc(pfile)) != EOF){
        printf("%c", c);
    }

    //reading strings from a file
    char str[61];
    pfile = fopen(readfile, "r");

    if(fgets(str, 60, pfile) != NULL){
        printf("%s", str);
    }

    fclose(pfile);
    pfile = NULL;
    //Reading formatted input from a file
    char str1[10], str2[10], str3[10];
    int year;
    FILE * fp;

    fp = fopen("file.txt", "w+");
    if (fp != NULL){
        fputs("Hello how are you", fp);
    }

    rewind(fp);
    fscanf(fp, "%s %s %s %d", str1, str2, str3, &year);

    printf("Read String1 |%s|\n", str1);
    printf("Read String2 |%s|\n", str2);
    printf("Read String3 |%s|\n", str3);
    printf("Read INT |%d|\n", year);

    fclose(fp);
    fp = NULL;

    // - Writing to a File -

    //Writing Characters
    fp = fopen("file.txt", "w+");

    for(int ch = 33; ch <=100;ch++){
        fputc(ch, fp); //iterates through ASCII characters
    }
    fclose(fp);

    //Writing Strings
    fp = fopen("file.txt", "w+");

    fputs("Change Da World.\n", fp);
    fputs("My final message.\n", fp);
    fputs("Goodbye.\n", fp);

    fclose(fp);

    //Writing formatted output
    fp = fopen("formatted.txt", "w+");

    if(fp){
        fprintf(fp, "%s %s %s %s %d", "Hello", "my", "number", "is", 555);
    }

    fclose(fp);

    // - File Positioning -

    //Where you are

    //ftell()
    fp = fopen("formatted.txt", "r");
    if(!fp){
        perror("Error opening file");
        return(-1);
    }
    fseek(fp, 0, SEEK_END); //changes the point to the end

    int len = ftell(fp);
    fclose(fp);

    printf("\nTotal size of formatted.txt = %d bytes\n", len);

    //fgetpos() - takes in file pointer and a type that records every position within a file
    fpos_t pos;
    fp = fopen("posfile.txt", "w+");
    fgetpos(fp, &pos);
    fputs("Hello world!", fp);

    fclose(fp);

    //fseek() - Setting a position
    fp = fopen("posfile.txt", "w+");
    fseek(fp, 2, SEEK_SET); //move four bytes
    fputs("Hello how are you", fp);
    
    //fgetpos() - Moving to a position you have been to before
    fgetpos(fp, &pos);
    fputs("Hello, world!", fp);
    fsetpos(fp, &pos);
    fputs("this is going to override previous content", fp);

    fclose(fp);
    
    return 0;
}