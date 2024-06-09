#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

class demo{
    string data = "secret data";  // Corrected initialization
    friend class demo2;           // Declaring demo2 as a friend class
    friend void revealsecret(demo &obj);  // Declaring the friend function

public:
    // Providing a method to access private data if needed
    string getData() const {
        return data;
    }
};

class demo2{
public:
    void show(demo &obj){
        cout << obj.data << endl;
    }
};

// Correct definition of the friend function
void revealsecret(demo &obj){
    cout << "Secret revealed: " << obj.data << endl;
}

int main() {
    demo d2;
    demo2 d1;
    d1.show(d2);

    revealsecret(d2);
    return 0;
}
