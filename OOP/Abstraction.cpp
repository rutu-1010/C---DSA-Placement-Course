#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

class shape{  // abstract class
    public:
    virtual void draw()=0;  //pure virtual function //abstraction function
};

class circle:public shape{
    public:
    void draw(){
        cout<<"Drwaing circle\n";
    }
};

class square:public shape{
    public:
    void draw(){
        cout<<"Drwaing square\n";
    }
};

int main()
{
    circle c;
    c.draw();
    square s;
    s.draw();
    return 0;
}