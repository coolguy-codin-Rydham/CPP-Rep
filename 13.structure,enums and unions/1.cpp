// //? Structures, unions and enums

// #include<iostream>
// using namespace std;
// //todo: Structures------>>>>
// typedef struct employee
// {
//     int eid;
//     char fav_char;
//     float salary;
// }epe;
// union money
// {
//     int rice;
//     char car_first_letter; 
//     float pounds;
// };

// int main()
// {
//     //todo: Use of structures------->>>>
//     epe rydham;
//     rydham.eid=1008;
//     rydham.fav_char='R';
//     rydham.salary=(100000000000);
//     cout<<rydham.eid<<endl;
//     cout<<rydham.fav_char<<endl;
//     cout<<rydham.salary<<endl;


//     return 0;
// }

#include<iostream>
using namespace std;
typedef struct employee         //?employee is the name of a data type defines using structure
{                       //? it doesnt take any byte from memory
    int emp_id;
    float salary;
    char level;
}epe;
union bande{
    int empl_id;
    float pisa;
    char levels;

};
enum days{
    Monday=12212121212,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};
int main()
{
    // epe obj;        //?obj is an variable of data type employee
    // obj.emp_id=1008;
    // obj.salary=100000000;
    // obj.level='A';
    // cout<<obj.emp_id;

    // union bande obj;
    // obj.empl_id=1008;
    // obj.pisa=100000;
    // obj.levels='a';
    // cout<<obj.empl_id<<endl;   //! Garbage output beacuse pisa was defined right after empl id. we can access only one
    // cout<<obj.pisa;            //! union uses for memory optimization


    //todo: printing stuff from enum
    // cout<<Tuesday;cout<<endl;
    // cout<<Wednesday;                         
    
    // days obj;
    // obj=Monday;
    // cout<<obj;

    

    return 0;
}
