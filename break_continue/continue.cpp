#include<iostream>
using namespace std;

int main(){
    int n,i;
    do{
        cout<<"Enter number : ";
        cin>>n;
        if(n%2==0){
            continue;
        }
        cout<<"you entered : "<<n<<endl;
        i++;
    }while (i<10);
    {
        cout<<"Limit excid!!";
    }
 
    
}