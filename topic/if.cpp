#include<iostream>
using namespace std;
int main ()
{
    int a;
    cout<<"enter the value of a "<<endl;
    cin>>a;

    if(a>0)
    {
        cout <<"A is postive "<<endl;
        
    }
    else if (a<0)
    {
        cout<<"A is negative"<<endl;
        
    }
    else 
    {
        cout<<"A is 0 "<<endl;
    }
    return 0;

}