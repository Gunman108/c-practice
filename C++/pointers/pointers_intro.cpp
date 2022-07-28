#include <iostream>

using namespace std;

int main(){
    
    int age = 19;
    int * pAge = &age;

    double gpa = 2.7;
    double *pGpa = &gpa;

    string name = "Mike";
    string *pName = &name;

    cout << "Address of age: " << &age << endl; //accessing address of age

    cout << "Address of name: " << pName << endl; //address of name

    //dereferencing 
    cout << "GPA: " << *pGpa << endl;

    *pAge += 2;
    cout << "Age: " << age << endl;

    return 0;
}