#include<iostream>
using namespace std;

void printsubarr(int *arr, int n){
    for(int st=0; st<n; st++){
        for(int en=st; en<n; en++){
            // cout<<"("<<st<<','<<en<<")"<<" ";
            for (int i = st; i <= en; i++)
            {
                cout<<arr[i];
            }
            cout<<",";
            
        }
        cout<<endl;
    }
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int n = sizeof(arr)/sizeof(int);
    printsubarr(arr,n);
}