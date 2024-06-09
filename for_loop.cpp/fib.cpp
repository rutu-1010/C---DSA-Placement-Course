// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int t1;
    int t2;
    t1=0;
    t2=1;
    int nextterm;
    for(int i=1;i<=n;i++){
        cout<<t1<<" ";
        nextterm=t1+t2;
        t1=t2;
        t2=nextterm;
    }

    return 0;
}