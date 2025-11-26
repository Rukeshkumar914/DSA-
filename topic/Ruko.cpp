#include<iostream>
using namespace std;

void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
}

void reverse(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start ++;
        end --;
        
    }
    
}

void rotated(int arr[], int k, int n)
{
    k = k % n;
    if (k == 0)
    {
        return ;
    }
    
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
}

int main ()
{
    int arr[5] = {9,8,7,6,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    int k = 4;

    cout << " orginal array " << endl;
    print(arr,n);

    reverse(arr,0, k);
    cout << "after rotation" << endl;

    print(arr, n);
}