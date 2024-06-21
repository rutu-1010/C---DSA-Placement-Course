#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

void isduplicate(string str,string ans,int i,int map[26]){
    
    

    if(i==str.size()){
        cout<<"ANS : "<<ans<<endl;
        return;
    }
    char ch = str[i];
    int mapIdx = str[i]-'a';

    if(map[mapIdx]==true){
       isduplicate(str,ans+str[i],i+1,map);
    }
    else{
        map[mapIdx]=true;
        isduplicate(str,ans,i+1,map);
    }

}
int main()
{
    string str = "ruturaj";
    string ans="";
    int map[26]={false};
    isduplicate(str,ans,0,map);
    return 0;
}