#include<iostream>
#include<string>
using namespace std;

class person
{
public:
   string name;
   int age;
  /* person(string name , int age)
   {
     this->name = name;
     this->age = age;
   }*/
  person()
  {

  }

};

class student : public person
{
public:
 int rollno;
   void getinfo ()
   {
    
    cout<< " name :" << name << endl;
    cout<< " age :" << age << endl;
    cout<< " rollno :" << rollno << endl;
   }
};
int main ()
{
    student s1;
    s1.name = " rahul kumar";
    s1.age = 12;
    s1.rollno  = 156;

    s1.getinfo();
    return 0;
}