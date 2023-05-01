//loops
/* 3 types of loops
1. For Loop
2. While loop
Do While Loop*/
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    // for (int i=1;i<=41;i++){
    //    cout<<i;
    //    cout<<endl;
    // }

    //printing 1 to 40 using while loop
    int i=1;
    // while (true){
    //     cout<<i<<endl;
    //     i++;
    // }

    //do while loop
    do{
        cout<<i<<endl;
        i++;
    }while(i<1);
    return 0;
}