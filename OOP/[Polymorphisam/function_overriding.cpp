#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

class parrent{
    public:
    void show(){
        cout<<"parrent class member function called \n";
    }
};

class child:public parrent{
    public:
    void show(){
        cout<<"child class member function called \n";
    }
};
int main()
{
    child c;
    c.show();
    return 0;
}