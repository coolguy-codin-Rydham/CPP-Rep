// operators
#include<iostream>
using namespace std;
int main()
{
    int a=4, b=6;
    cout<<"Hello World"<<endl;  
    cout<<"Hello Again"<<endl;
    cout<<"following are the arithmetic operators";
    cout<<a+b<<endl;
    cout<<a-b<<endl;
    cout<<a*b<<endl;
    cout<<a/b<<endl;
    cout<<a%b<<endl;
    cout<<a++<<endl; // pehle print a uske baad 1 add kardo
    cout<<a--<<endl; // pehle print karo uske baaf 1 ghata do
    cout<<++a<<endl; // pehle add karo uske baad print karo
    cout<<--a<<endl; // pehle negate karo uske baad print karo
    cout<<endl<<endl;
    //Assignment operators--> used to assign values
    //int a=3;
    //char d='d'
    cout<<"comparison operators";  
    cout<<"Value of a==b "<<(a==b)<<endl; //these brackets are compulsory
    cout<<"Value of a!=b "<<(a!=b)<<endl;
    cout<<"Value of a>=b "<<(a>=b)<<endl;
    cout<<"Value of a<=b "<<(a<=b)<<endl;
    cout<<"Value of a>b " <<(a>b)<<endl;
    cout<<"Value of a=< "<<(a<b)<<endl;
    cout<<endl<<endl;
    cout<<"Logical operators"<<endl;
    cout<<((a==b) && (a<b))<<endl;    //And operator
    cout<<((a!=b)||(a<b))<<endl;      //Or operator
    cout<<(!(a<b))<<endl;            //Not Operator  



    return 0; 
}
