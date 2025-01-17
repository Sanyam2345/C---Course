#include <iostream>
using namespace std;

class Base1
{
public:
    void greet()
    {
        cout << "How are you?" << endl;
    }
};

class Base2
{
public:
    void greet()
    {
        cout << "Kaise ho?" << endl;
    }
};

class Derived : public Base1, public Base2
{
    string lang;

public:
    void ask()
    {
        cout << "Which language do you speak? " << endl;
        cout << "Answer: ";
        cin >> lang;
    }
    void greet()
    {
        if (lang == "English")
            Base1::greet(); // Ambiguity Resolution
        else
            Base2::greet(); // Ambiguity Resolution
    }
};

int main()
{
    Derived der;
    der.ask();
    der.greet();
    return 0;
}