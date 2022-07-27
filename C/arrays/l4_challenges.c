#include <stdio.h>
#include <stdbool.h>

int main(){

    //primes challenge
    printf("All prime numbers from 0-100: ");
    int primes[100] = {2,3};

    
    int index = 1;
    bool notPrime = false;
    
    for(int p = 5; p<100; p+=2){
        notPrime = false;
        for(int i=0; i<index && p/primes[i] >= primes[i]; i++){
            if(p%primes[i] == 0){
                notPrime = true;
                break;
            }
        }
        if(notPrime == false){
            primes[index+1] = p;
            ++index;
        }
    }

    for(int j = 0; j<=index; j++){
        printf("%d, ",primes[j]);
    }

    //weather program
    float yearly_sum = 0.0;

    float weather[5][12] ={
        {10.3,7.3,4.9,3.0,2.3,0.6,1.2,0.3,0.5,1.7,3.6,6.7},
        {3.1,2.6,8.4,2.9,4.6,1.8,2.5,6.3,7.2,9.5,2.3,6.4},
        {10.3,7.3,4.9,3.0,2.3,0.6,2.5,6.3,7.2,9.5,2.3,6.4},
        {2.3,0.6,2.5,6.3,7.2,2.3,0.6,2.5,6.3,7.2,0.0,3.4},
        {3.3,2.2,5.5,6.6,7.7,8.8,9.9,0.9,4.5,4.5,1.1,2.2}
    };

    for(int i = 0; i<5; i++){
        yearly_sum = 0.0;
        printf("\nYear %d:\n\nMonthly Totals:\n", (2018+i));
        for(int j = 0; j<12; j++){
            yearly_sum+=weather[i][j];
            printf("%f ", weather[i][j]);
        }

        printf("\nThe yearly total is %f inches.\nThe yearly average is %f inches.\n\n\n",yearly_sum,(yearly_sum/12));
    }

    return 0;
}