// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void reverseArr1(int *arr, int n) {
    int newArr[n];
    for(int i=0; i<n; i++) {
        newArr[i] = arr[n-i-1];
    }

    for(int i=0; i<n; i++) {
        arr[i] = newArr[i];
    }

   for(int i=0; i<n; i++) {
        cout<<arr[i]<<",";
    }
}

int main() {
    int arr[]={1,5,9,7,5,6};
    int n = sizeof(arr)/sizeof(int);
    
    reverseArr1(arr,n);

    return 0;
}   
    

