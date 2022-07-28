#include <iostream>

using namespace std;

class Chef {
    public:
        void makeChicken(){
            cout << "The chef makes chicken" << endl;
        }
        void makeSalad(){
            cout << "The chef makes salad" << endl;
        }
        void makeSpecialDish(){
            cout << "The chef makes BBQ ribs" << endl;
        }
};

// inherits all functions of other class
class ItalianChef : public Chef{
    public:
        void makePasta(){
            cout << "The chef makes linguini" << endl;
        }
        void makeSpecialDish(){ //overrides other function
            cout << "The chef makes chicken parm" << endl;
        }
};

int main(){
    
    Chef chef; //superclass
    chef.makeChicken();

    ItalianChef mario; //subclass

    mario.makeChicken();
    mario.makePasta();
    mario.makeSpecialDish();

    return 0;
}