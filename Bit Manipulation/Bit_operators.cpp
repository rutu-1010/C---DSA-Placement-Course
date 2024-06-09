#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

int main()
{
    cout<<(3&5)<<endl;
    cout<<(3|5)<<endl;
    cout<<(3^5)<<endl;

    //ones complement

    cout<<(~0)<<endl;
    cout<<(~6)<<endl;

    //binary shift operator

    cout<<7<<2<<endl;  //left shift
    cout<<(7>>2)<<endl;  //right shift



    
    return 0;
}