#include<iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 41; i++)
    {
        
        if (i==4){
            continue;  //just leave this iteration and go to next one
            //break; //break the loop and exit

        }
        cout<<i<<endl;
    }
    
    return 0;
}