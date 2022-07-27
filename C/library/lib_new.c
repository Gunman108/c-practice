#include <math.h>
#include <stdlib.h>
#include <assert.h>

#include <time.h> //functions supporting date and time operations

#include <errno.h> //macros for the reporting of errors

#include <locale.h> //for monitary units and other data

#include <signal.h> //for dealing with conditions during execution, including error conditions

#include <stdarg.h> //defines facilities that enable a variable number of arguments to be passed to a function

int comp_fn(void * x, void * y){

}

int main(){

    // - MATH -

    //trig
    double hyperbolic_arcos = acosh(1);
    double arcsin = asin(1);
    double arctan = atan(1);
    double cosine = cos(10);
    double sine = sin(90);
    double tangent = tan(30);

    double c = ceil(2.3); //returns smallest integer value greater than or equal to x
    double f = floor(3.9); //returns smallest integer value less than or equal to x
    double r = round(2.5); //rounds up or down to the nearest int

    double l = log(3); // natural log
    double p = pow(3, 4); //returns x^y
    double square_root = sqrt(4);
    double n = nan("not a number"); //returns NaN if not a number
    
    //more complex arithmetic

    // - UTILITY -

    int a = abs(-3); //absolute value

    // char * env = getenv(); get environment variables

    //qsort() - for sorting arrays

    int r = rand(); //specified a random int between 32767 and 0
    srand(10); //seeds the random number between 0 and x

    int s = system("mkdir/usr/tmp/data"); //gives a command to the system

    assert(1); //if false, aborts. if true, continues.

    exit(0); //terminates program

    return 0;
}