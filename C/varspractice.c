#include <stdio.h>
#include <stdbool.h>

int main(int argc, char *argv []) //ctrl option n
{

int numberArguements = argc;
char *arguement1 = argv[0];
char *arguement2 = argv[1];

printf("Number of arguements: %d", numberArguements);
printf("\nArg 1 is the program name: %s. Arg 2 is the program name: %s.", arguement1, arguement2);

 int integer_var = 100;
 float float_var = 1.2;
 double double_var = 1.4e+200;

 bool bool_var = true;

 enum primary_color {red, yellow, blue};
 enum primary_color mycolor, yourcolor;
 
 mycolor = red;
 yourcolor = blue;

 char new_line = '\n';

 printf("\nHere are the variables:");

 printf("\n Character: %c", new_line); //for chars
 printf("\n Integer: %d", integer_var); //for ints
 printf("\n Float: %f", float_var); //for floats
 printf("\n Double: %e", double_var); //for doubles
 printf("\n Boolean: %i", bool_var); // for bools
 printf("\n Enum: %d", mycolor); //the format specifier for enums is actually an int, since an enum is represented as such.

 //all on one line now
 printf("\n Character: %c. Integer: %d. Float: %f. Double %e. Boolean: %i.", new_line, integer_var, float_var, double_var, bool_var);

 printf("\n Float: %f. Truncated float: %.2f", float_var);

 return 0;
}
