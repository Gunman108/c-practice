#include <stdio.h>
#include <stdbool.h>

int main(){

bool raining = true;
bool isOver = false;
int score = 96;
int big = 90;
enum player { ME, YOU };
enum player playerToMove = YOU;
char letter = 'g';

//Decision-making statements

// - if statement -
if (score>=big){
    printf("Jackpot!\nYour score: %d\n", score);
}

// - if..else statement -
if (raining){
    printf("It is raining.\n"); //if raining == true;
}else{
    printf("It is not raining.\n"); //if raining == false
}

// - ternary statements / conditional operators -
raining ? printf("It is raining.\n") : printf("It is not raining.\n"); //same as if...else on line 21.

score = big > 88 ? 66 : 99; //results in score being set to 66 if big is greater than 88, or to 99 otherwise.

//else if - multiples
if (score % 3 == 0){
    printf("Score is a multiple of 3.\n");
} else if (score % 2 == 0){
    printf("Score is a multiple of 2.\n");
} else{
    printf("Score is not a multiple of 3 or 2.\n");
}

// - nested if statements - 
if(isOver == false){
    if( playerToMove == YOU ){
        printf("Your Move.\n"); //executed when isOver is false and playerToMove is you.
    } else {
        printf("My Move.\n"); //executed when isOver is false and playerToMove is not you.
    }
} else{
    printf("The game is over.\n"); //executed when isOver is true
}

//Switch Statement - Used instaid of writing a series of else if statements
switch (letter){
    case 'r':
        printf("Red\n");
        letter = 'g';
        break;
    case 'g':
        printf("Green\n");
        letter = 'b';
        break;
    case 'b':
        printf("Blue\n");
        letter = 'v';
        break;
    default: //"fall-through" else statement
        printf("Color from letter not found\n");
        letter = 'r';
        break;
}
printf("Letter %c.\n", letter);

float value1, value2;
char operator;

printf("\nEnter an expression:");
scanf("%f %c %f", &value1, &operator, &value2);
switch (operator){
    case '+':
        printf("%f", (value1 + value2));
        break;
    case '-':
        printf("%f", (value1 - value2));
        break;
    case '*':
        printf("%f", (value1 * value2));
        break;
    case '/':
        printf("%f", (value1 / value2));
        break;
    default: 
        printf("Unknown Operator");
        break;
}

//goto statement
bool isThing = true;

if(isThing == false){ 
    part2: isThing = false;
    printf("\nThe thing is false\n");
} else{
    printf("\nThe thing is true\n");
    goto part2; //Usually do not use this, since it makes code hard to follow when jumping around.
}

    return 0;
}
