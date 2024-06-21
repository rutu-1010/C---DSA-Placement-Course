#include<iostream>
#include<stack>
#include<string>
using namespace std;

string revereseString(string str){
    stack<char> s;
    string ans;
    for(int i = 0;i<str.size();i++){
        s.push(str[i]);  
    }

    while(!s.empty()){  
        char top = s.top();
        ans+=top;
        s.pop();
    }

    return ans;
}
int main()
{
    string str = "Ruturaj";
    cout<<"Reverese : "<<revereseString(str);
    return 0;
}