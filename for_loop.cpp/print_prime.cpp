// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enteer n : ";
    cin>>n;
    
    for(int i = 2;i<n;i++){
        bool prime = true;
        for(int j = 2;j<i;j++){
            if(i%j==0){
                prime=false;
                break;
            }
        }
        if(prime){
            cout<<i<<" ";
        }
    }


    return 0;
}