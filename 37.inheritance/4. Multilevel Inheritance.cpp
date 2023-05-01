#include<bits/stdc++.h>
using namespace std;

// class Grand_Father{
//     protected:
//         bool fairskin;
//         bool browneyes;
//     public:
//         bool angry;

// };


/*
    |
    V
*/


// class Father: public Grand_Father{
    
// };


 /*
    |
    V
*/

// class Child: public Father{

// }

class Student{
    protected:
       long long int roll_number;
    public:
        void set_roll_number(long long int);
        void get_roll_number(void);
};

void Student::set_roll_number(long long int roll_num){
    roll_number=roll_num;
}

void Student::get_roll_number(){
    cout<<"Roll Number is: "<<roll_number<<endl;
}

class Exam: public Student{
    protected:
        float maths;
        float physics;
    public:
        void set_marks(float, float);
        void get_marks(void);
};

void Exam::set_marks(float m1, float m2){
    maths=m1;
    physics=m2;
}

void Exam::get_marks(){
    cout<<"The marks in Physics is: "<<physics<<endl;
    cout<<"The marks in Maths is: "<<maths<<endl;
}

class Result: public Exam{
    float percentage;
    public:
        void display(){
            get_roll_number();
            get_marks();
            cout<<"Your Percentage is: "<<((maths+physics)/2);
        }
};

int main()
{

    /*
    ? For [A-->B-->C]
    ! 1. A is base class for B and B is base class for A
    ! 2. A-->B-->C is inheritance path


    */
    // Result Rydham;
    // Rydham.set_roll_number(2210990751);
    // Rydham.set_marks(94.0,99.0);
    // Rydham.display();

    Result o1[4];
    for(int i=0;i<4;i++){
        cout<<"Enter Roll number of "<<i+1<<" student: ";
        long long int roll;
        cin>>roll;
        o1[i].set_roll_number(roll);
        cout<<"Enter Marks in Maths of "<<i+1<<" student: ";
        int math_marks;
        cin>>math_marks;
        cout<<"Enter Marks in Physics of"<<i+1<<" student: ";
        int phy_marks;
        cin>>phy_marks;

        o1[i].set_marks(math_marks,phy_marks);
    }

    cout<<"Results"<<endl;
    cout<<endl;
    for(int i=0;i<4;i++){
        cout<<"For "<<i+1<<"th"<<endl;
        o1[i].display();
        cout<<endl;
    }

    return 0;
}