#include<iostream>

using namespace std;

int main() {
    cout<<"Enter the number array \n";
    int n;
    cin>>n; //Accept the size of the array
    //if you want to keep validation then use the while loop else skip it
    while (n<=0) {
      cout<<"Kindly enter the value of n greater than 0 \n";
      cin>>n;
    }
    //conver the number (array size) into proper array format
    int arr[n];
    //Hence now the array is created of n size

    //accept the values in for loop till the array is full 
    for (int i=0;i<n;i++) {
        cout<<"Enter the number:  ";
        cin>>arr[i];
    }
    //if you wan to print the array then use the below for loop
    cout<<"Your array looks like this:";
    for (int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }

    //Now lets play with the main logic
  
    //declare a counter and compare with the array size so that the while loop will keep runnning with the entier logic
    int counter = 1;
    while(counter<n) //Declare the while loop till the counter the size of the array is satisfied hence (counter<n)
      { 
        //Declare for loop which keeps running inside the while loop
        for (int i=0;i<n-counter;i++) {
            if (arr[i]>arr[i+1])
            // the if condition checks if the vale in array is greater than +1 if yes then swip :)
             { 
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
      //The below loop printes each sorted array
        cout<<"\nAfter each iteration "<<counter<<":";
        for (int i=0;i<n;i++) {
          cout<<arr[i]<<" ";
        }
        //keep incrementing the counter
        counter++;
    }
    //Declare a for loop which will print the out in sorted array
    cout<<"\n"<<"Your sorted array looks like this: ";
    for (int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0; 
    //just return the code with +1 value looks cool :)
}

//end of the code
//Author @wizcoderx
