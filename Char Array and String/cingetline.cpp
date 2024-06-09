#include<iostream>
using namespace std;

int main()
{
    // char dev[30];
    // cin>>dev;

    // cout<<"Your Entered : "<<dev;
    // cout<<"Length  : "<<strlen(dev);


    char sentence[50];
    cin.getline(sentence,50,'n');

    cout<<"Your Entered : "<<sentence<<'\n';
    cout<<"Length  : "<<strlen(sentence);
}