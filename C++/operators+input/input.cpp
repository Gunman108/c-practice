#include <iostream>

using namespace std;

int main(){
    
    int age;
    string name;

    cout << "Enter your age: ";
    cin >> age;
    cout << "Your age is " << age << " years old" << endl;

    // - input string -
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Your name is " << name << endl;
    return 0;
}