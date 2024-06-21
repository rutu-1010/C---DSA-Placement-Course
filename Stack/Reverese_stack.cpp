#include<iostream>
#include<stack>
using namespace std;

void pushAtBack(stack<int> &s, int val){
    if(s.empty()){
        s.push(val);
        return;
    }
    int top = s.top();
    s.pop();
    pushAtBack(s,val);
    s.push(top);
}

void reveresestack(stack<int> &s){
    if(s.empty()){
        return;
    }
    int temp = s.top();
    s.pop();
    reveresestack(s);
    pushAtBack(s,temp);
}

void print(stack<int> s){
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}
int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);

    print(s);
    reveresestack(s);
    print(s);
    return 0;
}