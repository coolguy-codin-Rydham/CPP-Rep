#include <iostream>
using namespace std;
class Employee
{
    int id;
    static int count; // Default value is 0
public:
    void setdata(void)
    {
        cout << "Enter ID ";
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "Your Id is: " << id << " and this is employee number count " << count<<endl;
    }
    static void getcount(void){
        cout<<"The count is: "<<count<<endl;
    }
};

int Employee::count;
int main()
{
    Employee Rydham, harry, lovish;
    Rydham.setdata();
    Rydham.getData();
    Employee::getcount();
    cout << endl;
    harry.setdata();
    harry.getData();
    Employee::getcount();
    cout << endl;
    lovish.setdata();
    lovish.getData();
    Employee::getcount();

    return 0;
}