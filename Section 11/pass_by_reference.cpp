#include <iostream>
using namespace std;

void swap (int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x {23}, y {15};
    cout << "x = " << x << "\ty = " << y << endl;
    swap(x,y);
    cout << "x = " << x << "\ty = " << y << endl;
    return 0;
}
