#include<iostream>
#include<stack>
using namespace std;

void pushAtBottom(stack<int> &s,int val){
    if(s.empty()){
        s.push(val);
        return;
    }
    int top = s.top();
    s.pop();
    pushAtBottom(s,4);
    s.push(top);
}
int main()
{
    stack<int> s;

    s.push(3);
    s.push(2);
    s.push(1);
    
    pushAtBottom(s,4);

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;


    return 0;
}