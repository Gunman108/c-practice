#include <stdio.h>
#include <stdbool.h>

int gcd(unsigned int a, unsigned int b){
    int temp;
    
    while(b != 0){
        temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

float abs(float f){
    float absolute;
    if(f < 0){
        absolute = (-1*f);
    }else{
        absolute = f;
    }
    return absolute;
}

float sqrt(float num){
    float returnValue;
    const float epsilon = .00001;
    float guess = 1.0;

    if(num < 0){
        printf("*Negative numbers not allowed*");
        returnValue = -1.0;
    }
    else
    {
       while( abs(guess*guess - num) >= epsilon){
           guess = (num/guess + guess) / 2.0;
       }
       returnValue = guess;
    }

    return returnValue;
}

int main(){

    int gcd_result = gcd(150, 35);
    printf("GCD RESULT: %d \n\n", gcd_result);

    float square_result = 0.;

    for(int i = -2; i<=5; i++){
        square_result = sqrt(i);
        printf("Square root of %d: %f\n", i, square_result);
    }

    return 0;
}