#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

class user{
    user(){
        cout<<"Non-parameterized constructor is being called";
    }
    user(string name,int password){
       this->usename= name;
        password=password;
    }
    private:
    string id;
    int password;
    public:
    string usename;
    string bio;
    void deactivate(){
        cout<<"Account deactivated";
    }

  
    void getid(){
        cout<<"ID : "<<usename;
    }

};

int main()
{
    user s1;
    
    cout<<s1("Hrutz",121);

    return 0;
}