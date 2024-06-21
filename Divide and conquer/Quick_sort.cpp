#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

int partition(int arr[], int si, int ei){
    int i = si - 1;
    int pivot = arr[ei];

    for(int j=si;j<ei;j++){
        if(arr[j]<=pivot){
             i++;
            swap(arr[i],arr[j]);
           
        }

    }
    i++;
    swap(arr[i],arr[ei]);
    return i;
}

void quicksort(int arr[],int si, int ei){
    if(si>=ei){
        return;
    }
    int pivotidx = partition(arr,si,ei);

    quicksort(arr,si,pivotidx-1);
    quicksort(arr,pivotidx+1,ei);
}
void print(int arr[],int si, int ei){
    for (int i = si; i <= ei; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
}
int main()
{
    int arr[] = {5,6,9,7,5,2};
    int n = sizeof(arr)/sizeof(int);
    quicksort(arr,0,n-1);
    print(arr,0,n-1);

    return 0;
}