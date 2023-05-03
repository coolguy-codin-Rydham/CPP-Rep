#include<bits/stdc++.h>
using namespace std;



/*    
Inheritance:
    test inherited from student
    sports inherited from student
    result inherited from both test and student
*/
class Student{
    protected:
        int roll_no;
    public:
        void set_number(int a){
            roll_no=a;
        }    
        void print_number(void){
            cout<<"Your Roll no. is: "<<roll_no<<endl;
        }
};


class Test:virtual public Student{
// class Test: public Student{            //! Ambiguity error
    protected:
    float maths,physics;
    public:
        void set_marks(float m1,float m2){
            maths=m1;
            physics=m2;
        }

        void print_marks(void){
            cout<<"Maths : "<<maths<<endl<<"Physics : "<<physics<<endl;
        }
};

class Sports: virtual public Student{
// class Sports: public Student{            //!Ambiguity error
    protected:
        float score;
    public:
        void set_score(float sc){
            score=sc;
        }

        void print_score(void){
            cout<<"Your PT score is: "<<score<<endl;
        }
};

class Result:public Test,public Sports{
    protected:
        float total;
    public:
        void display(void){
            total=maths+physics+score;
            print_number();
            print_marks();
            print_score();
        }
};
int main()
{
    int roll;
    cout<<"Enter roll number";
    cin>>roll;
    Result Rydham;
    Rydham.set_number(roll);
    Rydham.set_marks(99.69,96.69);
    Rydham.set_score(98.69);
    Rydham.display();

    return 0;
}