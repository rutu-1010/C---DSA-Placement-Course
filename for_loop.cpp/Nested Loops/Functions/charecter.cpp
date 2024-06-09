// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
char next(char ch){
    if(ch=='z'){
        return 'a';
    }
    else{
      ch++;
    return ch; 
    }
    
}
int main() {
    char ch;
    cout<<"Enter char : ";
    cin>>ch;
    cout<<next(ch);

    return 0;
}