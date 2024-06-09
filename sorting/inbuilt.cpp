#include<iostream>
#include<algorithm>
using namespace std;

void print(int arr[],int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {4,5,9,7,2,6,5,6,1};
    int n = sizeof(arr)/sizeof(int);
    sort(arr,arr+n,greater<int>());
    
    print(arr,n);

}