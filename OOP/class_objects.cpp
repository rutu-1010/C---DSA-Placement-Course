#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

class user{
    public:
    string id;
    int password;
    string usename="rutu_10";
    string bio;
    void deactivate(){
        cout<<"Account deactivated";
    }

};

int main()
{
    user s1;
    cout<<sizeof(s1)<<endl;
    cout<<s1.usename;

    return 0;
}