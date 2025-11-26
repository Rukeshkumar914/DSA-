#include<iostream>
using namespace std;

int main()
{
    int arr[10], n, max, min;
    cout<<" Enter the size of the array " << endl;
    cin>>n;

    cout<<" Enter the element of the array "<<endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

    }

    max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }

        min = arr[0];
        for (int i = 0; i < n; i++)
        {
            if (min > arr[i])
            {
                min = arr[i];
            }
            
        }

        cout << " largest element " << max << endl;
        cout << " smallest element " << min << endl; 
        
        
    }
    
    

}