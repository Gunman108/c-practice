#include <iostream>

using namespace std;

int main(){
    
    int luckyNums[] = {4,9,18,42,11,74}; //can only store 6 elements

    int setNums[20]; //can store 20 elements

    luckyNums[0] = 19; //changing element in array

    cout << "First element: " << luckyNums[0] << endl; //indexing array

    // - 2D arrays -
    
    int nested[4][3] = {
        {4,5,2},
        {1,9,7},
        {3,8,6},
        {4,4,4}
    };

    cout << nested[1][2];

    //applies to n dimentional arrays
    
    return 0;
}