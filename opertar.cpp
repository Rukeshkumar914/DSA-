#include<iostream>
using namespace std;
int main ()
{
    int a = 5 , b = 8;
    cout<<"operator in c++:"<<endl;
    cout <<"following are the types of operator in c++ "<<endl;
   // Arithmetic operator
   cout<<"the value of a + b is "<<a+b<<endl;
    cout<<"the value of a - b is "<< a - b <<endl;
    cout <<"the value of a * b is "<<a*b<<endl;
    cout<<"the value of a / b is "<<a / b <<endl;
    cout<<"the value of a % b is "<<a%b<<endl;
    cout<<"the value of a++ is "<<a++<<endl;
    cout<<"the value of a-- is "<<a--<<endl;
    cout<<"the value of ++a is "<<++a<<endl;
    cout<<"the value of --a is "<<--a<<endl;
    cout <<endl;


    // Assigment operator --> used to assign to variables
    // int  a = 3, b = 9;
    // char d = 'd';
    // comparsion operators
    cout <<"following are the comparsion operator in c++"<<endl;
    cout<<"the value of a == b is "<<(a==b)<<endl;
    cout<<"the value of a != b is "<<(a!=b)<<endl;
    cout<<"the value of a >= b is "<<(a>=b)<<endl;
    cout<<"the value of a <= b is "<<(a<=b)<<endl;
    cout<<"the value of a < b is "<<(a<b)<<endl;
    cout<<"the value of a > b is "<<(a>b)<<endl;

    // logical operator
    cout <<"following are the logical operator in c++"<<endl;
    cout<<"the value of this logical and operator ((a==b)) && (a<b)) is:"<<((a==b) && (a<b))<<endl;
    cout<<"the value of this logical or operator ((a==b)) || (a<b)) is:"<<((a==b)|| (a<b))<<endl;
    cout<<"the value of this logical and operator (!(a==b))  is:"<<(!(a==b))<<endl;
    return 0;
    
}
