#include <iostream>
using namespace std;

class Base
{
protected:
    int data1; // Protected Member
public:
    int data2{0};
    int getdata1()
    {
        return data1;
    }
};

class Derived : protected Base
{
    int data3{0};

public:
    void process()
    {
        cout << "Enter the value of data1: ";
        cin >> data1;
        data2 = 2 * data1;
        data3 = 2 * data2;
    }
    void Display()
    {
        cout << "The value of data1 is: " << data1 << endl;
        cout << "The value of data2 is: " << data2 << endl;
        cout << "The value of data3 is: " << data3 << endl;
    }
};

int main()
{
    Derived der;
    der.process();
    der.Display();
    return 0;
}