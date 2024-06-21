#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

bool isduplicate(int arr[],int n){
    for(int i = 0;i<n; i++){
        for(int j = i+1;j<n; j++){
            if(arr[i]==arr[j]){
                return true;
            }
        }
    }
    return false;
}


int main()
{
   int arr[]={1,2,3,3,5,6};
   int n = sizeof(arr)/sizeof(int);
   
  if(isduplicate(arr,n)){
      cout<<"array contains repeated elements"<<endl;
  }
  else{
      cout<<"array is real";
  }
    return 0;
}