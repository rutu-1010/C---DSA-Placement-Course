// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int large(int a, int b, int c){
    cout<<"Greatest of "<<a<<","<<b<<" and "<<c<<" is : ";
    if(a>b){
        if(a>c){
            return a;
        }
        else{
            return c;
        }
    }
    else{
        if(b>c){
            return b;
        }
        else{
            return c;
        }
    }
}
int main() {
    int a,b,c;
   cout<<"Enter 3 numbers : ";
   cin>>a>>b>>c;
   
   cout<<large(a,b,c);
   

    return 0;
}