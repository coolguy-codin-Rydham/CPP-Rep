#include<iostream>
using namespace std;

class Employee
{
    private:
        int a,b,c;   //if private only functions inside can access it
    public:
        int d,e;
        void settData(int a1,int b1,int c1);//declaration
        void getData(){
            cout<<"The value of a is: "<<a<<endl;
            cout<<"The value of b is: "<<b<<endl;
            cout<<"The value of c is: "<<c<<endl;
            cout<<"The value of d is: "<<d<<endl;
            cout<<"The value of e is: "<<e<<endl;
        }

};
class Animal{
    private:
        int size_l;
    public:
        int height,weight;
        void setdata(int size_ll);
        void getdata(){
            cout<<"Size of L is: "<<size_l<<endl;
            cout<<"Height is: "<<height<<endl;
            cout<<"Weight is: "<<weight<<endl;
        }
};
void Employee::settData(int a1,int b1,int c1){
    a=a1;
    b=b1;
    c=c1;
}
void Animal::setdata(int size_ll){
    size_l=size_ll;
}
int main()
{
    // Employee harry;         //harry is an object
    // // harry.a=1221;         //!This will give  error because a is a private variable and can be accessed only inside class.
    // harry.d=12;
    // harry.e=122;
    // harry.settData(1,2,3);
    // harry.getData();
    // return 0;

    int size_input;
    cin>>size_input;
    Animal Human;
    Human.height=173;
    Human.weight=100;
    Human.setdata(size_input);
    Human.getdata();
    return 0;
}