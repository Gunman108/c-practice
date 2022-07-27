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

    // - nested loops -
    
    return 0;
}