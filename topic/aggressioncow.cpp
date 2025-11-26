#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

 bool canPlaceCows(vector<int> &stall,int n, int m, int dist,int k)
 {
    int cowPlace = 1;
    int LastPos = stall[0];

    for (int i = 0; i <(int) stall.size(); i++)
    {
        if (stall[i]-LastPos >= dist)
        {
            cowPlace++;
            if (cowPlace==k)
            {
                return true;
            }
            LastPos = stall[i];
            
        }
        
    }
    return false;

 }


int aggressiveCows(vector<int> &stall, int m,int n, int mid)
{
    sort(stall.begin(), stall.end());
    int s = 1;
    int e =stall[n-1] - stall[0];
    int maxi = -1;

   for (int i = 0; i<(int)stall.size(); i++)
    {
        maxi = max(maxi, stall[i]);
    }
    int ans = maxi;
    
    while (s<=e)
    {
        
        if (canPlaceCows(stall,m, mid))
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid -1;
        }
        mid = s + (e-s)/2;
        
        
    }
    return ans; 
    
}

int main ()
{
    vector<int> arr = {10,20,30,40};
    int n = 4;
    int m = 2;
    int result =aggressiveCows (arr, n,m);

    cout << " Minimum pages per student :" << result  << endl;

    return 0;
}
