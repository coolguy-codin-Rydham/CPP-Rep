#include<iostream>
using namespace std;
int c=41;
int main()
{
    // int a,b,c,d;
    // cin>>a;
    // cin>>b;
    // c=a+b;
    // d=::c;
    // cout<<c<<" Local"<<endl;        // Prints local c   
    // cout<<d<<" Global"<<endl;       //value of global c assigned to d
    // cout<<::c<<endl;                //prints global c
    float f=34.4F;
    long double e=34.4L;
    // by default decimal literals are double
    //to make it a float add an f at the end for example 
    //34.4 is double but 34.4f is float
    cout<<sizeof(34.4f)<<endl;
    cout<<sizeof(34.4F)<<endl;
    cout<<sizeof(34.4l)<<endl;
    cout<<sizeof(34.4L)<<endl;
    cout<<sizeof(34.4)<<endl;
    cout<<typeid(34.4).name()<<endl;
    return 0;
}
