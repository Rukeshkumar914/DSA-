#include<iostream>
using namespace std;

struct employee
{
    int eId;
    char favchar;
    float salary;
};

int main()
{
    struct employee ram;
    ram . eId = 1;
    ram.favchar ='c';
    ram .salary = 12000000;
    cout<<"The value is "<< ram.eId <<endl;
    cout<<"The value is "<<ram.favchar <<endl;
    cout<<" The value is "<<ram.salary <<endl;
    return 0;
}   
