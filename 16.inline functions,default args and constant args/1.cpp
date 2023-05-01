#include<iostream>
using namespace std;

inline int multiply(int a, int b){
    return a*b;
}

int money_received(float current_money,float Interest_rate=1.04){//1.04 is default arg here //defulat args should be given on extreme right// default args can be rewritten
    return current_money*Interest_rate;
}
// Inline function replaces the call with the whole code making the processing faster

int main()
{
    // int x,y;
    // cout<<"Enter Number1: ";cin>>x;
    // cout<<"Enter Number2: ";cin>>y;
    // cout<<multiply(x,y);
    // cout<<multiply(x,y);
    float money;
    cout<<"Enter money in bank account: ";
    cin>>money;
    cout<<"If you have "<<money<<"Rs"
    <<" You will receive "<<money_received(money)
    <<"after 1 year"<<endl;
    cout<<"For VIP: "<<"If you have "<<money<<"Rs"
    <<" You will receive "<<money_received(money,1.10)
    <<"after 1 year";
    return 0;
}