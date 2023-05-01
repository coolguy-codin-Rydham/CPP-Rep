#include<bits/stdc++.h>
using namespace std;

/*

?Syntax of multiple inheritance
class derived: visibility-mode base1, visibility-mode base2
{
    class body of derived
};

*/

class Base1{
    protected:
        int base1int;
    public:
        void get_base1int();  
        void set_base1int(int a)
        {
            base1int=a;
        }  
};

class Base2{
    protected:
        int base2int;
    public:
        void get_base2int();  
        void set_base2int(int a)
        {
            base2int=a;
        }  
};


class Derived: public Base1,public Base2{
    public:
        void show(){
            cout<<"The value of base 1 is: "<<base1int<<endl;
            cout<<"The value of base 2 is: "<<base2int<<endl;
            cout<<"The sum is: "<<base1int+base2int<<endl;
        }
};
/*
    The inherited class will be like this:
    Data Members:
        base1int -->protected
        base2int -->protected
    Member Functions:
        set_base1int()-->public    
        set_base2int()-->public    
        get_base1int()-->public    
        get_base2int()-->public    
        show()-->public
*/
int main()
{
    // Derived harry;
    // harry.set_base1int(25);
    // harry.set_base2int(4);
    // harry.show();

    cout<<pow(10,4);
    return 0;
}