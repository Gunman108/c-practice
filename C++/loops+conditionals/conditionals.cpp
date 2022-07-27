#include <iostream>

using namespace std;

int getmax(int a, int b, int c){
    int temp;
    int result;

    if(a>b){
        if(a>c){
            result = a;
        } else{
            result = c;
        }
    } else{
        if(b>c){
            result = b;
        } else{
            result = c;
        }
    }

    return result;
}

// versus

int getmax2(int a, int b, int c){
    int temp;
    int result;

    if(a >= b && a >= c){
        result = a;
    } else if(b >= a && b >= c){
        result = b;
    } else{
        result = c;
    }

    return result;
}

//switch statement function

string getDay(int x){
    string returnDay;

    switch(x){
case 0:
            returnDay = "Sunday";
            break;
        case 1:
            returnDay = "Monday";
            break;
        case 2:
            returnDay = "Tuesday";
            break;
        case 3:
            returnDay = "Wednesday";
            break;
        case 4:
            returnDay = "Thursday";
            break;
        case 5:
            returnDay = "Friday";
            break;
        case 6:
            returnDay = "Saturday";
            break;
        default:
            returnDay = "Invalid Number";
            break;
    }
    return returnDay;
}
int main(){
    
    bool isMale = true;
    bool isTall = false;

    // - if statements -

    if(isMale && isTall){
        cout << "You are a tall male" << endl;
    } else if(isMale && !isTall){
         cout << "You are a short male" << endl;
    }else if(isTall || isMale){
        cout << "You are male or tall" << endl;
    }else{
        cout << "You are not male or tall" << endl;
    }

    // - comparisons -
    cout << getmax(19,19,19) << endl;

    // - switch statements -
    cout << getDay(2) << endl;
    

    return 0;
}