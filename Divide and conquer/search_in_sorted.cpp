#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

int search(int arr[],int si,int ei,int tar){
    if(si>ei){
        return -1;
    }
    int mid = (si+ei)/2;

    if(arr[mid]==tar){
        return mid;
    }

    if(arr[si]<=arr[mid]){
        if(arr[si]<=tar && tar<=arr[mid]){
            return search(arr,si,mid-1,tar);
        }
        else{
            return search(arr,mid+1,ei,tar);
        }
        
    }
    else{
        if(arr[mid]<=tar && tar<=arr[ei]){
             return search(arr,mid+1,ei,tar);
        }
        else{
            return search(arr,si,mid-1,tar);
        }
    }
}
int main()
{
    int arr[]={3,4,5,6,7,0,1,2};
    int n = sizeof(arr)/sizeof(int);
    int tar = 3;
    cout<<"idx : " << search(arr,0,n-1,tar);
    return 0;
}