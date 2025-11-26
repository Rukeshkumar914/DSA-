/*element are found ya not found in the array*/
#include<iostream>
using namespace std;

int getPivot( int arr[], int n)
{
    int s = 0;
    int e =n-1;
    int mid = s + (e-s) / 2;
    while (s<e)
    {
        if (arr[mid]>= arr[0])
        {
            s = mid +1;
        }
        else
        {
            e = mid;
        }
       mid = s + (e -s)/2; 
    }
    return s;
    
}
int binarySearch (int arr[], int s,int e, int key)
{
    int start = s;
    int end = e;

    int mid = start + (end - start) /2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
            
        if (key > arr [mid])
        {
            start = mid +1;
        }
        else
        {
            end = mid - 1;

        }

        mid = start + (end-start) / 2;
        
    }
    return -1;
}

int findPosition(int arr[],int n, int k)
{
    int pivot = getPivot(arr,n);
    if (k >= arr[pivot]&& k <= arr [n-1])
    {
        return binarySearch (arr, pivot, n-1, k);
    }    
    else
    {
        return binarySearch (arr, 0 , pivot-1, k);
    }
}

int main ()
{
    int arr [6] = {58,12,96,14,36,78};
    int  n = sizeof(arr)/sizeof(arr[3]);
    int k = 96;
    int result = findPosition(arr,n, k);
    
    if (result != -1)
    {
        cout<<"Element found at index " <<result <<endl;
    }
    else
    {
        cout<<"Element not found "<<endl;

        return 0;  
    }    
}


    
    

