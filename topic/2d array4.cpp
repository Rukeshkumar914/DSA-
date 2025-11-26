#include<iostream>
#include<climits>
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
 
void printSum(int arr[][3], int row, int col )
{
    cout << "Printing sum ->" <<endl;
    for (int i = 0; i < row; i++)
    {
        int sum =0;

        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }

        cout << sum << " ";
        
    }
    cout << endl;
}
// largest sum of row
int largestRowsum(int arr[][3], int row , int col)
{
    int maxi = INT_MIN;
    int rowIndex = -1; 

    for (int i = 0; i <row; i++)
    {
        int sum = 0;
        for(int j =0; j<col; j++)
        {
            sum += arr[i][j];
        }
        if (sum>maxi)
        {
            maxi = sum;
            rowIndex = i;
        }
        
    }
    cout << " The maximum sum is : " <<maxi << endl;
    return rowIndex;
    
}

int main ()
{
    int arr [3][3];
    cout <<"Enter the elements " <<endl;

    for (int  i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
        
    }
    cout << "Printing the Array " <<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout <<endl;
        
    }
    int ansIndex = largestRowsum(arr,3,3);
    cout << " max row is at index : " <<ansIndex << endl;

    return 0;

}