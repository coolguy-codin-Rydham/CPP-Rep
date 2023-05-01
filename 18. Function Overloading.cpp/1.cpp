#include<iostream>
using namespace std;
//Function Overloading--> Concept of c++ Doesn't work in python
int sum(int a,int b){              // Sum #1
    cout<<"Using Function with 2 Args"<<endl;
    return a+b;
}
int sum(int a,int b,int c){        //Sum #2 
    cout<<"Using Function with 3 args"<<endl;
    return a+b+c;
}
//todo: Volume of cylinder
int volume(double r, int h){
    return (3.14*r*r*h);
}
//todo: Volume of cube
int volume(int a){
    return (a*a*a);
}
//todo: Volume of cuboid
int volume (int l, int b, int h){
    return (l*b*h);
}

int main()
{
    // cout<<"sum of 3 and 6 is:: "<<sum(3.1,6)<<endl;     //?Using Sum #1
    // cout<<"sum of 3,7 and 6 is:: "<<sum(3,7,6)<<endl;   //?Using Sum #2
    cout<<"Volume of Cylinder is: "<<volume(4,6)<<endl;   //? it eil csll the function matching with the args  
    cout<<"Volume of Cube is: "<<volume(5)<<endl;        //? it eil csll the function matching with the args 
    cout<<"Volume of cuboid is: "<<volume(4,5,6)<<endl;  //? it eil csll the function matching with the args
    return 0;
}