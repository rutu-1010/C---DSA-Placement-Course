#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

class car{
    public:
    string name;
    int price;
    
    car(string name,string price){
        this->name=name;
        this->price=price;
    }
};

int main()
{
    car c1;
    car c(c1);
    return 0;
}