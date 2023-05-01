#include<iostream>
using namespace std;
class Y;
class X{
    int data;
    public:
        void setValue(int value){
            data=value;
        }
    friend int add(X,Y);
};
class Y{
    int num;
    public:
        void setData(int value){
            num=value;
        }
    friend int add(X,Y);    
};

int add(X o1, Y o2){
    return o1.data+o2.num;
}


int main()
{
    int n,jj;
    cin>>n>>jj;
    X a;
    a.setValue(n);
    Y b;
    b.setData(jj);
    cout<<add(a,b);
    return 0;
}