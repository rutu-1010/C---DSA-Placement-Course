// Online C++ compiler to run C++ program online
#include <iostream>
#include <climits>
using namespace std;

int maxsum3(int *arr,int n){
    int maxsum = INT_MIN;
    int sum = 0;
    
    for(int i=0;i<n;i++){
        sum=+arr[i];
        maxsum=max(maxsum,sum);
        if(sum<0){
            sum=0;
        }
    }
    cout<<maxsum;
    return maxsum;
}
int main() {
    int arr[6]={2,-3,6,-5,4,2};
    int n = sizeof(arr)/sizeof(int);
    maxsum3(arr,n);
    return 0;

    return 0;
}