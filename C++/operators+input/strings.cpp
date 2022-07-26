#include <iostream>

using namespace std;

int main(){

    string phrase = "The quick brown fox";

    cout << "Hello world!";
    cout << " This is printed on the same line" << endl;

    cout << phrase << endl; //printing string
    cout << "Length of phrase: " << phrase.length() << endl; //length of string
    cout << "Second character: " << phrase[1] << endl; //indexing string

    phrase[2] = 'y'; //changing individual chars in string

    cout << "Finding fox: " << phrase.find("fox", 0) << endl; //finding substrings and chars in string

    string phrase_sub = phrase.substr(10, 3);
    cout << "Substring: " << phrase_sub << endl;

    


    return 0;
}