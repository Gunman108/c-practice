#include <iostream>
#include <stdlib.h> //for random number generator

using namespace std;

double exp(double a, double b){
    double expVar = b;
    if(b < 0){
        expVar *= -1;
    } 
    double returnVal = a;
    for(int i = 0; i<b; i++){
        returnVal *= a;
    }
    if(b < 0){
        returnVal = 1/returnVal;
    }
    return returnVal;
}

int main(){
   
    //better calculator
    double a, b;
    char c;
    cout << "Input an expression: ";
    cin >> a >> c >> b;
    if(c=='+'){
        cout << endl << a << " + " << b << " = "  << double(a+b);
    }else if(c=='-'){
        cout << endl << a << " - " << b << " = " << (a-b);
    }else if(c=='/'){
        cout << endl << a << " / " << b << " = " << (a/b);
    }else if(c=='*'){
        cout << endl << a << " * " << b << " = " << (a*b);
    }else{
        cout << endl << "Character not recognized";
    }

    //guessing game
    int guess;
    srand(time(0)); //seed random number with time
    int number = rand() % 20; //generate random number between 0 and 20
    int tries = 5;

    cout << endl << endl << " - This is a guessing game. My number is between 0 and 20 - " << endl;

    while(guess != number && tries > 0){
        cout << endl << "You have " << tries << " tries left. Guess your number: ";
        cin >> guess;
        if(guess < 0 || guess > 20){
            cout << endl << "Invalid input ";
            continue;
        }
        if(guess > number){
            cout << endl << "Sorry, " << guess << " is too high.";
        }else if(guess < number){
            cout << endl << "Sorry, " << guess << " is too low.";
        }
       tries --;
    }
    if(guess == number){
        cout << endl << "Congrats! " << guess << " is my number!" << endl;
    } else{
        cout << endl << "You are out of tries. My number was " << number << endl;
    }

    //exponent function
    cout << exp(10,-2) << endl;

    return 0;
}