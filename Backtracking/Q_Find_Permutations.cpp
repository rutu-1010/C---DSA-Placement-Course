#include<iostream>
#include<cstring>
#include<vector>
using namespace std;


void permutation(string str,string ans,int n){
    if(n==0){
        cout<<ans<<" "<<endl;
        return;
    }
   for (int i = 0; i < n; i++)

   {
    char ch = str[i];
    string nextstr = str.substr(0,i)+str.substr(i+1,n-i-1);
    permutation(nextstr,ans+ch,nextstr.size());
   }
   
}
int main()
{
    string str = "abc";
    string ans = "";
    int n = str.size();
    permutation(str,ans,n);
    
    return 0;
}