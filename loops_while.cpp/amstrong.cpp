// Online C++ compiler to run C++ program online
#include <iostream>
#include<cmath>
using namespace std;


int main() {
    int n;
    
    cout<<"enter : ";
    
    cin>>n;
    int orignal = n;
    int ams,cube;
    ams=0;
    cube=0;
    
    while(n>0){
        int a=n%10;
        cube=pow(a,3);
        ams=ams+cube;
        n/=10;
        
        
    }
    if(ams==orignal){
        cout<<"it is amstrong number";
    }
    else{
        cout<<"not amstrong";
    }

    return 0;
}