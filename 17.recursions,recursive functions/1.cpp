#include<iostream>
using namespace std;

int fact(int n){
    if (n<=1){
        return 1;
    }
    else{
    return n*fact(n-1);
    }

}

/* if n=4
    when function is executed
    =return 4*fact(3)
    =return 4*3*fact(2)
    =return 4*3*2*fact(1)
    =return 4*3*2*1
    at end it returns 24
*/


int main()
{
    int a;
    cout<<"Enter Number: "<<endl;cin>>a;
    cout<<"Factorial of a is:  "<<fact(a);
    return 0;
}