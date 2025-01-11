#include <iostream>
using namespace std;

int main() {
    int num {10};

    // Increment by assignment
    num = num + 1;
    cout << num << endl << endl;

    // Increment by post increment
    cout << num++ << endl;
    cout << "After post increment " << num << endl << endl;

    // Increment by pre increment
    cout << ++num << endl;
    cout << "After pre increment " << num << endl << endl;

    // Decrement by by assignment
    num = num - 1;
    cout << num << endl << endl;

    // Decrement by post Decrement
    cout << num-- << endl;
    cout << "After post decrement " << num << endl << endl;

    // Decrement by pre Decrement
    cout << --num << endl;
    cout << "After pre decrement " << num << endl << endl;

    return 0;
}
