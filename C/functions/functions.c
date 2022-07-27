#include <stdio.h>
#include <stdbool.h>

// - defining functions -
void helloWorld(void) //takes in no input and returns no output
{
    printf("\nHello World.");
};

// - arguements and parameters -
float mult(float x, float y){
    return (x*y);
};

// - local and global variables -

int total_sum = 0; //global variable. can be accessed anywhere in any function. avoid these, because they premote dependencies.

int vars(int a, int b){
    int sum = a + b; //this is a local variable. cannot be accessed outside of this function.
    total_sum += sum;
    return sum;
}

int main(){
    // Functions either cause actions or modify/return values
    // Tasks can be devided into smaller subtasks

    helloWorld(); //calling function

    float total = 0;
    total = mult(3.3,9.2) + mult(20.4, 74.9); //data asigned from function

    printf("\nTotal: %f", total);

    printf("\n\nSums: %d %d %d \n", vars(2,4), vars(9,10), vars(9, 11));
    printf("Total Sum: %d", total_sum);

    int total_sum = 0; //local variables take precedence over global ones
    printf("\nNew Total Sum: %d", total_sum);
    

    return 0;
}