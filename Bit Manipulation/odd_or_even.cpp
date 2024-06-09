#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

void oddoreven(int num){
    if(!(num&1)){
        cout<<"even"<<endl;
    }
    else{
        cout<<"odd"<<endl;
    }
}
int main()
{
    oddoreven(5);
    oddoreven(6);
    return 0;
}