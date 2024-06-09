#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

class parrent{
    public:
    virtual void show(){
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
    parrent *ptr;
    ptr = & child;

    ptr->show();
    return 0;
}