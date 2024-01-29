#include <iostream>
using namespace std;

//Declare a function that performs linear search
int linearSearch(int arr[], int key, int n) {
    //Traverse through all the elements
    for(int i=0;i<n;i++) {
        if(arr[i]==key) { //if we found the value(key) in the array return it.
            return i;
        }
    }
    //if the key is missing then return -1 :)
    return -1;
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

    cout<<linearSearch(arr,n,key)<<endl;

    return 0;
}