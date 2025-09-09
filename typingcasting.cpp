#include<iostream>
using namespace std;

int main ()
{
    
int a = 45;
float b =45.46;
cout<<"the value of a is"<<(int)a<<endl;
cout<<"the value of a is "<<int(a)<<endl;

cout<<"the value of b is "<<(float)b<<endl;
cout<<"the value of b is "<<float(b)<<endl;

cout <<"the expression is "<<a + b<<endl;
cout<<"the expression is "<<a + int (b)<<endl;
cout<<"the expression is "<<a + (int)b<<endl;

return 0;

}