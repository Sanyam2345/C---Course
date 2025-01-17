#include <iostream>
using namespace std;

class Base1
{
    int data1;

public:
    Base1(int i)
    {
        data1 = i;
        cout << "Base1 Constructor called!" << endl;
    }
    void DisplayB1()
    {
        cout << "The value of data1 is: " << data1 << endl;
    }
};

class Base2
{
    int data2;

public:
    Base2(int i)
    {
        data2 = i;
        cout << "Base2 Constructor called!" << endl;
    }
    void DisplayB2() { cout << "The value of data2 is: " << data2 << endl; }
};

class Derived : public Base1, public Base2
{
    int derived;

public:
    Derived(int i, int j, int k) : Base1(i), Base2(j)
    {
        derived = k;
        cout << "Derived Constructor called!" << endl;
    }
    void Display()
    {
        DisplayB1();
        DisplayB2();
        cout << "The value of derived is: " << derived << endl;
    }
};

int main()
{
    Derived sanyam(1, 2, 3);
    sanyam.Display();
    return 0;
}