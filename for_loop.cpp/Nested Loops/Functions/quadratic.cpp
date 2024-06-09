// Online C++ compiler to run C++ program online
#include <iostream>
#include<cmath>
using namespace std;
int quadratic(int a, int b){
    cout<<a<<"^2"<<'+'<<b<<"^2"<<'+'<<'2'<<a<<b<<"=";
    int sum = pow(a,2)+pow(b,2)+2*a*b;
    return sum;
}
int main() {
    int a,b;
    cout<<"Enter a :";
    cin>>a;
    cout<<"Enter b : ";
    cin>>b;
    cout<<quadratic(a,b);

    return 0;
}