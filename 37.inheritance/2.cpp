// !single inheritance

#include <bits/stdc++.h>
using namespace std;

class Base
{
    int data1;

public:
    int data2;
    void set_data();
    int getdata1();
    int getdata2();
};

void Base::set_data(void)
{
    data1 = 10;
    data2 = 20;
}

int Base::getdata1(void)
{
    return data1;
}
int Base::getdata2(void)
{
    return data2;
}

class Derived : public Base // Inherited class
{
    int data3;

public:
    void process();
    void display();
};

void Derived::process(){
    data3=data2*getdata1();
}
void Derived::display(){
    cout<<"Value of data 1 is "<<getdata1()<<endl;
    cout<<"Value of data 2 is "<<data2<<endl;
    cout<<"Value of data 3 is "<<data3<<endl;
}
int main()
{
    Derived o1;
    o1.set_data();
    o1.process();
    o1.display();
    return 0;
}