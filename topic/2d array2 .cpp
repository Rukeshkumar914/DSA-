#include<iostream>
using namespace std;

bool isPresent(int arr[][3],int target, int row,int col )
{
    for (int i = 0; i <row; i++)
    {
        for (int  j = 0; j < col; j++)
        {
            if ( arr[i][j] == target)
            {
                return 1;
            }
            
        }
        
    }
    return 0;
    
}
 // colum by sum
void printSum(int arr[][3], int row, int col )
{
    cout << "Printing sum ->" <<endl;
    for (int j = 0; j < row; j++)
    {
        int sum =0;

        for (int i = 0; i < col; i++)
        {
            sum += arr[i][j];
        }

        cout << sum << " ";
        
    }
    cout << endl;
}

int main ()
{
    int arr[3][3];

    cout<<"Enter the element :" << endl;

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cin >> arr[row][col];
        }
        
    }
    cout << "priting tha array " << endl;
    for (int  row = 0; row < 3; row++)
    {
        for (int col = 0; col <3; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
        
    }
    cout << "Enter the elemnt to search " << endl;
    int target;
    cin >> target;

    if (isPresent(arr,target,3,3))
    {
        cout << " Element found " << endl;
    }
    else
    {
        cout <<" Not found" << endl;
    }
    printSum(arr, 3 ,3);
    return 0;
    
}