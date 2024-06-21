#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
bool issorted(int arr[],int n,int i){
    if(i==n-1){
        return true;
    }
    if(arr[i]>arr[i+1]){
        return false;
    }
    
    return issorted(arr,n,i+1);
}
int main()
{
    int arr[]={1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(int);
    cout<<issorted(arr,n,1);
    return 0;
}