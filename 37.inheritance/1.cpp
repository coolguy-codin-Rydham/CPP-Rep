#include <bits/stdc++.h>
using namespace std;

//! Base Class

class Employee
{
public:
    int id;
    float salary;
    Employee(int inpid)
    {
        id = inpid;
        salary = 34;
    }
    Employee(){}
};

// !Derived class
/*
class {{derived-class-name}}:{{visibility-mode}} {{base-class-name}}
{
    members/methods/etc///
}
*/

// creating programmer class from base class employee

// Default b=visiblity mode is private

/*
! 1. default Visibility mode is private
! 2. Public Visibility Mode: Public members of base class becomes public members of derived class
! 3. Private Visibility Mode: Public members of the base class becomes private members of derived class
! 4. Private members of a class cant be inherited from base class
*/

class Programmer : public Employee
{
    public:
    int languageCode = 9;
    Programmer(int inpid)
    {
        id = inpid;
    }
    void get_Data(){
        cout<<id<<endl;
    }
};

int main()
{
    Employee Rydham(2210990751), Rupesh(2210990749);
    cout << Rydham.salary << endl;
    cout << Rupesh.salary << endl;

    Programmer skillF(1);
    cout<<skillF.languageCode<<endl;
    cout<<skillF.id;

    return 0;
}