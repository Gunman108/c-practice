#include <iostream>

using namespace std;

// - perameters and return values - 

double addNums(double a, double b){ 
    return (a+b);
}

void sayHi(); //function declaration

int main(){
    
    sayHi();
    cout << addNums(1.2,2) << endl;

    return 0;
}

void sayHi(){
    cout << "Hi!" << endl;
    return; //optional return
}