// Online C++ compiler to run C++ program online
#include <iostream>
#include <climits>
using namespace std;

int maxSumSubarray(int *arr, int n) {
    int maxsum=INT_MIN;
  for(int st=0; st<n; st++){
        int sum=0;
      for(int en=st; en<=n; en++){
        sum+=arr[en];
          
          maxsum = max(sum,maxsum);
      }
  }
  cout<<"Maxsum is  : "<<maxsum;
    return maxsum;
}
int main() {
    int arr[]={2,-3,6,-5,4,2};
    int n = sizeof(arr)/sizeof(int);
    maxSumSubarray(arr,n);
    return 0;
}