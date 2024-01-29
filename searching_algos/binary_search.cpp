#include <iostream>
using namespace std;

//Declare a function that performs the binary_search

int binary_search(int arr[], int key, int n) {
    int s=0;
    int e=0;

    while(s<=e) {
        int mid=(s+e)/2;

        if (arr[mid]==key) {
            return mid;
        }
        else if (arr[mid]>key) {
            e=mid-1;
        }
        else {
            s=mid+1;
        }

        return -1;

}
}


int main() {
    int n;
    cin>>n; //Accepting the size of array from user

    int arr[n]; //Declare an array of size n
    for(int i=0; i<n;i++) {
        cin>>arr[i];
    }

    int key;//the single value we have to search
    cin>>key;

    cout<<binary_search(arr,n,key)<<endl;

    return 0;
}