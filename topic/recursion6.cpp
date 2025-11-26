#include<iostream>
using namespace std;

int countDistincWayToClimStair (  long long nStairs)
{   // base class
    if (nStairs < 0)
    {
        return 0;
    }
    if (nStairs == 0)
    {
        return 1;
    }
    //recursion
    int ans = countDistincWayToClimStair(nStairs-1)+ countDistincWayToClimStair(nStairs-2);

    return ans;
}
int main ()
{
    int n ;
    cin >> n;

    int ans = countDistincWayToClimStair(n);
    cout << " countDistincWayToClimStai " << n << " is " << ans << endl;

    return 0;
}