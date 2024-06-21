#include<iostream>
// #include<cstring>
// #include<vector>
#include<list>
#include<iterator>
// #include<cmath>
using namespace std;

void print(list<int> ll){
list<int>::iterator itr;

    for(itr=ll.begin();itr!=ll.end();itr++){
        cout<<*itr<<"->";
    }
    cout<<"NULL";
    cout<<endl;
}
int main()
{
    list<int> ll;

    ll.push_front(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.push_back(4);

    print(ll);

    cout<<"head = "<<ll.front()<<endl;;
    cout<<"tail = "<<ll.back()<<endl;;

    ll.pop_front();
    ll.pop_back();

    print(ll);
    return 0;
}