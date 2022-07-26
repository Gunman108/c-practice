#include <iostream>

using namespace std;

int main(){
    
    //Calculator
    int n1, n2, sum;

    cout << "Enter two numbers for me to add: ";
    cin >> n1 >> n2;

    sum = n1 + n2;
    cout << n1 << " + " << n2 << " = " << sum << endl;

    //Mad libs

    string verb1, noun1, noun2, noun3, name;

    cout << "Enter a past tense verb: "<< endl;
    cin.ignore(1000, '\n');
    getline(cin, verb1);
    cout << "Enter a noun: " << endl;
    getline(cin, noun1);
    cout << "Enter a noun: " << endl;
    getline(cin, noun2);
    cout << "Enter a noun: " << endl;
    getline(cin, noun3);
    cout << "Enter a name: " << endl;
    getline(cin, name);

    cout << name << " went to the store to buy a " << noun1 << ". Unfortunately, they were all out. Instaid " << name << " " << verb1 << " a " << noun2 << ". On the way home, a " << noun3 << " got in the way.";

    return 0;
}