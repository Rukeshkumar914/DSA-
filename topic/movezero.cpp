#include<iostream>
#include<vector>
using namespace std;

void moveZero(vector<int>& nums)
{
    int i= 0;
   

    for (int j = 0; j<(int)nums.size(); j++)
    {
        if (nums[j] != 0)
        {
            swap(nums[i], nums[j]);
            i++;
            
        }
        
    }
    

}
int main ()
{
    int arr[] = {0,1,0,3,0,12};
    vector<int> nums (arr, arr + sizeof(arr)/sizeof(arr[0]));

    cout << "Before moving zero : ";

    for(int num : nums)
    {
        cout<< num << " ";
    }
    cout <<endl;

    moveZero(nums);

    cout <<" After moving zeroes :";

    for(int num : nums)
    {
        cout<< num << " ";
    }
    cout <<endl;

    return 0;

    
}