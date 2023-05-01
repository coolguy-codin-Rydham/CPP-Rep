// !Protected Access Modifiers

#include<bits/stdc++.h>
using namespace std;

class Base{
    protected:
        int a;
    private:
        int b;
    public:  
};
/*
For a protected member:
                    Public Derivation   Private Derivation      Protected Derivation
?  1. Private      Not Inherited       Not Inherited           Not Inherited
?   2. Protected    protected           Private                 Protected
?   3. Public       public              Private                 Protected
*/

class Derived: protected Base{

};


int main()
{
    Base b;
    Derived d;
    //cout<<d.a;//!Will not work since a is protected in both base as well as derived class
    return 0;
}