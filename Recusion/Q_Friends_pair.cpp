#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

int frienspair(int n){
    if(n==1||n==2){
        return n;
    }

    return frienspair(n-1)+(n-1)*frienspair(n-2);  //singal + pair
}

int main()
{
    cout<<frienspair(4);
    return 0;
}