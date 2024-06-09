#include<iostream>
using namespace std;

bool search(int arr[][3],int n,int m, int key){
    int i = 0; int j = m-1;

    while(i<n && j>=0){
        if(arr[i][j]==key){
            cout<<"Found at ("<<i<<","<<j<<")"<<"\n";
            return true;
        }
        else if(key>arr[i][j]){
            i++;
        }else{
            j--;
        }
    }
    cout<<"Key not Found : ";
}

int main(){
    int arr[3][3]={{10,20,30},
                    {40,50,60},
                    {70,80,90}};

    search(arr,3,3,80);      
}