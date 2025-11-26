#include<iostream>
#include<vector>
using namespace std;

bool searchMatrix(int matrix[][4], int target,int row,int col)
{
    

    int rowIndex = 0;
    int colIndex = col-1;

    while (rowIndex < row && colIndex >= 0)
    {
        int element = matrix[rowIndex][colIndex];

     if (element == target )
        {
            return 1;
        }
        if (element > target)
        {
            colIndex--;
        }
        else
        {
            rowIndex++;;
        }
        
    }
    return 0;
}

int main ()
{
      int matrix [3][4]=   
    {
        {1,3,5,7},
        {10,11,16,20},
        {23,30,34,50}
    };
    int target ;
    cout<<"Enter the target value to search :";
    cin >> target;

    int row = 3;
    int col = 4;


    if (searchMatrix(matrix,target,row ,col))
    {
        cout<<" Target found: " <<target<<endl;
    }
    else
    {
        cout <<"Target not found :"<<target<<endl;
    }
    return 0;
    
}