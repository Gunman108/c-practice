#include <iostream>
#include <cmath> //import for math functions

using namespace std;

int main(){
    
    int a = 10;
    double b = 15.3;
    int c = 3;

    a += 3; //assignment adding operator

    cout << a % c << endl;
    cout << a + b << endl; //double + int = double
    cout << a / c << endl; //int/int = floored int

    // - math operation functions -

    cout << pow(2,5) << endl; //2^5
    cout << sqrt(5) << endl;
    cout << floor(4.8) << endl;
    cout << ceil(3.2) << endl; 
    cout << fmax(4,10) <<endl; //maximum
    cout << fmin(4,10) << endl; //minimum

    
    return 0;
}