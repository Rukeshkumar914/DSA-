#include <iostream>
using namespace std;

// Function to find square root using binary search
int binarySearch(int n)
{
    if (n == 0) return 0; // Handle edge case
    int s = 0, e = n, mid, ans = -1;
    while (s <= e)
    {
        mid = s + (e - s) / 2; // Avoid overflow
        long long square = (long long)mid * mid; // Use long long to handle large squares

        if (square == n)
            return mid;
        else if (square < n)
        {
            ans = mid; // Store potential answer
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans; // Return the floor of the square root
}

int mySqrt(int x)
{
    if (x < 0) return -1; // Handle negative input
    return binarySearch(x);
}

int main()
{
    int x;
    cout << "Enter a number to find its square root: ";
    cin >> x;
    int result = mySqrt(x);
    if (result != -1)
        cout << "Square root of " << x << " is approximately " << result << endl;
    else
    {
         cout << "Cannot compute square root of a negative number." << endl;
    }
   
        return 0;
}