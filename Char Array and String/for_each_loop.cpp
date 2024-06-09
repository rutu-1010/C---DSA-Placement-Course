#include<iostream>
#include<iostream>
using namespace std;

int main()
{
    string me = "Rutu";
    // for(int i = 0;i<me.length();i++){
    //     cout<<me[i]<<" ";
    // }

    for(char ch : me){
        cout<<me<<" ,";
    }
    cout<<endl;
}