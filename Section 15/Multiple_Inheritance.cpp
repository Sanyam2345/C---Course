#include <iostream>
using namespace std;

class Base1
{
protected:
    int data1;

public:
    void setdata1(int a)
    {
        data1 = a;
    }
};

class Base2
{
protected:
    int data2;

public:
    void set_data2(int b)
    {
        data2 = b;
    }
};

class Derived : public Base1, public Base2
{
public:
    void show()
    {
        cout << "The value of data1 is: " << data1 << endl;
        cout << "The value of data2 is: " << data2 << endl;
        cout << "The sum of both values is: " << data1 + data2 << endl;
    }
};

int main()
{
    Derived der;
    der.setdata1(25);
    der.set_data2(15);
    der.show();
    return 0;
}