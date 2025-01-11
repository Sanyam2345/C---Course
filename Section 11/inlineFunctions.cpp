#include <iostream>
using namespace std;

inline int add_numbers(int a, int b)
{
    return a + b;
}

int main()
{
    cout << add_numbers(5,2) << endl;
    return 0;
}
