#include<iostream>
using namespace std;
void bubbleSort (int arr[], int n)
{
    for (int i=1; i<n-1; i++ )
    {
        bool swapped = false;

        for (int j = 0; j < n-i; j++)
        {
            if (arr[j] > arr [j +1] )
            {
                 // swap the  elemnt
                int temp = arr[j];
                arr[j] = arr [j +1];
                arr[j +1] = temp;
                swapped= true;
            }
            
        }
        // if no swapping occured array is already sorted
        if (!swapped)
        {
            break;
        }
        
        
    }
}
int main ()
{
    int arr [] = {10,9,8,6,4,2,13};
    int n = sizeof(arr)/sizeof (arr[0]);

    bubbleSort(arr,n);

    cout<<"sorted array :";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout <<endl;

    return 0;
    
}