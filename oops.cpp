#include<iostream>
#include<string>
using namespace std;

class teacher
{
private:
   double  salary;
    
public:
    // attribute / property
    string name;
    string dept;
    string subject;

    // method / member function
    void changedept( string newdept)
    {
        dept = newdept;
    }

    // setter
    void setsalary(double s)
    {
        salary = s;
    }

    // getter
    double getsalary ()
    {
        return salary;
    }

};
int main()
{
    teacher t1;
    t1.name = " rukesh";
    t1.subject = " computer science";
    t1.setsalary(25000);
    
    cout<< t1.name << endl;
    cout<< t1.getsalary() << endl;


    return 0;

}