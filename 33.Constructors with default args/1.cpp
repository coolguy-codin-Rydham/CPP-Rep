#include <iostream>
using namespace std;

class Simple
{
    int data1;
    int data2;
    int data3;

public:
    Simple(int a, int b = 9, int c = 8) // This is a constructor with default args
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }
    void print_data();
};
void Simple::print_data()
{
    cout << "The Value of data is " << data1 << " and " << data2 << " and " << data3 << endl;
}

int main()
{
    Simple s(1, 8);
    s.print_data();

    return 0;
}