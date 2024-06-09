// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int n;
    int fact=1;
    cout<<"Enter :";
    cin>>n;
    
    for(int i = 1;i<=n;i++){
        fact=fact*i;
    }
    cout<<fact;
  

    return 0;
}