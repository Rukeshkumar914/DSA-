#include<iostream>
using namespace std;
int main()
{
    int x = 4;
    int y = 8;
    cout<<x<<" " <<y<<endl;
    int temp = x;
    x = y;
    y = temp;
    cout<<x<<" "<<y<<endl;

}