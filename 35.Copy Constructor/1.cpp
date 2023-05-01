#include<iostream>
using namespace std;

class Number{
    int a;
    public:
        Number(){
            a=0;
        }// ? Default Constructor is also necessary
        Number(int num){
            a=num;
        }
        Number(Number &obj){
            cout<<"Copy Const called"<<endl;
            a=obj.a;
        }
        void display(){
            cout<<"The number for this object is: "<<a<<endl;
        }
};

int main()
{
    Number x,y,z(45);
    z.display();
    x.display();
    y.display();
    Number z1(z);
    z1.display();
    // ? z1 should exactly remember z or x or y
    return 0;
}




//? Compiler provides a default copy constructor to every class if its not found otherwise.
//?