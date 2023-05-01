//Exercise:
/*
!Create 2 classes 
    1. Simple Calculator-- takes input of 2 nums +-/*
    2. Scientific calc--  and perform any 4 scientific operations

*/


#include<bits/stdc++.h>
using namespace std;

class Simple_calc{
    protected:
        float a,b;
    public:
        float summ(float a,float b);
        float diff(float a,float b);
        float mul(float a,float b);
        float div(float a,float b);
        void set_a_b(float a_inp,float b_inp){
            a=a_inp;
            b=b_inp;
        }
};

float Simple_calc::summ(float a,float b){
    return a+b;
}
float Simple_calc::diff(float a,float b){
    return a-b;
}
float Simple_calc::mul(float a,float b){
    return a*b;
}
float Simple_calc::div(float a,float b){
    return a/b;
}

class Scientific_calc{
    protected:
    float a;
    public:
        float sin_calc(float a);
        float cos_calc(float a);
        float tan_calc(float a);
        float log_calc(float a);
        void set_a(float a_inp){
            a=a_inp;
        }   
};

float Scientific_calc::sin_calc(float a){
    return sin(a);
}
float Scientific_calc::cos_calc(float a){
    return cos(a);
}
float Scientific_calc::tan_calc(float a){
    return tan(a);
}
float Scientific_calc::log_calc(float a){
    return log(a);
}


class Calculator: public Simple_calc, public Scientific_calc{
    public:
    float final_answer;
    void calculate(int operation, float a){
        float answer=0;
        if(operation==5){
            answer=sin_calc(a);
        }
        else if(operation==6){
            answer=cos_calc(a);
        }
        else if(operation==7){
            answer=tan_calc(a);
        }
        else if(operation==8){
            answer=log_calc(a);
        }
        final_answer=answer;
    }
    void calculate(int operation, float a, float b){
        float answer=0;
        if(operation==1){
            answer=summ(a,b);
        }
        else if(operation==2){
            answer=diff(a,b);
        }
        else if(operation==3){
            answer=mul(a,b);
        }
        else if(operation==4){
            answer=div(a,b);
        }
        final_answer=answer;
    }

    void display(){
        cout<<"The Answer you desire is: "<<final_answer<<endl;
    }
};


int main()
{
    // float degrees=45;
    // float rad=((degrees*3.14)/180);
    // cout<<rad<<endl;
    // cout<<a;

    Calculator o1;
    int op,a,b;
    cout<<"Welcome to Calculator";
    cout<<endl;
    cout<<"Please enter the operation you wish to perform: ";
    cout<<endl;
    cout<<"1.Addition"<<endl;
    cout<<"2.Difference"<<endl;
    cout<<"3.Multiplication"<<endl;
    cout<<"4.Division"<<endl;
    cout<<"5.Sine"<<endl;
    cout<<"6.Cosine"<<endl;
    cout<<"7.Tangent"<<endl;
    cout<<"8.Logarithm"<<endl;
    cout<<"Enter Your Choice: ";cin>>op;
    
    if(op>0 && op<5){
        cout<<"Enter Values of a and b: ";cin>>a>>b;
        o1.set_a_b(a,b);
        o1.calculate(op,a,b);
    }
    else if(op>4 && op<9){
        cout<<"Enter Values of a: ";cin>>a;
        o1.set_a(a);
        o1.calculate(op,a);
    }
    o1.display();
    return 0;
}