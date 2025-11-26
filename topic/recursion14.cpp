// binary search
#include<iostream>
using namespace std;

void print (int s, int e, int arr[])
{
    for (int i = s; i < e; i++)
    {
        cout << arr[i] << " ";
    }
    cout<< endl;
    
}
int solve(int*arr, int s,int e, int k)
{
    if(s>e)
    {
        return -1;
    }
    int mid = s + (e-s)/2;
    //element found

    if (arr[mid] == k)
    {
        return mid;
    }
    
    if(arr[mid]< k)
    {
        return solve(arr,mid+1, e, k);
    }
    else
    {
        return solve(arr,s,mid-1,k);
    }
    
}

int binarySearch(int *input, int n, int val)
{
    int ans = solve(input, 0 ,n-1, val);
    
}

int main ()
{
    int arr[]= {1,3,7,9,11,12,45};
    int key= 12;
    cout << " printing the number "  << binarySearch (arr,7,key) << endl;

    return 0;
}