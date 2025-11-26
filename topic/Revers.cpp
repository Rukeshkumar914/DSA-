#include <iostream>
using namespace std;

void print(int arr[],  int size) {
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
    int arr[5] = {11,7,3,12,4};
    cout << "print the reverse array" << endl;
    int s;
    cin >> s;
    reverse(arr, 0, s); // Reverse the array from index 0 to v
    print(arr,  5);   // Print the array

    return 0;
}