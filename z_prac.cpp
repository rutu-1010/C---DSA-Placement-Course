#include<iostream>
#include<cstring>
#include<vector>
#include<cmath>
using namespace std;

void revereenum(int num){
    

    int rev = 0;

    while(num>0){
        int lastdigit = num%10;
        rev = rev*10 + lastdigit;
        num/=10;
    }

    cout<<rev;
}

void isprime(int n){
    for(int i=0;i<sqrt(n);i++){
        if(n%i==0){
    
            cout<<"Not preime";
            break;
        }
   
    }
    cout<<"Primr number";
}


int main()
{
    int n = 5689;
    // revereenum(n);
    isprime(13);
   
    return 0;
}