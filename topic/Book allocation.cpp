#include<iostream>
#include<vector>
using namespace std;

bool isPossible(vector<int> arr, int n, int m, int mid)
{
    int student = 1;
    long long page = 0 ;
    for (int i = 0; i < n; i++)
    {
        if (page + arr[i] <= mid)
        {
            page = page + arr[i]; 
        }
        else
        {
            student ++;
            page = arr[i];
        }
        
        
    }
    return student <= m;
    
}

int allocateBook(vector<int>arr,int n, int m)
{
    int s = 0;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    int e = sum;
    int ans = -1;
    int mid = s + (e-s) / 2;

    while (s<=e)
    {
        if (isPossible(arr,n, m, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e-s) / 2;
        
        
    }
    
    
    return ans;
}
int main ()
{
    vector<int> arr = {10,20,30,40};
    int n = 4;
    int m = 2;
    int result = allocateBook(arr, n,m);

    cout << " MInimum pages per student :" << result  << endl;

    return 0;
    

}