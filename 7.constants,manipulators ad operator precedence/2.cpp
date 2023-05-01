//manipulators
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    //manipulators in c++
    int a=4,b=142,c=1341;
    cout<<"Value of a is "<<setw(4)<<a<<endl; //Setw right justify text to the length value entered present in iomanip
    cout<<"Value of b is "<<setw(4)<<b<<endl;//Setw right justify text to the length value entered present in iomanip
    cout<<"Value of c is "<<setw(4)<<c<<endl;//Setw right justify text to the length value entered present in iomanip
    cout<<"Value of a is"<<a<<endl; 
    cout<<"Value of b is"<<b<<endl;
    cout<<"Value of c is"<<c<<endl;
    return 0;
}

