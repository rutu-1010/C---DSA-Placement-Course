#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

// int getbit(int n, int i){
//     int bitmask = (1<<i);
//     if(!(n&bitmask)){
//         cout<<"0"<<endl;
//     }
//     else{
//         cout<<"1"<<endl;
//     }
// }

// int setbit(int n, int i){
//     int bitmask = (1<<i);
    
//         cout<<(n|bitmask);
  
// }

// int clearbit(int n, int i){
//     int bitmask (~1<<i);
    
//         cout<<(n&bitmask);
  
// }

void ispowerof2(int n){
    if(!(n&n-1)){
        cout<<"It is power of two";
      }
      else{
        cout<<"It is not power of two";
      }

  
}
int main()
{
    ispowerof2(9);
    
    return 0;
}