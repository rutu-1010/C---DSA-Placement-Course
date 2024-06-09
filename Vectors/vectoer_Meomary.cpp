#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> vec1 = {1,2,3,4,5};
    cout<<"size : "<<vec1.size()<<endl;
    cout<<"capacity : "<<vec1.capacity()<<endl;

    vec1.push_back(6);
    cout<<"size : "<<vec1.size()<<endl;
    cout<<"capacity : "<<vec1.capacity();
}