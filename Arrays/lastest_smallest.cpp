#include<iostream>
using namespace std;

int main(){
    int arr[]={1,5,6,4,89,4};
    int n= sizeof(arr)/sizeof(int);
    // int max=arr[0];
    // for(int i=0;i<n;i++){
    //     if(arr[i]>max){
    //         max=arr[i];
    //     }
    // }

    // cout<<max;


    int min=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"smallest of the array is : "<<min;
}