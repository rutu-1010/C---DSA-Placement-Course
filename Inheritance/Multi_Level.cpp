#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

class animal{
    public:
    void eat(){
        cout<<"Eats\n";
    }
    void breath(){
        cout<<"breaths\n";
    }

};

class fish : public animal{
   public:
   void swim(){
    cout<<"Swims\n";
   }
};

class shark:public fish{
    public:
    void fins(){
        cout<<"shark has 2 fins";
    }
};

int main()
{
    fish f1;
    shark s1;
    s1.eat();

    return 0;
}