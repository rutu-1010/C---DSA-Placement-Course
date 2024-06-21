#include<iostream>
#include<cstring>
#include<vector>
using namespace std;


void subset(string str,string ans){
    if(str.size()==0){
       cout<<ans<<endl;
       return;
    }
    char ch = str[0];
    // yes
    subset(str.substr(1,str.size()-1), ans+ch);
    //no
     subset(str.substr(1,str.size()-1), ans);
}
int main()
{
    string str = "abc";
    string ans = "";
    subset(str,ans);
    
    return 0;
}