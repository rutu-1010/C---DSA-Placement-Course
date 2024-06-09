#include<iostream>
#include<vector>
using namespace std;

//bruteforce approach

// void targetpair(int arr[],int t, int n){
//     for(int i = 0;i<n; i++){
//         for(int j = i+1;j<n; j++){
//             int sum = arr[i]+arr[j];
//             if(sum==t){
//                 cout<<i<<" ,"<<j<<endl;;
//             }
//         }
//     }
// }

//two pointer aproach

// void targetpair(int arr[],int t, int n){
//     int st = 0;
//     int en = n;

//     while(st<en){
//         int sum = arr[st] + arr[en];
//         if(sum==t){
//             cout<<st<<","<<en<<endl;
//             break;
//         }  
//         else if(sum>t){
//             en--;
//         }
//         else{
//             st++;
//         }
//     }
// }

//using vector

vector<int> targetpair(vector<int> arr,int t){
    int st = 0;
    int en = arr.size()-1;
    vector<int> ans;

    while(st<en){
        int sum = arr[st] + arr[en];
        if(sum==t){
            // cout<<st<<","<<en<<endl;
            ans.push_back(st);
            ans.push_back(en);
            return ans;
        }  
        else if(sum>t){
            en--;
        }
        else{
            st++;
        }
    }
}
int main()
{
    vector<int> vec1 = {1,2,3,4,5};
    // int n = sizeof(vec1)/sizeof(int);
    int target = 4;
    vector<int> ans=targetpair(vec1,target);
    // targetpair(vec1,target);
    cout<<ans[0]<<","<<ans[1];
}