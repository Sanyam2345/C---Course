#include <iostream>
using namespace std;

class Base {
    int data1; // Private member
    public:
    int data2 {0};
    int getdata1(){
        return data1;
    }

    void setdata() {
        cout << "Enter the value of data1: ";
        cin >> data1;
    }

};

class Derived:public Base {
    int data3;
    public:
    void process() {
        setdata();
        data2 = getdata1() * 2;
        data3 = data2 * getdata1();
    }

    void display() {
        cout << "The value of data1 is: " << getdata1() << endl;
        cout << "The value of data2 is: " << data2 << endl;
        cout << "The value of data3 is: " << data3 << endl;
    }
    
};

int main() {
    Derived der;
    der.process();
    der.display();   
    return 0;
}