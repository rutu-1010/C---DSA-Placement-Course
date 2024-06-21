#include<iostream>
#include<cstring>
#include<vector>
#include<list>
#include<iterator>
#include<cmath>
using namespace std;

template<class T>

class stack{
    vector<T> vec;

    public:
    void push(T val){
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
    stack<string> s;
    s.push("Rutraj");
    s.push("Ruturaj ");
    s.push("Radhakisan ");

    while(!s.isEmty()){
       s.top();
       s.pop();
    }
    return 0;
}