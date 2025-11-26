#include<iostream>
using namespace std;

bool LinearSearch(int arr [], int size,int k)
{
    if (size == 0)
    {
        return false;
    }
    if (arr[0] == k)
    {
        return  true;
    }
    else
    {
        bool remainingPart = LinearSearch(arr+1, size -1,k);
        return remainingPart;
    }

}

int main ()
{
    int arr[5]={3,5,1,3,6};
    int size = 5;

    int key;
    cout << "Enter the key " << endl; 
    cin >> key;
    
    bool ans = LinearSearch(arr, size,key);

    if (ans)
    {
        cout << " present" << endl;
    }
    else
    {
        
        cout<< "absent"<<endl;
    }

    return 0;

}