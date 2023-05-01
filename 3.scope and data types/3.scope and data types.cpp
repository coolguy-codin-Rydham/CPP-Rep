#include<iostream>
using namespace std;
int glo=78; //?Global variable
void sum()
{
    int a; 
}
int main()
{
    glo=90; //local variable
    // int a=20;
    int b=31;
    float c=10.31,d=71.11;
    char e='e';
    // cout<<"Hello\n";
    // cout<<a<<"\n"<<b<<"\n"<<c<<"\n"<<d;
    // cout<<"\n"<<e;
    cout<<glo;
    return 0;
}