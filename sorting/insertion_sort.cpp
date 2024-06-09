#include<iostream>
using namespace std;

void printarr(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

void insertion_sort(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
       int current = arr[i];
       int prev = i-1;
       while (prev>=0 && arr[prev]>current)
       {
        swap(arr[prev],arr[prev+1]);
        prev--;
       }

       arr[prev+1]=current;
       
    }
    printarr(arr,n);
}

int main(){
    int arr[]={1,5,9,8,4,3};
    int n = sizeof(arr)/sizeof(int);
    insertion_sort(arr, n);
}