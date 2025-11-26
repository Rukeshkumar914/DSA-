//last two digit reverse
#include <iostream>
using namespace std;

void print(int arr[], int size) {
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

int main() {
    int arr[5] = {5, 4, 3, 2, 1};
    cout << "revers last two number" << endl;

    int start;
    cin >> start;
   
    reverse(arr,3, start); // Reverse the array from index 3 , 4
    print(arr,  5);   // Print the array

   return 0;
}