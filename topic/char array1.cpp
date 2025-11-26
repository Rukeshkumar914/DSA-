//print the char of length
#include<iostream>
using namespace std;

int getLenth(char name [])
{
    int count = 0;
    
    for (int i = 0; name [i] != '\0'; i++)
    {
        count ++;
    }

    return count ;
    
}

int main ()
{
    char name [20];
    
    cout << " Enter your name" << endl;
    cin >> name;

    cout << "your name is ";
    cout << name << endl;

    cout <<"length :" << getLenth(name) << endl;
    
    return 0;
}