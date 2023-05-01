#include <iostream>
using namespace std;
class c2;
class c1;
// int swap_in_class(c1,c2);
class c1
{
    int Val;

public:
    void indata(int a)
    {
        Val = a;
    }
    void display(void)
    {
        cout << "o1=" << Val << endl;
    }
    friend int swap_in_class(c1 &, c2 &);
};
class c2
{
    int Val2;

public:
    void indata(int a)
    {
        Val2 = a;
    }
    void display(void)
    {
        cout << "o2=" << Val2 << endl;
    }
    friend int swap_in_class(c1 &, c2 &);
};
int swap_in_class(c1 &val11, c2 &val22)
{
    int tmp = val11.Val;
    val11.Val = val22.Val2;
    val22.Val2 = tmp;
    return 0;
}
int main()
{
    c1 o1;
    o1.indata(102);
    c2 o2;
    o2.indata(101);
    swap_in_class(o1, o2);
    o1.display();
    o2.display();

    return 0;
}