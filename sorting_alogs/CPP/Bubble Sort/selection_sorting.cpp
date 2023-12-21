//The following is the selection sorting algorithm
#include<iostream>
using namespace std;

int main() {
    //declare an array size
    int n;
    cin>>n;
    int arr[n];

//The below will take the input of each number till the array gets full
    for (int i=0;i<n;i++) {
        cin>>arr[i];
    }

    //jump to the logic
    /*
    In this algorithm two counters will be running simultaneous
    i and j
    the jth is always +1 ahead of ith
    
    */

   for (int i=0;i<n-1;i++) {
    for (int j=i+1;j<n;j++) {
        if (arr[j]<arr[i]) {
            int temp = arr[j];
            arr[j] = arr [i];
            arr[i] = temp;
        }
    }
   }
   //print the output of sorted list
   for (int i=0;i<n;i++) {
    cout<<arr[i]<<" ";

   }
   cout<<endl;
}