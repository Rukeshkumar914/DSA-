#include<iostream>
#include<string>
using namespace std;

class teacher
{
private:
     double salary;
public:
      string name ;
      string dept ;
      string subject ;

      void changedept(string newdept)
         {
            dept = newdept;
         }

    
};
class account 
{
private :
 double balance;
 string password;
public:
 string accountId;
 string username;

};

int main()
{
    teacher t1;
    t1.name = "Rukesh";
    t1.dept = " computer sceince";
    t1.subject = " Math";
     
    cout << t1.name << endl;
    cout << t1.dept << endl;
    cout << t1.subject << endl;

    return 0;
}
