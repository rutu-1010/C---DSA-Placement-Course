#include<iostream>

using namespace std;

void reverese(char dev[],int n){
    int st = 0;
    int en = n-1;

    while(st<en){
        swap(dev[st++],dev[en--]);
        st++;
        en--;
    }
}

int main()
{
    char dev[] = "JAI SHRI RAM";
    reverese(dev,strlen(dev));
    cout<<dev;
}