// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int calculate(int x){
    int sum=0;
    while(x>0){
        
       int n = x%10;
        sum=sum+n;
        x=x/10;
    }
    return sum;
    
}

int main() {
    int n;
    cout<<"enter : ";
    cin>>n;
    cout<<calculate(n);
    
    

    return 0;
}