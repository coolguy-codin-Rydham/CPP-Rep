#include<iostream>
using namespace std;
//?creating a constructor
// ?it is a special member function with same name as of the class. 
//?It is used to initialize the objects of its class.
//?It is automatically invoked.
//? it is used to initialize the objects of its class
class Complex{
    int a,b;
    public:
        Complex(void);
        void printNumber(void){
            cout<<"Your Number is "<<a<<"+"<<b<<"i"<<endl;
        }



};
//!Here Complex function is a Constructor
Complex::Complex(void){
    a=10;
    b=9;
}


int main()
{
    Complex c;
    c.printNumber();
    return 0;
}