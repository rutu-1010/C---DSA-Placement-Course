#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
// int firstocc(vector<int> vec,int i,int target){
    
//     if(i==vec.size()){
//         return -1;
//     }
//     if(vec[i]==target){
//         return i;
//     }
    
//     return firstocc(vec,i+1,target);
// }

int lastocc(vector<int> vec,int i,int target){
    
    if(i==vec.size()){
        return -1;
    }
    int indexfound = lastocc(vec,i+1,target);
    if(indexfound==-1 && vec[i]==target){
        return i;
    }
    
    return indexfound;
}
int main()
{
    vector<int> vec={1,2,3,2,5,6};
    int n = vec.size();
    
    cout<<lastocc(vec,0,2);
    return 0;
}