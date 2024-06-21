#include<iostream>
#include<cstring>
#include<vector>
#include<list>
#include<iterator>
#include<cmath>
using namespace std;

class stack{
    vector<int> vec;

    public:
    void push(int val){
        vec.push_back(val);
    }

    void pop(){
        if(isEmty()){
            cout<<"Stack is Empty : ";
        }
        vec.pop_back();
    }

    void top(){
        int lastdigit = vec.size()-1;
        cout<< vec[lastdigit]<<" ";
    }

    bool isEmty(){
        return vec.size()==0;
    }
};

int main()
{
    stack s;
    s.push(3);
    s.push(2);
    s.push(1);

    while(!s.isEmty()){
       s.top();
       s.pop();
    }
    return 0;
}