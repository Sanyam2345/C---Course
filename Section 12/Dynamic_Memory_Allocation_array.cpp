#include <iostream>
using namespace std;

int main () {
    int *array_ptr {nullptr};
    int size {};
    cout << "How big do you want the array?";
    cin >> size;
    array_ptr = new int [size];
    for (size_t i = 0; i < size; i++)
    {
        array_ptr[i] = i+1;
    }
    for (size_t i = 0; i < size; i++)
    {
        cout << array_ptr[i] << endl;
    }
    delete []array_ptr;
    return 0;
}