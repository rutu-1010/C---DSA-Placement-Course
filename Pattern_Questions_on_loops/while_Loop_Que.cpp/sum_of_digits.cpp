#include<iostream>
using namespace std;

int main(){
        int n;
    cout<<"Enter number : ";
    cin>>n;
   int sum=0;
   int lastdigit;

    while(n>0){
        lastdigit=n%10;
        sum+=lastdigit;
        n=n/10;

    }
    cout<<sum;
}