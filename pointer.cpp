#include<iostream>
using namespace std;

int main()
{
    int a =3;
    int * b;
    b = &a;
     

    //&--->(address of)operator
    cout<<" The address of a "<<&a<<endl;
    cout<<" The address of b "<<b<<endl;

    // * -->(value at)defernce operator
    cout<<"The value of b is "<<*b<<endl;
    return 0;

}
