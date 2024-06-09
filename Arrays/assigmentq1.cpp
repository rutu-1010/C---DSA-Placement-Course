// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

bool iscopy(int *arr, int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                return true;
                break;
            }
            
        }
    }
    return false;
}
int main() {
   int arr[]={1,2,3,4,4};
   int n = sizeof(arr)/sizeof(int);
   
   cout<<iscopy(arr,n);

    return 0;
}