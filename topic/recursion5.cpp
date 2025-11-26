#include<iostream>
using namespace std;

int  fib (int n)
{
    if (n==0)
    {
        return 0 ;
    }
    else if(n==1)
    {
        return 1;
    }
    int ans = fib (n-1) + fib (n-2);

    return ans;
    
}

int main ()
{
    int n ;
    cin >> n;
    cout << endl;
    
    // if (n<0)  
    // {
    //     cout<< " negative number" << endl;
    //     return 1;
    // }
    int ans = fib(n);
    cout<< " Fibonacci number  " << n << " is " << ans << endl;
    


    return 0;
}