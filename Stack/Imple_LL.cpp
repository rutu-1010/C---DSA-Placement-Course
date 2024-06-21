#include<iostream>
#include<cstring>
#include<vector>
#include<list>
#include<iterator>
#include<cmath>
using namespace std;

template <class T>

class stack{
    list<T> ll;
    public:
    void push(T val){
        ll.push_front(val);
    }

    void pop(){
        if(isEmty()){
            cout<<"Stack is Empty : ";
        }
        ll.pop_front();
    }

    void top(){
        int lastdigit = ll.size()-1;
        cout<< ll.front()<<" ";
    }

    bool isEmty(){
        return ll.size()==0;
    }
};

int main()
{
    stack<int> s;
    s.push(3);
    s.push(2);
    s.push(1);

    while(!s.isEmty()){
       s.top();
       s.pop();
    }
    return 0;
}