//call by value and call by reference
#include<iostream>
using namespace std;

int sum(int a,int b){
    int c=a+b;
    return c;
}
//!This will not swap a and b
void swap(int a,int b){ //temp  a   b
    int temp=a;         //4     4   5
    a=b;                //4     5   5  
    b=temp;             //4     5   4
}
//call byy reference using pointers
void swap_pointer(int* a,int* b){ //temp  a   b
    int temp=*a;         //4     4   5
    *a=*b;                //4     5   5  
    *b=temp;             //4     5   4
}
//call byy reference
void swap_pointer_using_reference_var(int &a,int &b){ 
    int temp=a;         
    a=b;                
    b=temp;           
}


int main()
{
    int a=4,b=5;
    cout<<"The value of a: "<<a<<" The value of b: "<<b<<endl;
    // swap_pointer(&b,&a);
    swap_pointer_using_reference_var(a,b);
    cout<<"The value of a: "<<a<<" The value of b: "<<b;
    return 0;
}