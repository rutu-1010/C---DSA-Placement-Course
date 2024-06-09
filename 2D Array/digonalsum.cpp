#include<iostream>
using namespace std;
int digonalsum(int arr[][3],int n){
    int sum = 0;
    for(int i = 0; i<n; i++){
         for(int j = 0; j<n; j++){
            if(i==j){
                sum+=arr[i][j];
            }
            else if(j==n-i-1){
                sum+=arr[i][j];
            }
         }
    }
    cout<<"Sum of Digonal is : "<<sum;

    return sum;
}
int main(){
    int arr[3][3]={{10,20,30},
                    {40,50,60},
                    {70,80,90}};

    digonalsum(arr,3);     
}