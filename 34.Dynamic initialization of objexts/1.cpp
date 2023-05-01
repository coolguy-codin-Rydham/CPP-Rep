/*
!Dynamic initialization of object refers to initializing the objects at a run time i.e., the initial value of an object is provided during run time.

*/

#include <iostream>
using namespace std;
class Bank_Deposit
{
    int principal, years, interest_rate;
    float return_value;

public:
    Bank_Deposit();
    Bank_Deposit(int p, int y, float r); //?r can be value like 0.04
    Bank_Deposit(int p, int y, int r);
    void show();
};
Bank_Deposit::Bank_Deposit(int p, int y, float r)
{
    principal = p;
    years = y;
    float(interest_rate) = r;
    return_value = float(principal);
    for (int i = 0; i < y; i++)
    {
        return_value *= (1 + r);
    }
}
Bank_Deposit::Bank_Deposit(int p, int y, int r)
{
    principal = p;
    years = y;
    float(interest_rate) = float(r);
    return_value = principal;
    for (int i = 0; i < y; i++)
    {
        return_value *= (1 + (interest_rate) / 100);
    }
}
void Bank_Deposit::show()
{
    cout << "principal amount was " << principal
         << " Return value after " << years
         << " is " << return_value << endl;
}

int main()
{
    int a, b;
    float c;
    int d;
    cout << "Enter value of a,b,c";
    cin >> a >> b >> c;
    Bank_Deposit o1(a, b, c);
    o1.show();
    cout << "Enter Values of d";
    cin >> d;
    Bank_Deposit o2(a, b, d);
    o2.show();
    return 0;
}

/*
?Worked after lot of debugging but worked
*/