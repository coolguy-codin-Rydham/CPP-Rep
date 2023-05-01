// recap and Nesting of member function
#include <iostream>
#include <string>
using namespace std;

// declaration of objects can be done this way
/*class Employee{
    //definition
}Rohan,Rahul,Shiva;*/

// Nesting of member function
class binary
{
private:    
    string s;        //? by default everything is private.
    void chk_bin(void);

public:
    void read(void);
    void ones_complement(void);
    void display(void);
};

void binary::read(void)
{
    cout << "Enter a binary Number: ";
    cin >> s;
}
void binary::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect Binary Format" << endl;
            exit(0);
        }
    }
}
void binary::ones_complement()
{
    // chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }
        else if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
    }
}
void binary::display()
{
    chk_bin();           //? Example of nesting of member function
    cout << "Displaying you binary number" << endl;
    // for(int i=0;i<s.length();i++){
    cout << s;
    // cout<<s.at(i); //? when using loop it will work
    // }
}

int main()
{
    binary b;
    b.read();
    // b.chk_bin();      //? This function was used inside another function. it just checks it their and no need to check here
    b.display();
    cout<<endl<<"Ones complement: "<<endl;
    b.ones_complement();
    b.display();
    return 0;
}