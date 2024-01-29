#include <iostream>
using namespace std;

// Declare a function that performs the binary_search
int binary_search(int arr[], int key, int n) {
    int s = 0;
    int e = n - 1; // Initialize 'e' to the last index of the array

    while (s <= e) {
        int mid = (s + e) / 2;

        if (arr[mid] == key) {
            return mid;
        } else if (arr[mid] > key) {
            e = mid - 1;
        } else {
            s = mid + 1;
        }
    }

    return -1; // Return -1 if the key is not found
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int* arr = new int[n];  // Declare an array of size n

    cout << "Enter sorted elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int key; // The single value we have to search
    cout << "Enter the key to search: ";
    cin >> key;

    cout << "Index of key: " << binary_search(arr, key, n) << endl;

    return 0;
}
