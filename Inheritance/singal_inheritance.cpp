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

int main()
{
    fish f1;
    f1.eat();

    return 0;
}