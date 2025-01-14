#include <iostream>
#include "MyString.h"
using namespace std;

int main() {
    Mystring obj1 {"Sanyam"};
    Mystring obj2 {" Gairola"};
    Mystring concat = obj1 + obj2;
    concat.display();
    Mystring Lower = -obj1;
    Lower.display();
    return 0;
}