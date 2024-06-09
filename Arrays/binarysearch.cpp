#include<iostream>
using namespace std;

int binarysearch(int *arr,int n,int key){
    int s=0;
    int e=n-1;
    
    while(s<=e){
        int mid=(s+e)/2;
        if(key==arr[mid]){
           return mid;
        }
        else{
            if(key<arr[mid]){
                
                e=mid-1;

            }
            if(key>arr[mid]){
                s=mid+1;
                

            }
        }

    }
    return -1;
}
int main(){
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(int);
    cout<<binarysearch(arr,n,5);

}