#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

class complex{
    int real;
    int imag;

    public:

    complex(int r,int i){
        real = r;
        imag = i;
    }

    void show(){
        cout<<real<<'+'<<imag<<'i'<<endl;
    }

    complex operator + (complex &c2){
        int resreal = this->real+c2.real;
        int resimag = this->imag+c2.imag;
        
        return complex(resreal,resimag);
    }
};
int main()
{
    complex c1(5,2);
    complex c2(2,5);
    complex c3 = c1+c2;
    c1.show();
    c2.show();
    c3.show();
    return 0;
}