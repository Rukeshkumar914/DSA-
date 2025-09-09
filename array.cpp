#include<iostream>
using namespace std;

int main()
{
    int marks[]= {12,28,60,30};
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

    int mathmarks [4];
    mathmarks[0] = 48;
    mathmarks[1] = 65;
    mathmarks[2] = 43;
    mathmarks[3] = 78;

    cout<<"These are marks "<<endl;


    //cout<<mathmarks[0]<<endl;
    //cout<<mathmarks[1]<<endl;
    //cout<<mathmarks[2]<<endl;
    //cout<<mathmarks[3]<<endl;
    

    int i = 0;
    while (i < 4)
    {
        cout<< " These are marks " <<    mathmarks[i]     <<endl;
        i++;
        

    }

    int* p = marks;
    cout<<*(p++)<<endl;
    cout<<*(++p)<<endl;
    
    
    
    return 0;
}