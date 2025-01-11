#include <iostream>
using namespace std;

int main ()
{
    int num {10};
    cout << "Value of num is: " << num << endl; // 10
    cout << "sizeof of num is: " << sizeof(num) << endl; // 4
    cout << "Address of num is: " << &num << endl; // value like  0xc3f57ff7fc
    int *p;
    cout << "Value of p is: " << p << endl; // 0
    cout << "Address of p is: " << &p << endl; //  0x8735bffd50
    cout << "sizeof of p is: " << sizeof(p) << endl; // 8
    p = nullptr;
    cout << "Value of p is: " << p << endl; // 0
    return 0;
}
