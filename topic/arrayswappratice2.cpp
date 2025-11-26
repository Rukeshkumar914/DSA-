#include<iostream>
using namespace std;

int findUnique(int *arr , int size)
{
    int ans = 0;

    for (int i = 0; i < size; i++)
    {
        ans = ans^arr[i];
    }
    return ans;
    
    
}
int main ()
{
    int findUnique[7]= {1,5, 6,2,5,6,1}; 
    
}