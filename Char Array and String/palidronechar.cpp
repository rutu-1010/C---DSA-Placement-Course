#include<iostream>

using namespace std;

bool reverese(char dev[],int n){
    int st = 0;
    int en = n-1;

    while(st<en){
        swap(dev[st++],dev[en--]);
        if(dev[st]!=dev[en]){
            return false;
        }
    }
    return true;
}

int main()
{
    char dev[] = "racecar";
    cout<<reverese(dev,strlen(dev));
    
}