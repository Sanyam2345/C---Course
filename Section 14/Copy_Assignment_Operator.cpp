#include <iostream>
#include "MyString.h"
using namespace std;

int main () {
    Mystring empty;
    Mystring obj ("Sanyam");
    empty = obj;
    obj.display();
    empty.display();
    return 0;
}