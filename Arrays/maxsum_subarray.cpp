// brutt force method
#include <iostream>
#include <climits>
using namespace std;

int maxSumSubarray(int *arr, int n) {
    int maxsum=INT_MIN;
  for(int st=0; st<n; st++){
      for(int en=st; en<=n; en++){
          int sum=0;
          for(int i=st; i<en; i++){
              sum+=arr[i];
          }
          maxsum = max(sum,maxsum);
      }
  }
  cout<<"Maxsum is  : "<<maxsum;
    return maxsum;
}
int main() {
    int arr[]={1,2,3,4,5,6,7,8};
    int n = sizeof(arr)/sizeof(int);
    maxSumSubarray(arr,n);
    return 0;
}