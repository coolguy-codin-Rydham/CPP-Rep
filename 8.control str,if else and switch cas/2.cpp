#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Tell me your age: ";
    cin>>age;
    //selection control structure if else
    if((age<18) &&(age>1)){
        cout<<"You cant come to my party"<<endl;
    }
    else if(age==18){
        cout<<"You kid u can ut with kid pass"<<endl;
    }
    else if(age<1){
        cout<<"Chill bro u aren't even born yet"<<endl;
    } 
    else{
        cout<<"You are most welcome"<<endl;
    }
    return 0;
}
