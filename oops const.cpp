#include<iostream>
#include<string>
using namespace std;

class Teacher
{
private:
 double salary;
public:
   string name;
  string dept;
  string subject;

 // non parameterized
 Teacher ()
 {
    dept = "computer science";
 } 
 
  // parameterized
  Teacher ( string n, string d, string s,double sal)
  {
    name = n;
    dept = d;
    subject = s;
    salary = sal;
  }

  

  void changedept(string newdept)
  {
    dept = newdept;
  }

  void getinfo ()
  {
    cout << " name " << name << endl;
    cout << "subject "<< subject << endl;
    cout << " dept " << dept <<endl;
  }
};

int main ()
{
    Teacher t1( "Rukesh", " computerscience", " Math", 25834);
     t1.  getinfo ();

     return 0;
}