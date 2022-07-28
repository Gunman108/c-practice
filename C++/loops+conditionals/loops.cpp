#include <iostream>

using namespace std;

int main(){
    
    // - while loops -
    int index = 0;

    while(index < 10){
        cout << index << endl;
        index++;
    }

    //do while
    do{
        cout << index << endl;
        index++;
    }while(index <= 5);

    // - for loops -

    for(int i = 0; i<10; i++){
        cout << i << endl;
    }

    int nums[] = {1, 5, 8, 4, 2};

    //iterating through loop
    for(int j = 0; j < 5; j++){
        cout << nums[j] << "  ";
    }
    cout << endl;

    // - nested loops -
    
    int nested[4][3] = {
        {4,5,2},
        {1,9,7},
        {3,8,6},
        {4,4,4}
    };

    for(int i = 0; i < 4; i ++){
        for(int j = 0; j < 3; j++){
            cout << nested[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}