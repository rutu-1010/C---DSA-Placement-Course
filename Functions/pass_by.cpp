#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

void change(int n){       //by value
    n = 10;
    cout<<n<<endl;;              
}

void change_byrefvar(int &n){       //by reference variable
    n = 10;
    cout<<n<<endl;;              
}

void change_byrefptr(int *ptr){       //by value
    *ptr = 10;
    cout<<*ptr<<endl;;              
}
int main()
{
    int a = 5;

    change_byrefptr(&a); //  by reference variable

    cout<<a;

    return 0;
}