#include <iostream>
using namespace std;

void print(int arr[], int size)
{
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
void rotated(int arr[],int n ,int k)
{
    k = k %n;
    
    if (k ==0) 
    {
        return ;
    }
     
    reverse (arr,0,n-1);  // reverse the entire array
    
    reverse(arr,0, k-1);  //reverse the first k elemnt
    
    reverse(arr,k, n-1);  //revers the remaing n-k elemen

}

int main() {
    int arr[5] = {13,41,8,2,9};
   
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;

    cout << "original array" << endl;
    print(arr, n);

    rotated(arr, n, k );
    cout << "Array after rotation " << endl;

    print(arr,n);

    return 0;

}