// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int n = 4;
    int i;
    for ( i = 1; i <= n; i++)
    
    {
        int val = i;
        for (int j = 1; j <= i; j++)
        {
            cout<<val;
            val++;
        }
        cout<<endl;
    }
    

    return 0;
}