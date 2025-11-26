// modulo
#include<iostream>
using namespace std;

int modularExponentiation(int x, int n , int m)
{
    int res = 1;
    while (n>0)
    {
        if (n&1)
        {
            res = (1LL* (res)*(x)%m)%m;
        }
        x = ( 1LL * (x)%m * (x)%m)%m;
        n = n >> 1;
        
    }
    return res;    
}

int main ()
{
    int n;
    cin >> n;
    int x = 2;
    int m = 100000;
    int result = modularExponentiation (x,n,m);

    cout << result << endl; 
    return 0;
} 