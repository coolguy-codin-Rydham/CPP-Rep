#include<iostream>
#include<cmath>
using namespace std;
class Point;
float distance2points(Point, Point);
class Point{
    float x,y;
    public:
        Point(float a,float b){
            x=a;y=b;
        }
        void display_Point(){
            cout<<"The point is ("<<x<<","<<y<<")"<<endl;
        }
        friend float distance2points(Point, Point);
};

float distance2points(Point o1, Point o2){
    float xdiff=pow((o1.x-o2.x),2);
    float ydiff=pow((o1.y-o2.y),2);
    float dist=sqrt(xdiff+ydiff);
    return dist;
}
//Create a function which takes 2 point objects and display its distance
int main()
{
    Point o1(1,1);
    o1.display_Point();    
    Point o2(4,2);
    o2.display_Point();

    cout<<endl;

    cout<<distance2points(o1,o2);    
    return 0;
}
