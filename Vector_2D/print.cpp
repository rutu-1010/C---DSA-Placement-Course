#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

int main()
{
    vector<vector<int>> vec1 = {{1,2,3,4,5},{6,5,8},{1}};
    // cout<<vec1.size(); this are number of rows
    for(int i = 0; i<vec1.size();i++){
        for(int j = 0;j<vec1[i].size();j++){
            cout<<vec1[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}