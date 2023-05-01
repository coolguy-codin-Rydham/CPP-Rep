#include <iostream>
using namespace std;

// Forward Declaration of class just like functions
class Complex;

// Friend class
class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sum_real_Complex(Complex, Complex); // It will exist somewhere, if the function is defined here it will throw error because we will start using things which dont currently exist
};

class Complex
{
    int a, b;
    // friend int Calculator::sum_real_Complex(Complex o1, Complex o2); // making the function from class friend
    friend class Calculator;
public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printNumber()
    {
        cout << "Your Number is: " << a << " + " << b << "i" << endl;
    }
};

int Calculator::sum_real_Complex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}

// calculator is friend of Complex

int main()
{
    Complex o1, o2;
    o1.setNumber(1, 4);
    o2.setNumber(5, 7);

    Calculator calc;
    int res = calc.sum_real_Complex(o1, o2);
    cout << res << endl;

    return 0;
}