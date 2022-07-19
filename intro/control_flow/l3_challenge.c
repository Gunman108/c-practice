#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    //Pay Amounts Challenge
    float hours, overtime, grossPay, taxes, netPay;
    float payrate = 12;
    printf("How many hours you have worked: ");
    scanf("%f", &hours);
    if(hours > 40){
        overtime = (hours - 40)*1.5;
        grossPay = (overtime*payrate) + (40*payrate);
    } else{
        grossPay = hours*payrate;
    }
    if(grossPay > 450){
        taxes = 75+ ((grossPay-450) * .25);
    } else if(grossPay > 300){
        taxes = 45 + ((grossPay-300) * .2);
    } else {
        taxes = grossPay * .15;
    }
    netPay = grossPay - taxes;
    printf("\nHere are your pay rates:\nGross Pay: %f\nTaxes: %f\nNet Pay: %f", grossPay, taxes, netPay);

    //Guess the Number
    int number;
    time_t t;
    srand((unsigned) time(&t)); //provides a seed to the random number generator
    int randomNumber = rand() % 21;//between 0 and 21. Storing as int floors the number.
    int tries = 5;
    printf("\nThis is a guessing game.\nI have chosen a number between 0 and 20 which you must guess.\n");
    printf("\nYou have %d tries left.\nEnter a guess: ", tries);
    scanf("%d", &number);
    while(number != randomNumber && tries > 0){
        if(number < 0 || number > 20){
            printf("\n*please enter a number between 0 and 20*\n");
            printf("\nYou have %d tries left.\nEnter a guess: ", tries);
            scanf("%d", &number);
        }
        else if(number > randomNumber){
            printf("\nSorry, %d is wrong. My number is less than that.", number);
            --tries;
            printf("\nYou have %d tries left.\nEnter a guess: ", tries);
            scanf("%d", &number);
        } else{
            printf("\nSorry, %d is wrong. My number is larger than that.", number);
            --tries;
            printf("\nYou have %d tries left.\nEnter a guess: ", tries);
            scanf("%d", &number);
        }
    }
    if(number == randomNumber){
        printf("Congratulations! This is my number.");
    } else{
        printf("Sorry, you are out of tries. My number was %d.", randomNumber);
    }

    return 0;
}