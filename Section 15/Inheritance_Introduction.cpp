#include <iostream>
using namespace std;

class Base {
    int data1; // Private member
    public:
    // int data2;
    int getdata() {
        return data1;
    }
    void setdata(int value) {
        data1 = value;
    }
    Base(){}
};

class Derived:public Base {
    int data2;
    public:
    void display() {
        cout << "The value of data1 is " << getdata() << endl;
        cout << "The value of data2 is " << data2 << endl;
    }
    Derived(){data2 = 0; setdata(0);}
    Derived(int inp){ 
        data2 = inp;
        // data1 = inp + data2;
        setdata(inp + data2);
     }
};

int main() {
    Derived der(5);
    der.display();   
    return 0;
}