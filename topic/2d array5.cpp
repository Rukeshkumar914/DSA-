#include<iostream>
#include<vector>
using namespace std;

bool wavePrint(int arr[3][3],  int row, int col)
{
    vector<int> ans;

    for (int j =0; j < col; j++)
    {
        if (j & 1)
        {
            for (int i = row -1; i >= 0 ; i--)
            {
                ans.push_back(arr[i][j]);
            
            }
            
        }
        else
        {
            for (int i = 0; i < row; i++)
            {
                ans.push_back(arr[i][j]);
            }
            
        
        }
        
        
    }
    for(int val : ans)
    {
        cout << val << " ";
    }
    cout << endl;
    return true;
    
}

int main ()
{
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
   
    
    wavePrint(arr,3,3);

    return 0;
}