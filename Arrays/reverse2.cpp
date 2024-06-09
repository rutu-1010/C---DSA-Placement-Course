#include<iostream>
using namespace std;
void reverse(int *arr,int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
    for (int i = 0; i < n; i++){
        cout<<arr[i]<<",";
    }
    
    
}
int main(){
    int arr[]={1,2,3,4,8,9};
    int n = sizeof(arr)/sizeof(int);
    
    reverse(arr,n);
    
}