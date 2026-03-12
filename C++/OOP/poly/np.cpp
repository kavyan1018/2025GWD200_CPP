// Payment systam Polymorphism


#include<iostream>
using namespace std;

// base class
class Payment{
    public :
        void pay()
        {
            cout << "Processing Payment !";
        }
};

// Derived class
class UPI : public Payment{
    public :
        void pay(){
            cout << "Paying using UPI !";
        }
};

// Derived class 2
class CreditCard : public Payment{
        public :
        void pay(){
            cout << "Paying using Cradit Card !";
        }
};


int main()
{
    Payment* p; // base class pointer 
    UPI u;
    CreditCard c;

    p = &u;
    p -> pay();

    p = &c;
    p -> pay();

    return 0;
}


