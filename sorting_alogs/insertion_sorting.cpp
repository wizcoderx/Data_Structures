#include<iostream>
using namespace std;

int main() {
    int n; // Declare 'n' to accept the size of the array
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n]; // Create an array named 'arr' with 'n' elements.

    for (int i = 0; i < n; i++) {
        cout << "Enter the number: ";
        cin >> arr[i];
    }

    // Let's jump to the main logic
    for (int i = 1; i < n; i++) {
        int current = arr[i];
        int j = i - 1;

        // Move elements greater than 'current' to one position ahead
        while (j >= 0 && arr[j] > current) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = current; // Place 'current' at its correct position
    }

    cout << "The sorted array is:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
