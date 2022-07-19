#include <stdio.h>
#include <stdbool.h>

int main() //ctrl option n
{
    //Rectangle Challenge
    double width = 2.1;
    double height = 9.8;
    double perimeter, area;

    area = width*height;
    perimeter = (width*2) + (height * 2);

    printf("\nWidth: %g. \nHeight: %g. \nArea: %g. \nPerimeter: %g.", width, height, area, perimeter);

    //Enum Challenge
    enum company {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};

    enum company c1 = XEROX;
    enum company c2 = GOOGLE;
    enum company c3 = EBAY;

    printf("\nCompany 1: %i.\nCompany 2: %i.\nCompany 3: %i.", c1, c2, c3);

    return 0;
}
