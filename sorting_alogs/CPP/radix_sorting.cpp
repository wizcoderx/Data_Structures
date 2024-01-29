 #include <iostream>

 using namespace std;

 int getMax(int arr[], int n) {

    int max = arr[0];

    for (int i = 1; i < n; i++)

        if (arr[i] > max)

            max = arr[i];

    return max;

 }





 void countingSort(int arr[], int n, int exp) {

    const int RANGE = 10;

    int output[n];

    int count[RANGE] = {0};





    for (int i = 0; i < n; i++)

        count[(arr[i] / exp) % 10]++;





    for (int i = 1; i < RANGE; i++)

        count[i] += count[i - 1];





    for (int i = n - 1; i >= 0; i--) {

        output[count[(arr[i] / exp) % 10] - 1] = arr[i];

        count[(arr[i] / exp) % 10]--;

    }





    for (int i = 0; i < n; i++)

        arr[i] = output[i];

 }





 void radixSort(int arr[], int n) {

    int max = getMax(arr, n);





    for (int exp = 1; max / exp > 0; exp *= 10)

        countingSort(arr, n, exp);

 }





 int main() {

    int arraySize;





    cout << "Enter the number of Elements in the Array: ";

    cin >> arraySize;





    int *myArray = new int[arraySize];





    cout << endl << "Enter the Elements to be used in the Array" << endl;

    for (int i = 0; i < arraySize; i++) {

        cout << "Element " << i + 1 << ": ";

        cin >> myArray[i];

    }





    radixSort(myArray, arraySize);





    cout << "\nArray after sorting: \n";

    for (int i = 0; i < arraySize; i++) {

        cout << myArray[i] << " ";

    }





    return 0;

 }



