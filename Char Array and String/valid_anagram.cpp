#include<iostream>
#include<cstring>
using namespace std;

bool isAnagram(string str1 , string str2){
    if(str1.length()!=str2.length()){
        cout<<"Not a Valid Anagram";
        return false;
    }
    int count[26]={0};
    for(int i = 0; i<str1.length();i++){
        int idx = str1[i]-'a';
       count[idx]++;
    }
    for(int i = 0; i<str2.length();i++){
        int idx = str2[i]-'a';
        if(count[idx]==0){
            cout<<"Not a Valid Anagram";
            return false;
        }
       count[idx]--;
    }
     cout<<" Valid Anagram";
    return true;
}
int main()
{
   string str1 = "rut";
   string str2 = "tur";
   isAnagram(str1,str2);

}