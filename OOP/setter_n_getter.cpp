#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

class user{
    private:
    string id;
    int password;
    public:
    string usename;
    string bio;
    void deactivate(){
        cout<<"Account deactivated";
    }

    void setid(string name){
        id = name;
    }
    void getid(){
        cout<<"ID : "<<id;
    }

};

int main()
{
    user s1;
    
    s1.setid("ruturaj");
    s1.getid();

    return 0;
}