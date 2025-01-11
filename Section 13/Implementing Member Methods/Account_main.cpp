#include <iostream>
#include "Account.h"
#include "Account.cpp"
using namespace std;

int main () {
    Account sanyam;
    sanyam.set_balance(10000);
    double balance = sanyam.get_balance();
    cout << balance << endl;
    return 0;
}