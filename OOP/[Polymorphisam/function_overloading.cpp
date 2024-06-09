#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

class demo{
    public:
    int show(int n){
        return n;
    }
    void show(string name){
        cout<<name<<'\n';
    }
};
int main()
{
    demo d1;
    d1.show("rutu");
    cout<<d1.show(21);
    return 0;
}