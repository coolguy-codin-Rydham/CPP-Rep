#include <bits/stdc++.h>
using namespace std;

//marks in maths and science are average of marks in theory and lab
//use pointers to take vals


class maths_theory;
class sci_theory;
class math_prac;
class sci_prac;
class Result;

class maths_theory
{
    protected:
        int *marks_maths_theory;
    public:
        void maths_theory_marks(int *marks){
            marks_maths_theory = marks;
        }
};

class sci_theory{
    protected:
       int *marks_sci_theory;
    public:
        void sci_theory_marks(int *marks){
            marks_sci_theory = marks;
        }

};


class math_prac{
    protected:
        int *marks_math_prac;
    public:
        void math_prac_marks(int *marks){
            marks_math_prac = marks;
        }

};

class sci_prac{
    protected:
        int *marks_sci_prac;
    public:
        void sci_prac_marks(int *marks){
            marks_sci_prac = marks;
        }
};
class Result: public math_prac,public sci_prac,public maths_theory,public sci_theory{
    protected:
        int avg_marks_maths;
        int avg_marks_sci;
        int result_final;
    public:
        void set_marks(int *a,int *b,int *c,int *d){
            math_prac::math_prac_marks(a);
            sci_prac::sci_prac_marks(b);
            maths_theory::maths_theory_marks(c);
            sci_theory::sci_theory_marks(d);

        }
        void avg_marks(){
            avg_marks_maths=(*marks_maths_theory+*marks_math_prac)/2;
            avg_marks_sci=(*marks_sci_theory+*marks_sci_prac)/2;
        }    

        int result_now(){
            result_final=(avg_marks_maths+avg_marks_sci)/2;
        }
        void print_result() {
            cout<<"Result is: "<<result_final;
        }  

};
int main()
{
    int marks_maths_theory,marks_math_prac,marks_sci_theory,marks_sci_prac;
    cin>>marks_maths_theory>>marks_math_prac>>marks_sci_theory>>marks_sci_prac;
    Result r;
    r.set_marks(&marks_maths_theory,&marks_math_prac,&marks_sci_theory,&marks_sci_prac);
    r.avg_marks();
    r.result_now();
    r.print_result();
    return 0;
}