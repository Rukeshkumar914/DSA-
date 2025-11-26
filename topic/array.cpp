#include<iostream>
using namespace std;
void printArray()
{

}

int main()
{


    int number[5] = {5, 7, 11, 15 , 13};

    cout<<" Value at 3 index "<< number [3] << endl;

    int second [7] = {1,2,3,4,4,5,2,};

    int n = 7;
    cout<< " Printing the array " << endl;

    for(int i = 0; i<n; i++ )
    {
        cout<<second[i] << " ";
    }
    cout << endl;

    cout<<" Everything is fine " << endl;

    return 0;


}
