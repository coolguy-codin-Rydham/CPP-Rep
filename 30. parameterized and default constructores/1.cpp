#include<iostream>
using namespace std;


class Complex{
    int a,b;
    public:
        Complex(int ,int);
        void printNumber(void){
            cout<<"Your Number is "<<a<<"+"<<b<<"i"<<endl;
        }



};
//!Here Complex function is a Constructor
Complex::Complex(int x,int y){
    a=x;
    b=y;
}


int main()
{
    //?Implicit call
    // Complex a(6,7);  
    //?Explicit Call
    //Complex a=Complex (6,7);            
    a.printNumber();
    return 0;
}