// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int reverse(int n){
    int rev=0;
    while(n>0){
        int lastdigit=n%10;
        rev=rev*10+lastdigit;
        n=n/10;;
    }
    return rev;
}

bool ispalidrone(int v){
    int revnum=reverse(v);
    return v==revnum;
}

int main() {
    int n;
    cout<<"enter : ";
    cin>>n;
    cout<<ispalidrone(n);
    
    return 0;
}