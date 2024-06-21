#include<iostream>
#include<cmath>
#include<cstring>
#include<vector>
using namespace std;

int square(int x, int n){
    if(n==0){
        return 1;
    }
    int halfpower = pow(x,n/2);
    int halfsquare = halfpower*halfpower;
    if(n%2!=0){
        return x*halfsquare;
    }

    return halfsquare;
}

int main()
{
    cout<<square(2,10);

    return 0;
}