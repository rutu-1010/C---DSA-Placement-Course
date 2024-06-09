#include<iostream>
using namespace std;

int change(int a){
    a = 20;                    //passs by value
    cout<<a<<"\n";
}

int change_by_pointer(*ptr){     //pass by reference pointer
    *ptr = 20;
    cout<<ptr;
}

int change_by_reference(int &para){
    para = 20;
    cout<<para;
}

int main(){
   int a = 10;
   change(a);
   cout<<a;
}
   

