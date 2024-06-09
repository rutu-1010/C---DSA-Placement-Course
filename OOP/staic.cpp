#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

void staticcount(){
    static int count = 0;                   //with static key word

    count++;

    cout<<"count :" <<count <<endl;

}
void count(){
     int count = 0;                 //without static key word

    count++;

    cout<<"count :" <<count <<endl;

}


int main()
{
    count();
    count();
    count();
    staticcount();
    staticcount();
    staticcount();


    return 0;
}