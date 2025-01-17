#include <iostream>
using namespace std;

int main() {
    double average {0};
    int total {0}, sum {0};
    cout << "Enter sum: ";
    cin >> sum;
    cout << "Enter total number of numbers: ";
    cin >> total;
    try {
        if (total == 0)
            throw 0;
        average = static_cast<double>(sum)/total;
    }
    catch (int &ex) {
        cerr << "Trying to divide by zero." << endl;
    }
    cout << "Program continues" << endl;
    cout << "Average = " << average << endl;
    return 0;
}