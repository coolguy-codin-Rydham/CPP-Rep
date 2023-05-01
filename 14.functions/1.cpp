#include<iostream>
using namespace std;
//Function Prototyp
// type function-name(arguments)

int sum(int a,int b);  //! if this line not ther it will show error 
                       //! this line assures that the function is their in the code just somewhere else 
void g(void);
int main()
{
    int num1 ,num2;
    cin>>num1;
    cin>>num2;
    cout<<sum(num1,num2)<<endl; 
    g();

    return 0;
}

int sum(int a, int b){
    int c=a+b;
    return c;
}    

void g(){
    cout<<"Dunia gol hai nahi dunia chadarmod hai";
}