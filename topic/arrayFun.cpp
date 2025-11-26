#include<iostream>
using namespace std;

void printArray (int arr[], int size)
{
    cout<<" printing the array " << endl;

    for(int i= 0; i<size; i++)
    {
        cout << arr[i] << " ";
    }
    cout<< " printing Done " << endl;
}
int main()
{
    int second[3] = { 2,8,9}; 

    cout << " Value at 2 index " << second[2] << endl;

    printArray( second , 3);

    int third [4] = { 1 , 4 , 0, 8};

    int n = 4;
    printArray( third,n);



    int fourth[6]= {4,5,6,1,2,3};

    n = 6;
    printArray(fourth, 6);
   
    
}