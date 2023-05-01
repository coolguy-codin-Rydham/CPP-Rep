// #include<iostream>
// using namespace std;

// int main()
// {
//     //pointer--> A data type which holds address of other data type
//     int a=3;
//     int* b=&a; //pointer
//     int** c=&b; //pointer to pointer
//     int *** d=&c;
//     //? & --> address of operator
//     cout<<b<<endl;
//     cout<<&a<<endl;
//     //?  * --> Dereference operator
//     cout<<*b<<endl; //* Output 3
//     cout<<c<<endl; //*output 1
//     cout<<**c<<endl; //*output 3
//     cout<<&b<<endl; //*output 1
//     //? Pointer to pointer
//     cout<<"The Address of b is: "<<&b<<endl; //* Output 1
//     cout<<"The Address of b is: "<<c<<endl; //* Output 1
    
//     cout<<"The value at Address c is: "<<*c<<endl; //* Output 2
//     cout<<"The value at Address c is: "<<b<<endl; //*  Output 2

//     cout<<"Value_at(value_at(c)), **c: "<<**c<<endl; //*  Output 3
//     cout<<"Value_at(value_at(c)), *b: "<<*b<<endl; //*  Output 3
//     cout<<"Value_at(value_at(c)), a: "<<a<<endl; //*  Output 3
//     //? Pointer to (pointer to (pointer))
//     cout<<***d;
//     return 0;
// } 