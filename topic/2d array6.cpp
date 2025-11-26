#include<iostream>
#include<vector>
using namespace std;

vector<int> spiralOrder(int matrix[][3], int  Row)
{
    vector<int> ans;
    int Col = 3;
    int count = 0;
    int total = Row*Col;
    int startingRow = 0;

    int  endingRow = Row - 1;
    int startingCol = 0;
    int endingCol = Col -1;

    while (count < total )

    { //print starting row
        for (int index = startingCol; count < total && index <= endingCol; index++ )
        {
            ans.push_back(matrix[startingRow][index]);
            count++;
        }
        startingRow++;

        // print ending column
        for (int  index = startingRow; count < total && index <= endingRow; index++)
        {
            ans.push_back(matrix[index][endingCol]);
            count++;
        }
        endingCol--;

        // printing ending row
        for (int index = endingCol; count < total && index >= startingCol; index--)
        {
            ans.push_back(matrix[endingRow][index]);
            count++;
        }
        endingRow--;

        //print satarting column
        for (int index = endingRow; count < total && index >= startingRow ; index--)
        {
            ans.push_back(matrix[index][startingCol]);
            count++;
        }
        startingCol++;

    }
    return ans;
    
}
int main ()
{
    int matrix[3][3] = {{1,2,3},{4, 5, 6},{7,8,9}};
    vector <int > ans;

    ans = spiralOrder(matrix, 3);
    
    for (int index = 0; index < (int) ans.size(); index++)
    {
        cout << ans [index] << " ";
    }
    cout<< endl;


    return 0;
}