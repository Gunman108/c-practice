#include <stdio.h>

int main(){
    
    //minutes to years challenge
    int minutes;
    float days, years;
    printf("Please enter a number of minutes:");
    scanf("%d", &minutes);
    days = (minutes / 60.0) / 24.0;
    years = (days/365.0);

    printf("\n %d minutes. \n %f days. \n %f years.", minutes, days, years);
    
    //Byte Size challenge
    printf("\n\nSizes of operators:\nInt: %zd.\nChar: %zd.\nLong: %zd.\nLong Long: %zd.\nFloat: %zd\nDouble: %zd.\nLong Double: %zd.", sizeof(int), sizeof(char), sizeof(long), sizeof(long long), sizeof(float), sizeof(double), sizeof(long double));
    
    return 0;
}